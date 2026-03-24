class TestSession:
    def __init__(self, ue_id, cell_id):
        self.ue_id = ue_id
        self.cell_id = cell_id
        self.rsrp_list = []
        self.sinr_list = []
        self.bler_list = []
        

    def add_measurement(self, rsrp, sinr, bler):
        self.rsrp_list.append(rsrp)
        self.sinr_list.append(sinr)
        self.bler_list.append(bler)

    
    def average_rsrp(self):
        if not self.rsrp_list:
            return None
        return sum(self.rsrp_list)/len(self.rsrp_list)

    def average_sinr(self):
        if not self.sinr_list:
            return None
        return sum(self.sinr_list)/len(self.sinr_list)

    def average_bler(self):
        if not self.bler_list:
            return None
        return sum(self.bler_list)/len(self.bler_list)
        

    def result(self):
        if self.average_rsrp() > -100 and self.average_sinr() > 5 and self.average_bler() < 0.10:
            return "PASS"
        else:
            return "FAIL"

    def report(self):
        print("========================")
        print("Test Report")
        print(f"UE: {self.ue_id}  Cell: {self.cell_id}")
        print(f"Avg RSRP: {self.average_rsrp():.1f} dBm")
        print(f"Avg SINR: {self.average_sinr():.1f} dB")
        print(f"Avg BLER: {self.average_bler():.2f}")
        print(f"Result:   {self.result()}")
        print("========================")

session1 = TestSession(ue_id=1, cell_id='A')
session1.add_measurement(-80, 12, 0.02)
session1.add_measurement(-85, 10, 0.03)
session1.add_measurement(-90, 11, 0.04)
session1.report()

session2 = TestSession(ue_id=2, cell_id='B')
session2.add_measurement(-105, 3, 0.25)
session2.add_measurement(-110, 2, 0.35)
session2.add_measurement(-115, 1, 0.45)
session2.report()
