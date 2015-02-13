function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["ZedBoardTest:29"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:76"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:77"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:78"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:106"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:107"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:108"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:109"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:34"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:79"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:80"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:81"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:83"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:84"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:85"] = "ZedBoardTest:5";
    this.sidParentMap["ZedBoardTest:86"] = "ZedBoardTest:5";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
