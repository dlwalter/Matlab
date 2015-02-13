function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <S1>/in1 */
	this.urlHashMap["ZedBoardTest:29"] = "msg=rtwMsg_notTraceable&block=ZedBoardTest/led_counter/in1";
	/* <S1>/in2 */
	this.urlHashMap["ZedBoardTest:76"] = "msg=rtwMsg_notTraceable&block=ZedBoardTest/led_counter/in2";
	/* <S1>/Unit Delay */
	this.urlHashMap["ZedBoardTest:106"] = "led_counter.vhd:81";
	/* <S1>/Unit Delay1 */
	this.urlHashMap["ZedBoardTest:107"] = "led_counter.vhd:93";
	/* <S1>/Unit Delay2 */
	this.urlHashMap["ZedBoardTest:108"] = "led_counter.vhd:117";
	/* <S1>/Unit Delay3 */
	this.urlHashMap["ZedBoardTest:109"] = "led_counter.vhd:105";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ZedBoardTest"};
	this.sidHashMap["ZedBoardTest"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>/in1"] = {sid: "ZedBoardTest:29"};
	this.sidHashMap["ZedBoardTest:29"] = {rtwname: "<S1>/in1"};
	this.rtwnameHashMap["<S1>/in2"] = {sid: "ZedBoardTest:76"};
	this.sidHashMap["ZedBoardTest:76"] = {rtwname: "<S1>/in2"};
	this.rtwnameHashMap["<S1>/in3"] = {sid: "ZedBoardTest:77"};
	this.sidHashMap["ZedBoardTest:77"] = {rtwname: "<S1>/in3"};
	this.rtwnameHashMap["<S1>/in4"] = {sid: "ZedBoardTest:78"};
	this.sidHashMap["ZedBoardTest:78"] = {rtwname: "<S1>/in4"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "ZedBoardTest:106"};
	this.sidHashMap["ZedBoardTest:106"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Unit Delay1"] = {sid: "ZedBoardTest:107"};
	this.sidHashMap["ZedBoardTest:107"] = {rtwname: "<S1>/Unit Delay1"};
	this.rtwnameHashMap["<S1>/Unit Delay2"] = {sid: "ZedBoardTest:108"};
	this.sidHashMap["ZedBoardTest:108"] = {rtwname: "<S1>/Unit Delay2"};
	this.rtwnameHashMap["<S1>/Unit Delay3"] = {sid: "ZedBoardTest:109"};
	this.sidHashMap["ZedBoardTest:109"] = {rtwname: "<S1>/Unit Delay3"};
	this.rtwnameHashMap["<S1>/LED1"] = {sid: "ZedBoardTest:34"};
	this.sidHashMap["ZedBoardTest:34"] = {rtwname: "<S1>/LED1"};
	this.rtwnameHashMap["<S1>/LED2"] = {sid: "ZedBoardTest:79"};
	this.sidHashMap["ZedBoardTest:79"] = {rtwname: "<S1>/LED2"};
	this.rtwnameHashMap["<S1>/LED3"] = {sid: "ZedBoardTest:80"};
	this.sidHashMap["ZedBoardTest:80"] = {rtwname: "<S1>/LED3"};
	this.rtwnameHashMap["<S1>/LED4"] = {sid: "ZedBoardTest:81"};
	this.sidHashMap["ZedBoardTest:81"] = {rtwname: "<S1>/LED4"};
	this.rtwnameHashMap["<S1>/read_back1"] = {sid: "ZedBoardTest:83"};
	this.sidHashMap["ZedBoardTest:83"] = {rtwname: "<S1>/read_back1"};
	this.rtwnameHashMap["<S1>/read_back2"] = {sid: "ZedBoardTest:84"};
	this.sidHashMap["ZedBoardTest:84"] = {rtwname: "<S1>/read_back2"};
	this.rtwnameHashMap["<S1>/read_back3"] = {sid: "ZedBoardTest:85"};
	this.sidHashMap["ZedBoardTest:85"] = {rtwname: "<S1>/read_back3"};
	this.rtwnameHashMap["<S1>/read_back4"] = {sid: "ZedBoardTest:86"};
	this.sidHashMap["ZedBoardTest:86"] = {rtwname: "<S1>/read_back4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
