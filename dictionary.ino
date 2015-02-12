//dictionary.ino Copyright 2015 Paul Beaudet - See license.txt for details
//The following is a basic short hand dictionary based on exact matching
//common words to autocorrect based on first letter
const char str0[] PROGMEM = "the";    const char str1[] PROGMEM = "be";
const char str2[] PROGMEM = "of";     const char str3[] PROGMEM = "and";
const char str4[] PROGMEM = "in";     const char str5[] PROGMEM = "have";
const char str6[] PROGMEM = "for";    const char str7[] PROGMEM = "you";
const char str8[] PROGMEM = "with";   const char str9[] PROGMEM = "do";
const char str10[] PROGMEM = "not";   const char str11[] PROGMEM = "she";
const char str12[] PROGMEM = "can";   const char str13[] PROGMEM = "go";
const char str14[] PROGMEM = "make";  const char str15[] PROGMEM = "up";
const char str16[] PROGMEM = "know";  const char str17[] PROGMEM = "last";
const char str18[] PROGMEM = "just";  const char str19[] PROGMEM = "people";
const char str20[] PROGMEM = "very";  const char str21[] PROGMEM = "even";
const char str22[] PROGMEM = "really";const char str23[] PROGMEM = "quite";
const char str24[] PROGMEM = "zone";
//const char str25[] PROGMEM = "xenon";
//x is the only exclusion "xenon" is not a word someone would likly use
//-------------------Two letter combos below------------------------------ 
const char str25[] PROGMEM = "that";   const char str26[] PROGMEM = "but";
const char str27[] PROGMEM = "from";   const char str28[] PROGMEM = "his";
const char str29[] PROGMEM = "which";  const char str30[] PROGMEM = "say";
const char str31[] PROGMEM = "will";   const char str32[] PROGMEM = "would";
const char str33[] PROGMEM = "all";    const char str34[] PROGMEM = "get";
const char str35[] PROGMEM = "her";    const char str36[] PROGMEM = "out";
const char str37[] PROGMEM = "see";    const char str38[] PROGMEM = "time";
const char str39[] PROGMEM = "take";   const char str40[] PROGMEM = "some";
const char str41[] PROGMEM = "could";  const char str42[] PROGMEM = "yes";
const char str43[] PROGMEM = "into";   const char str44[] PROGMEM = "its";
const char str45[] PROGMEM = "more";   const char str46[] PROGMEM = "about";
const char str47[] PROGMEM = "now";    const char str48[] PROGMEM = "your";
const char str49[] PROGMEM = "other";  const char str50[] PROGMEM = "give";
const char str51[] PROGMEM = "should"; const char str52[] PROGMEM = "well";
const char str53[] PROGMEM = "any";    const char str54[] PROGMEM = "only";
const char str55[] PROGMEM = "new";    const char str56[] PROGMEM = "may";
const char str57[] PROGMEM = "way";    const char str58[] PROGMEM = "look";
const char str59[] PROGMEM = "like";   const char str60[] PROGMEM = "use";
const char str61[] PROGMEM = "such";   const char str62[] PROGMEM = "how";
const char str63[] PROGMEM = "because";const char str64[] PROGMEM = "good";
const char str65[] PROGMEM = "find";   const char str66[] PROGMEM = "day";
const char str67[] PROGMEM = "after";  const char str68[] PROGMEM = "down";
const char str69[] PROGMEM = "tell";   const char str70[] PROGMEM = "back";
const char str71[] PROGMEM = "still";  const char str72[] PROGMEM = "must";
const char str73[] PROGMEM = "child";  const char str74[] PROGMEM = "over";
const char str75[] PROGMEM = "too";    const char str76[] PROGMEM = "put";
const char str77[] PROGMEM = "own";    const char str78[] PROGMEM = "old";
const char str79[] PROGMEM = "mean";   const char str80[] PROGMEM = "part";
const char str81[] PROGMEM = "leave";  const char str82[] PROGMEM = "great";
const char str83[] PROGMEM = "case";   const char str84[] PROGMEM = "feel";
const char str85[] PROGMEM = "system"; const char str86[] PROGMEM = "each";
const char str87[] PROGMEM = "might";  const char str88[] PROGMEM = "ask";
const char str89[] PROGMEM = "number"; const char str90[] PROGMEM = "again";
const char str91[] PROGMEM = "arduino";const char str92[] PROGMEM = "under";
const char str93[] PROGMEM = "problem";const char str94[] PROGMEM = "try";
const char str95[] PROGMEM = "hand";   const char str96[] PROGMEM = "school";
const char str97[] PROGMEM = "small";  const char str98[] PROGMEM = "place";
const char str99[] PROGMEM = "away";   const char str100[] PROGMEM = "keep";
const char str101[] PROGMEM = "point"; 
const char str102[] PROGMEM = "did";
const char str103[] PROGMEM = "large"; const char str104[] PROGMEM = "often";
const char str105[] PROGMEM = "follow";const char str106[] PROGMEM = "turn";
const char str107[] PROGMEM = "end";   const char str108[] PROGMEM = "during";
const char str109[] PROGMEM = "bring"; const char str110[] PROGMEM = "example";
const char str111[] PROGMEM = "family";const char str112[] PROGMEM = "rather";
const char str113[] PROGMEM = "write"; const char str114[] PROGMEM = "percent";
const char str115[] PROGMEM = "both";  const char str116[] PROGMEM = "run";
const char str117[] PROGMEM = "right"; const char str118[] PROGMEM = "ever";
const char str119[] PROGMEM = "side";  const char str120[] PROGMEM = "night";
const char str121[] PROGMEM = "important";const char str122[] PROGMEM = "eye";
const char str123[] PROGMEM = "question";const char str124[] PROGMEM = "order";
const char str125[] PROGMEM = "develop";
const char str126[] PROGMEM = "national";//<--uncommon
const char str127[] PROGMEM = "room";  const char str128[] PROGMEM = "effect";
const char str129[] PROGMEM = "big";   const char str130[] PROGMEM = "idea";
const char str131[] PROGMEM = "job";   const char str132[] PROGMEM = "result";
const char str133[] PROGMEM = "authority";const char str134[] PROGMEM = "view";
const char str135[] PROGMEM = "appear";const char str136[] PROGMEM = "full";
const char str137[] PROGMEM = "voice"; const char str138[] PROGMEM = "kind";
const char str139[] PROGMEM = "add";const char str140[] PROGMEM = "available";
const char str141[] PROGMEM = "action";const char str142[] PROGMEM = "issue";
const char str143[] PROGMEM = "type";const char str144[] PROGMEM = "education";
const char str145[] PROGMEM = "speak"; const char str146[] PROGMEM = "open";
const char str147[] PROGMEM = "centre";const char str148[] PROGMEM = "value";
const char str149[] PROGMEM = "class"; const char str150[] PROGMEM = "economic";
const char str151[] PROGMEM = "upon";  const char str152[] PROGMEM = "among";
const char str153[] PROGMEM = "draw";  const char str154[] PROGMEM = "city";
const char str155[] PROGMEM = "create";const char str156[] PROGMEM = "game";
const char str157[] PROGMEM = "else";  const char str158[] PROGMEM = "black";
const char str159[] PROGMEM = "air";   const char str160[] PROGMEM = "cut";
const char str161[] PROGMEM = "especially";
const char str162[] PROGMEM = "human";
const char str163[] PROGMEM = "picture";const char str164[] PROGMEM = "occur";
const char str165[] PROGMEM = "either";
const char str166[] PROGMEM = "knowledge";
const char str167[] PROGMEM = "at";//attention: cut shorthand that are words
const char str168[] PROGMEM = "floor"; const char str169[] PROGMEM = "myself";
const char str170[] PROGMEM = "obtain";const char str171[] PROGMEM = "glass";
const char str172[] PROGMEM = "skill"; const char str173[] PROGMEM = "oil";
const char str174[] PROGMEM = "okay";  const char str175[] PROGMEM = "version";
const char str176[] PROGMEM = "employment";
const char str177[] PROGMEM = "physical";
const char str178[] PROGMEM = "equipment";
const char str179[] PROGMEM = "slightly";
const char str180[] PROGMEM = "ahead";  const char str181[] PROGMEM = "ignore";
const char str182[] PROGMEM = "judge";  const char str183[] PROGMEM = "yard";
const char str184[] PROGMEM = "twice";  const char str185[] PROGMEM = "egg";
const char str186[] PROGMEM = "error";  const char str187[] PROGMEM = "guest";
const char str188[] PROGMEM = "lunch";  const char str189[] PROGMEM = "urban";
const char str190[] PROGMEM = "aye"; const char str191[] PROGMEM = "illustrate";
const char str192[] PROGMEM = "switch"; const char str193[] PROGMEM = "iron";
const char str194[] PROGMEM = "odd";    const char str195[] PROGMEM = "ice";
const char str196[] PROGMEM = "cycle";  const char str197[] PROGMEM = "jacket";
const char str198[] PROGMEM = "square"; const char str199[] PROGMEM = "snow";
const char str200[] PROGMEM = "ultimately";
const char str201[] PROGMEM = "psychological";
const char str202[] PROGMEM = "vulnerable";
const char str203[] PROGMEM = "hypothesis";
const char str204[] PROGMEM = "ethnic";// <------uncommon
const char str205[] PROGMEM = "jew";   // <------ 
const char str206[] PROGMEM = "yield";
const char str207[] PROGMEM = "rhythm"; const char str208[] PROGMEM = "episode";
const char str209[] PROGMEM = "oxygen"; const char str210[] PROGMEM = "ghost";
const char str211[] PROGMEM = "bye";    const char str212[] PROGMEM = "dynamic";
const char str213[] PROGMEM = "utility";const char str214[] PROGMEM = "ugly";
const char str215[] PROGMEM = "omit";   const char str216[] PROGMEM = "oak";
const char str217[] PROGMEM = "dwelling";const char str218[] PROGMEM = "ozone";
const char str219[] PROGMEM = "aesthetic";const char str220[] PROGMEM = "axis";
const char str221[] PROGMEM = "umbrella";const char str222[] PROGMEM = "ion";
const char str223[] PROGMEM = "aquarium";
const char str224[] PROGMEM = "ivory";// <--- uncommon
//-----------------Three letter combos below -----------------------------
const char str225[] PROGMEM = "this";   
const char str226[] PROGMEM = "their";//<-- realword
const char str227[] PROGMEM = "what";   const char str228[] PROGMEM = "common";
const char str229[] PROGMEM = "than";   const char str230[] PROGMEM = "also";
const char str231[] PROGMEM = "when";   const char str232[] PROGMEM = "want";
const char str233[] PROGMEM = "better";const char str234[] PROGMEM = "many";
const char str235[] PROGMEM = "though"; const char str236[] PROGMEM = "yeah";
const char str237[] PROGMEM = "through";const char str238[] PROGMEM = "here";
const char str239[] PROGMEM = "work";   const char str240[] PROGMEM = "become";
const char str241[] PROGMEM = "government";const char str242[] PROGMEM = "life";
const char str243[] PROGMEM = "woman";  const char str244[] PROGMEM = "seem";
const char str245[] PROGMEM = "same";   const char str246[] PROGMEM = "need";
const char str247[] PROGMEM = "much";   const char str248[] PROGMEM = "group";
const char str249[] PROGMEM = "however";const char str250[] PROGMEM = "another";
const char str251[] PROGMEM = "show";   const char str252[] PROGMEM = "could";
const char str253[] PROGMEM = "shall";  const char str254[] PROGMEM = "against";
const char str255[] PROGMEM = "never";  const char str256[] PROGMEM = "most";
const char str257[] PROGMEM = "service";const char str258[] PROGMEM = "call";
const char str259[] PROGMEM = "part";  const char str260[] PROGMEM = "high";
const char str261[] PROGMEM = "something";
const char str262[] PROGMEM = "before"; const char str263[] PROGMEM = "while";
const char str264[] PROGMEM = "house";  const char str265[] PROGMEM = "problem";
const char str266[] PROGMEM = "week";   const char str267[] PROGMEM = "hold";
const char str268[] PROGMEM = "member"; const char str269[] PROGMEM = "always";
const char str270[] PROGMEM = "next";   const char str271[] PROGMEM = "without";
const char str272[] PROGMEM = "local";  const char str273[] PROGMEM = "begin";
const char str274[] PROGMEM = "although";const char str275[] PROGMEM = "fact";
const char str276[] PROGMEM = "social";
const char str277[] PROGMEM = "standard"; //confusing: stand,staple,state ext
const char str278[] PROGMEM = "long";   const char str279[] PROGMEM = "help";
const char str280[] PROGMEM = "home";   const char str281[] PROGMEM = "month";
const char str282[] PROGMEM = "head"; //confusing:heat
const char str283[] PROGMEM = "information";
const char str284[] PROGMEM = "business";const char str285[] PROGMEM = "play";
const char str286[] PROGMEM = "power";  const char str287[] PROGMEM = "change";
const char str288[] PROGMEM = "move";  const char str289[] PROGMEM = "interest";
const char str290[] PROGMEM = "book";   const char str291[] PROGMEM = "often";
const char str292[] PROGMEM = "young";  const char str293[] PROGMEM = "water";
const char str294[] PROGMEM = "form";   const char str295[] PROGMEM = "perhaps";
const char str296[] PROGMEM = "meet";   const char str297[] PROGMEM = "level";
const char str298[] PROGMEM = "until";  const char str299[] PROGMEM = "policy";
const char str300[] PROGMEM = "include";const char str301[] PROGMEM = "believe";
const char str302[] PROGMEM = "already";
const char str303[] PROGMEM = "possible";
const char str304[] PROGMEM = "notice";const char str305[] PROGMEM = "line";
const char str306[] PROGMEM = "allow";  const char str307[] PROGMEM = "lead";
const char str308[] PROGMEM = "study";  const char str309[] PROGMEM = "live";
const char str310[] PROGMEM = "since";  const char str311[] PROGMEM = "name";
const char str312[] PROGMEM = "body";   const char str313[] PROGMEM = "happen";
const char str314[] PROGMEM = "friend"; const char str315[] PROGMEM = "almost";
const char str316[] PROGMEM = "carry";  
const char str317[] PROGMEM = "early";//realword confusing: earth
const char str318[] PROGMEM = "himself";const char str319[] PROGMEM = "public";
const char str320[] PROGMEM = "together";const char str321[] PROGMEM = "talk";
const char str322[] PROGMEM = "report"; const char str323[] PROGMEM = "market";
const char str324[] PROGMEM = "continue";const char str325[] PROGMEM = "able";
const char str326[] PROGMEM = "later";  const char str327[] PROGMEM = "rate";
const char str328[] PROGMEM = "door";   const char str329[] PROGMEM = "office";
const char str330[] PROGMEM = "reason"; const char str331[] PROGMEM = "less";
const char str332[] PROGMEM = "minute"; const char str333[] PROGMEM = "subject";
const char str334[] PROGMEM = "term";   const char str335[] PROGMEM = "involve";
const char str336[] PROGMEM = "sort";   const char str337[] PROGMEM = "require";
const char str338[] PROGMEM = "suggest";const char str339[] PROGMEM = "toward";
const char str340[] PROGMEM = "anything";
const char str341[] PROGMEM = "mother"; const char str342[] PROGMEM = "once";
const char str343[] PROGMEM = "lose";   const char str344[] PROGMEM = "expect";
const char str345[] PROGMEM = "ever";   const char str346[] PROGMEM = "price";
const char str347[] PROGMEM = "little";const char str348[] PROGMEM = "remember";
const char str349[] PROGMEM = "cost";  const char str350[] PROGMEM = "matter";
const char str351[] PROGMEM = "figure";const char str352[] PROGMEM = "research";
const char str353[] PROGMEM = "act";    const char str354[] PROGMEM = "fall";
const char str355[] PROGMEM = "today";  const char str356[] PROGMEM = "enough";
const char str357[] PROGMEM = "moment"; const char str358[] PROGMEM = "girl";
const char str359[] PROGMEM = "stood";  const char str360[] PROGMEM = "send";
const char str361[] PROGMEM = "decide"; const char str362[] PROGMEM = "main";
const char str363[] PROGMEM = "understand";
const char str364[] PROGMEM = "develop";
const char str365[] PROGMEM = "industry";
const char str366[] PROGMEM = "record"; const char str367[] PROGMEM = "several";
const char str368[] PROGMEM = "return"; const char str369[] PROGMEM = "build";
const char str370[] PROGMEM = "special";const char str371[] PROGMEM = "itself";
const char str372[] PROGMEM = "paper";  const char str373[] PROGMEM = "major";
const char str374[] PROGMEM = "describe";const char str375[] PROGMEM = "agree";
const char str376[] PROGMEM = "general";const char str377[] PROGMEM = "center";
const char str378[] PROGMEM = "father"; const char str379[] PROGMEM = "second";
const char str380[] PROGMEM = "pattern";const char str381[] PROGMEM = "around";
const char str382[] PROGMEM = "road";   const char str383[] PROGMEM = "table";
const char str384[] PROGMEM = "church"; const char str385[] PROGMEM = "like";
const char str386[] PROGMEM = "team";   const char str387[] PROGMEM = "death";
const char str388[] PROGMEM = "soon";   const char str389[] PROGMEM = "certain";
const char str390[] PROGMEM = "half";const char str391[] PROGMEM = "language";
const char str392[] PROGMEM = "walk";const char str393[] PROGMEM = "different";
const char str394[] PROGMEM = "department";
const char str395[] PROGMEM = "morning"; const char str396[] PROGMEM = "hope";
const char str397[] PROGMEM = "across";  const char str398[] PROGMEM = "letter";
const char str399[] PROGMEM = "evidence";const char str400[] PROGMEM = "foot";
const char str401[] PROGMEM = "clear";   const char str402[] PROGMEM = "role";
const char str403[] PROGMEM = "practice";const char str404[] PROGMEM = "bank";
const char str405[] PROGMEM = "support"; const char str406[] PROGMEM = "select";
const char str407[] PROGMEM = "range";   const char str408[] PROGMEM = "behind";
const char str409[] PROGMEM = "surface"; const char str410[] PROGMEM = "pass";
const char str411[] PROGMEM = "thursday";const char str412[] PROGMEM = "accept";
const char str413[] PROGMEM = "further"; const char str414[] PROGMEM = "clue";
const char str415[] PROGMEM = "cause";
const char str416[] PROGMEM = "history";//<--realword
const char str417[] PROGMEM = "travel";
const char str418[] PROGMEM = "situation";//<--realword
const char str419[] PROGMEM = "whose"; //<--realword
const char str420[] PROGMEM = "relation";
const char str421[] PROGMEM = "strong";const char str422[] PROGMEM = "field";
const char str423[] PROGMEM = "free";  const char str424[] PROGMEM = "break";
const char str425[] PROGMEM = "yesterday";//<--realword
const char str426[] PROGMEM = "window";const char str427[] PROGMEM = "wait";
const char str428[] PROGMEM = "usually";const char str429[] PROGMEM = "wife";
const char str430[] PROGMEM = "cover";const char str431[] PROGMEM = "apply";
const char str432[] PROGMEM = "raise";const char str433[] PROGMEM = "sale";
const char str434[] PROGMEM = "light";const char str435[] PROGMEM = "claim";
const char str436[] PROGMEM = "basically";const char str437[] PROGMEM = "rule";
const char str438[] PROGMEM = "simple";const char str439[] PROGMEM = "quality";
const char str440[] PROGMEM = "nature";const char str441[] PROGMEM = "data";
const char str442[] PROGMEM = "necessary";const char str443[] PROGMEM = "pound";
const char str444[] PROGMEM = "method";const char str445[] PROGMEM = "unit";
const char str446[] PROGMEM = "board";const char str447[] PROGMEM = "true";
const char str448[] PROGMEM = "detail";const char str449[] PROGMEM = "model";
const char str450[] PROGMEM = "beauty";const char str451[] PROGMEM = "join";
const char str452[] PROGMEM = "reduce";
const char str453[] PROGMEM = "establish";
const char str454[] PROGMEM = "easy";  const char str455[] PROGMEM = "hospital";
const char str456[] PROGMEM = "scheme";const char str457[] PROGMEM = "choose";
const char str458[] PROGMEM = "wish";  const char str459[] PROGMEM = "achieve";
const char str460[] PROGMEM = "final"; const char str461[] PROGMEM = "poor";
const char str462[] PROGMEM = "direct";const char str463[] PROGMEM = "drive";
const char str464[] PROGMEM = "along"; const char str465[] PROGMEM = "amount";
const char str466[] PROGMEM = "operation";const char str467[] PROGMEM = "fail";
const char str468[] PROGMEM = "opportunity";
const char str469[] PROGMEM = "fire";    const char str470[] PROGMEM = "south";
const char str471[] PROGMEM = "wide";    const char str472[] PROGMEM = "kill";
const char str473[] PROGMEM = "labour";const char str474[] PROGMEM = "various";
const char str475[] PROGMEM = "test";  const char str476[] PROGMEM = "close";
const char str477[] PROGMEM = "love";  const char str478[] PROGMEM = "color";
const char str479[] PROGMEM = "benefit";const char str480[] PROGMEM = "animal";
const char str481[] PROGMEM = "election";
const char str482[] PROGMEM = "purpose";const char str483[] PROGMEM = "rise";
const char str484[] PROGMEM = "hard";   const char str485[] PROGMEM = "music";
const char str486[] PROGMEM = "hair";   const char str487[] PROGMEM = "prepare";
const char str488[] PROGMEM = "piece";  const char str489[] PROGMEM = "discuss";
const char str490[] PROGMEM = "front";  const char str491[] PROGMEM = "royal";
const char str492[] PROGMEM = "tree";const char str493[] PROGMEM = "population";
const char str494[] PROGMEM = "catch";  const char str495[] PROGMEM = "picture";
const char str496[] PROGMEM = "page";   const char str497[] PROGMEM = "enjoy";
const char str498[] PROGMEM = "instead";const char str499[] PROGMEM = "wear";
const char str500[] PROGMEM = "size";
const char str501[] PROGMEM = "environment";
const char str502[] PROGMEM = "success";const char str503[] PROGMEM = "wrong";
const char str504[] PROGMEM = "near";   const char str505[] PROGMEM = "round";
const char str506[] PROGMEM = "list";   const char str507[] PROGMEM = "argue";
const char str508[] PROGMEM = "future";const char str509[] PROGMEM = "analysis";
const char str510[] PROGMEM = "enter"; const char str511[] PROGMEM = "space";
const char str512[] PROGMEM = "arrive";const char str513[] PROGMEM = "ensure";
const char str514[] PROGMEM = "demand";const char str515[] PROGMEM = "pull";
const char str516[] PROGMEM = "doctor";const char str517[] PROGMEM = "refer";
const char str518[] PROGMEM = "feature";const char str519[] PROGMEM = "step";
const char str520[] PROGMEM = "follow"; const char str521[] PROGMEM = "machine";
const char str522[] PROGMEM = "association"; //realword
const char str523[] PROGMEM = "fill";   const char str524[] PROGMEM = "region";
const char str525[] PROGMEM = "effort"; const char str526[] PROGMEM = "award";
const char str527[] PROGMEM = "village";
const char str528[] PROGMEM = "organisation";//13 char
const char str529[] PROGMEM = "news";   const char str530[] PROGMEM = "nice";
const char str531[] PROGMEM = "cell";   const char str532[] PROGMEM = "current";
const char str533[] PROGMEM = "legal";  const char str534[] PROGMEM = "energy";
const char str535[] PROGMEM = "degree"; const char str536[] PROGMEM = "mile";
const char str537[] PROGMEM = "measure";const char str538[] PROGMEM = "above";
const char str539[] PROGMEM = "task";   const char str540[] PROGMEM = "affect";
const char str541[] PROGMEM = "please";const char str542[] PROGMEM = "function";
const char str543[] PROGMEM = "identify";
const char str544[] PROGMEM = "defence";const char str545[] PROGMEM = "garden";
const char str546[] PROGMEM = "technology";
const char str547[] PROGMEM = "style";  const char str548[] PROGMEM = "feeling";
const char str549[] PROGMEM = "science";const char str550[] PROGMEM = "doubt";
const char str551[] PROGMEM = "horse";  const char str552[] PROGMEM = "answer";
const char str553[] PROGMEM = "suffer";const char str554[] PROGMEM = "announce";
const char str555[] PROGMEM = "user";  const char str556[] PROGMEM = "normal";
const char str557[] PROGMEM = "quick";const char str558[] PROGMEM = "army";
const char str559[] PROGMEM = "husband";const char str560[] PROGMEM = "visit";
const char str561[] PROGMEM = "capital";const char str562[] PROGMEM = "season";
const char str563[] PROGMEM = "significant";
const char str564[] PROGMEM = "economy";const char str565[] PROGMEM = "duty";
const char str566[] PROGMEM = "attempt";const char str567[] PROGMEM = "save";
const char str568[] PROGMEM = "suddenly";
const char str569[] PROGMEM = "brought";const char str570[] PROGMEM = "improve";
const char str571[] PROGMEM = "avoid";  const char str572[] PROGMEM = "wonder";
const char str573[] PROGMEM = "tend";   const char str574[] PROGMEM = "title";
const char str575[] PROGMEM = "hotel";  const char str576[] PROGMEM = "aspect";
const char str577[] PROGMEM = "summer";const char str578[] PROGMEM = "daughter";
const char str579[] PROGMEM = "exist"; const char str580[] PROGMEM = "baby";
const char str581[] PROGMEM = "smile"; const char str582[] PROGMEM = "left";
const char str583[] PROGMEM = "customer";
const char str584[] PROGMEM = "outside";const char str585[] PROGMEM = "total";
const char str586[] PROGMEM = "division";const char str587[] PROGMEM = "king";
const char str588[] PROGMEM = "image";const char str589[] PROGMEM = "obviously";
const char str590[] PROGMEM = "unless";
const char str591[] PROGMEM = "circumstance";//13 char
const char str592[] PROGMEM = "mention";const char str593[] PROGMEM = "client";
const char str594[] PROGMEM = "admit"; const char str595[] PROGMEM = "original";
const char str596[] PROGMEM = "exactly";const char str597[] PROGMEM = "beyond";
const char str598[] PROGMEM = "encourage";
const char str599[] PROGMEM = "addition";const char str600[] PROGMEM = "goal";
const char str601[] PROGMEM = "miss";    const char str602[] PROGMEM = "drop";
const char str603[] PROGMEM = "item";    const char str604[] PROGMEM = "reveal";
const char str605[] PROGMEM = "maybe"; const char str606[] PROGMEM = "ability";
const char str607[] PROGMEM = "campaign";const char str608[] PROGMEM = "advice";
const char str609[] PROGMEM = "library"; const char str610[] PROGMEM = "pupil";
const char str611[] PROGMEM = "dark";const char str612[] PROGMEM = "culture";
const char str613[] PROGMEM = "blood";   const char str614[] PROGMEM = "bill";
const char str615[] PROGMEM = "extent";  const char str616[] PROGMEM = "apart";
const char str617[] PROGMEM = "text";const char str618[] PROGMEM = "mountain";
const char str619[] PROGMEM = "fish";    const char str620[] PROGMEM = "enable";
const char str621[] PROGMEM = "trouble";const char str622[] PROGMEM = "payment";
const char str623[] PROGMEM = "best";const char str624[] PROGMEM = "lady";
const char str625[] PROGMEM = "article";const char str626[] PROGMEM = "object";
const char str627[] PROGMEM = "immediately";
const char str628[] PROGMEM = "tell";
const char str629[] PROGMEM = "agency"; const char str630[] PROGMEM = "except";
const char str631[] PROGMEM = "check";  const char str632[] PROGMEM = "laugh";
const char str633[] PROGMEM = "weight";const char str634[] PROGMEM = "solution";
const char str635[] PROGMEM = "medical";const char str636[] PROGMEM = "budget";
const char str637[] PROGMEM = "river";const char str638[] PROGMEM = "push";
const char str639[] PROGMEM = "tomorrow";const char str640[] PROGMEM = "edge";
const char str641[] PROGMEM = "opinion";const char str642[] PROGMEM = "drug";
const char str643[] PROGMEM = "option";const char str644[] PROGMEM = "occasion";
const char str645[] PROGMEM = "software";const char str646[] PROGMEM = "lack";
const char str647[] PROGMEM = "blue";const char str648[] PROGMEM = "radio";
const char str649[] PROGMEM = "bird";const char str650[] PROGMEM = "green";
const char str651[] PROGMEM = "message";
const char str652[] PROGMEM = "after";const char str653[] PROGMEM = "fully";
const char str654[] PROGMEM = "race"; const char str655[] PROGMEM = "gain";
const char str656[] PROGMEM = "scene";const char str657[] PROGMEM = "kitchen";
const char str658[] PROGMEM = "arise";const char str659[] PROGMEM = "network";
const char str660[] PROGMEM = "peace";const char str661[] PROGMEM = "employee";
const char str662[] PROGMEM = "scale";const char str663[] PROGMEM = "other";
const char str664[] PROGMEM = "owner";const char str665[] PROGMEM = "corner";
const char str666[] PROGMEM = "sport";const char str667[] PROGMEM = "hang";
const char str668[] PROGMEM = "civil";const char str669[] PROGMEM = "crime";
const char str670[] PROGMEM = "ball"; const char str671[] PROGMEM = "safety";
const char str672[] PROGMEM = "copy"; const char str673[] PROGMEM = "sister";
const char str674[] PROGMEM = "trial";const char str675[] PROGMEM = "rock";
const char str676[] PROGMEM = "damage";const char str677[] PROGMEM = "adopt";
const char str678[] PROGMEM = "essential";
const char str679[] PROGMEM = "length"; const char str680[] PROGMEM = "branch";
const char str681[] PROGMEM = "deep";   const char str682[] PROGMEM = "none";
const char str683[] PROGMEM = "pain";   const char str684[] PROGMEM = "spirit";
const char str685[] PROGMEM = "cash";   const char str686[] PROGMEM = "target";
const char str687[] PROGMEM = "male";const char str688[] PROGMEM = "executive";
const char str689[] PROGMEM = "slowly"; const char str690[] PROGMEM = "huge";
const char str691[] PROGMEM = "nuclear";const char str692[] PROGMEM = "rich";
const char str693[] PROGMEM = "emerge"; const char str694[] PROGMEM = "ring";
const char str695[] PROGMEM = "skin";   const char str696[] PROGMEM = "island";
const char str697[] PROGMEM = "separate";const char str698[] PROGMEM = "danger";
const char str699[] PROGMEM = "credit";
const char str700[] PROGMEM = "candidate";
const char str701[] PROGMEM = "merely"; const char str702[] PROGMEM = "plus";
const char str703[] PROGMEM = "debate"; const char str704[] PROGMEM = "vote";
const char str705[] PROGMEM = "western";const char str706[] PROGMEM = "settle";
const char str707[] PROGMEM = "large";  const char str708[] PROGMEM = "observe";
const char str709[] PROGMEM = "limit";  const char str710[] PROGMEM = "deny";
const char str711[] PROGMEM = "write"; const char str712[] PROGMEM = "video";
const char str713[] PROGMEM = "vehicle";const char str714[] PROGMEM = "cross";
const char str715[] PROGMEM = "farm";   const char str716[] PROGMEM = "grant";
const char str717[] PROGMEM = "phone";  const char str718[] PROGMEM = "flower";
const char str719[] PROGMEM = "injury"; const char str720[] PROGMEM = "still";
const char str721[] PROGMEM = "battle"; const char str722[] PROGMEM = "sleep";
const char str723[] PROGMEM = "volume"; const char str724[] PROGMEM = "ship";
const char str725[] PROGMEM = "background";
const char str726[] PROGMEM = "touch";  
const char str727[] PROGMEM = "sexual";//<--realword uncommon
const char str728[] PROGMEM = "ordinary";
const char str729[] PROGMEM = "cabinet";const char str730[] PROGMEM = "engine";
const char str731[] PROGMEM = "tonight";const char str732[] PROGMEM = "adult";
const char str733[] PROGMEM = "author"; const char str734[] PROGMEM = "song";
const char str735[] PROGMEM = "wood";   const char str736[] PROGMEM = "wage";
const char str737[] PROGMEM = "domestic";const char str738[] PROGMEM = "warm";
const char str739[] PROGMEM = "dinner"; const char str740[] PROGMEM = "package";
const char str741[] PROGMEM = "coffee"; const char str742[] PROGMEM = "sheet";
const char str743[] PROGMEM = "equally";const char str744[] PROGMEM = "session";
const char str745[] PROGMEM = "loan";   const char str746[] PROGMEM = "bind";
const char str747[] PROGMEM = "victim";const char str748[] PROGMEM = "audience";
const char str749[] PROGMEM = "family"; const char str750[] PROGMEM = "master";
const char str751[] PROGMEM = "potential";
const char str752[] PROGMEM = "eight";// exhibition<--uncommon
const char str753[] PROGMEM = "children";  
const char str754[] PROGMEM = "middle";
const char str755[] PROGMEM = "unable"; const char str756[] PROGMEM = "acquire";
const char str757[] PROGMEM = "favour"; const char str758[] PROGMEM = "flat";
const char str759[] PROGMEM = "rural";  const char str760[] PROGMEM = "deliver";
const char str761[] PROGMEM = "nobody"; const char str762[] PROGMEM = "onto";
const char str763[] PROGMEM = "aircraft";const char str764[] PROGMEM = "bright";
const char str765[] PROGMEM = "unemployment";//13char
const char str766[] PROGMEM = "spread";  const char str767[] PROGMEM = "flight";
const char str768[] PROGMEM = "suitable";const char str769[] PROGMEM = "ought";
const char str770[] PROGMEM = "reject";  const char str771[] PROGMEM = "dream";
const char str772[] PROGMEM = "pension"; const char str773[] PROGMEM = "afraid";
const char str774[] PROGMEM = "murder";  const char str775[] PROGMEM = "hide";
const char str776[] PROGMEM = "absence";const char str777[] PROGMEM = "average";
const char str778[] PROGMEM = "acid";    const char str779[] PROGMEM = "bottle";
const char str780[] PROGMEM = "game";//<--bedroom
const char str781[] PROGMEM = "temperature";
const char str782[] PROGMEM = "wave";
const char str783[] PROGMEM = "people";//<--magazine
const char str784[] PROGMEM = "silence";
const char str785[] PROGMEM = "educational";
const char str786[] PROGMEM = "tape";const char str787[] PROGMEM = "elsewhere";
const char str788[] PROGMEM = "code";const char str789[] PROGMEM = "hill";
const char str790[] PROGMEM = "screen";const char str791[] PROGMEM = "sequence";
const char str792[] PROGMEM = "female";const char str793[] PROGMEM = "phase";
const char str794[] PROGMEM = "welcome";const char str795[] PROGMEM = "tiny";
const char str796[] PROGMEM = "initiative";const char str797[] PROGMEM = "fast";
const char str798[] PROGMEM = "gold";const char str799[] PROGMEM = "shut";
const char str800[] PROGMEM = "journey";
const char str801[] PROGMEM = "violence";
const char str802[] PROGMEM = "noise";  const char str803[] PROGMEM = "escape";
const char str804[] PROGMEM = "score";  const char str805[] PROGMEM = "justice";
const char str806[] PROGMEM = "upper";  const char str807[] PROGMEM = "took";
const char str808[] PROGMEM = "nurse";  const char str809[] PROGMEM = "narrow";
const char str810[] PROGMEM = "coal";   const char str811[] PROGMEM = "wild";
const char str812[] PROGMEM = "neither";const char str813[] PROGMEM = "guide";
const char str814[] PROGMEM = "pocket"; const char str815[] PROGMEM = "fruit";
const char str816[] PROGMEM = "ride";   const char str817[] PROGMEM = "found";
const char str818[] PROGMEM = "vital";  const char str819[] PROGMEM = "burn";
const char str820[] PROGMEM = "jump";   const char str821[] PROGMEM = "derive";
const char str822[] PROGMEM = "satisfy";const char str823[] PROGMEM = "focus";
const char str824[] PROGMEM = "border"; const char str825[] PROGMEM = "wash";
const char str826[] PROGMEM = "gather"; const char str827[] PROGMEM = "ancient";
const char str828[] PROGMEM = "elderly";const char str829[] PROGMEM = "overall";
const char str830[] PROGMEM = "rare";   const char str831[] PROGMEM = "drawing";
const char str832[] PROGMEM = "hurt";const char str833[] PROGMEM = "mechanism";
const char str834[] PROGMEM = "atmosphere";const char str835[] PROGMEM = "slip";
const char str836[] PROGMEM = "panel";  const char str837[] PROGMEM = "roof";
const char str838[] PROGMEM = "typical";
const char str839[] PROGMEM = "negotiation";
const char str840[] PROGMEM = "hence";  const char str841[] PROGMEM = "fuel";
const char str842[] PROGMEM = "liability";const char str843[] PROGMEM = "hate";
const char str844[] PROGMEM = "vast";   const char str845[] PROGMEM = "soil";
const char str846[] PROGMEM = "nose";   const char str847[] PROGMEM = "lord";
const char str848[] PROGMEM = "ticket"; const char str849[] PROGMEM = "editor";
const char str850[] PROGMEM = "bone";   const char str851[] PROGMEM = "knew";
const char str852[] PROGMEM = "unfortunately";//14char
const char str853[] PROGMEM = "academic";
const char str854[] PROGMEM = "lawyer";const char str855[] PROGMEM = "rapidly";
const char str856[] PROGMEM = "citizen";
const char str857[] PROGMEM = "ourselves";
const char str858[] PROGMEM = "height"; const char str859[] PROGMEM = "know";
const char str860[] PROGMEM = "inner";  const char str861[] PROGMEM = "crucial";
const char str862[] PROGMEM = "boundary";
const char str863[] PROGMEM = "question";
const char str864[] PROGMEM = "virtually";
const char str865[] PROGMEM = "inquiry";const char str866[] PROGMEM = "topic";
const char str867[] PROGMEM = "unknown";const char str868[] PROGMEM = "badly";
const char str869[] PROGMEM = "licence";const char str870[] PROGMEM = "buyer";
const char str871[] PROGMEM = "gift";   const char str872[] PROGMEM = "angry";
const char str873[] PROGMEM = "tank";   const char str874[] PROGMEM = "alive";
const char str875[] PROGMEM = "abandon";const char str876[] PROGMEM = "blame";
const char str877[] PROGMEM = "quote";  const char str878[] PROGMEM = "diet";
const char str879[] PROGMEM = "glance"; const char str880[] PROGMEM = "frame";
const char str881[] PROGMEM = "acknowledge";
const char str882[] PROGMEM = "fault";  const char str883[] PROGMEM = "port";
const char str884[] PROGMEM = "unusual";const char str885[] PROGMEM = "pilot";
const char str886[] PROGMEM = "obligation";
const char str887[] PROGMEM = "yellow"; const char str888[] PROGMEM = "phrase";
const char str889[] PROGMEM = "lucky";  const char str890[] PROGMEM = "novel";
const char str891[] PROGMEM = "poem";   const char str892[] PROGMEM = "suspect";
const char str893[] PROGMEM = "wake";   const char str894[] PROGMEM = "daily";
const char str895[] PROGMEM = "abroad"; const char str896[] PROGMEM = "keen";
const char str897[] PROGMEM = "guess";const char str898[] PROGMEM = "valuable";
const char str899[] PROGMEM = "layer";const char str900[] PROGMEM = "judgment";
const char str901[] PROGMEM = "illness";const char str902[] PROGMEM = "cake";
const char str903[] PROGMEM = "tired";  const char str904[] PROGMEM = "been";
const char str905[] PROGMEM = "federal";const char str906[] PROGMEM = "boss";
const char str907[] PROGMEM = "urge";   const char str908[] PROGMEM = "being";
const char str909[] PROGMEM = "guard";  const char str910[] PROGMEM = "bomb";
const char str911[] PROGMEM = "dollar"; const char str912[] PROGMEM = "mood";
const char str913[] PROGMEM = "habit";  const char str914[] PROGMEM = "cook";
const char str915[] PROGMEM = "kiss";
const char str916[] PROGMEM = "were";//<--realword:wedding
const char str917[] PROGMEM = "bishop"; const char str918[] PROGMEM = "mirror";
const char str919[] PROGMEM = "symptom";const char str920[] PROGMEM = "global";
const char str921[] PROGMEM = "aside";
const char str922[] PROGMEM = "philosophy";
const char str923[] PROGMEM = "gallery";
const char str924[] PROGMEM = "emotional";
const char str925[] PROGMEM = "gave";//cigarette removed
const char str926[] PROGMEM = "adequate";const char str927[] PROGMEM = "pale";
const char str928[] PROGMEM = "input";
const char str929[] PROGMEM = "phenomenon";const char str930[] PROGMEM = "kick";
const char str931[] PROGMEM = "smoke"; const char str932[] PROGMEM = "festival";
const char str933[] PROGMEM = "rose";   const char str934[] PROGMEM = "swing";
const char str935[] PROGMEM = "sweet";  const char str936[] PROGMEM = "rent";
const char str937[] PROGMEM = "enquiry";const char str938[] PROGMEM = "abuse";
const char str939[] PROGMEM = "cottage";const char str940[] PROGMEM = "pause";
const char str941[] PROGMEM = "mixture";const char str942[] PROGMEM = "sick";
const char str943[] PROGMEM = "lake";   const char str944[] PROGMEM = "sand";
const char str945[] PROGMEM = "knife";  const char str946[] PROGMEM = "sake";
const char str947[] PROGMEM = "maximum";const char str948[] PROGMEM = "rush";
const char str949[] PROGMEM = "number";const char str950[] PROGMEM = "honour";
const char str951[] PROGMEM = "fellow"; const char str952[] PROGMEM = "tight";
const char str953[] PROGMEM = "anxiety";const char str954[] PROGMEM = "poverty";
const char str955[] PROGMEM = "pipe";   const char str956[] PROGMEM = "split";
const char str957[] PROGMEM = "joke";   const char str958[] PROGMEM = "fewer";
const char str959[] PROGMEM = "inevitably";
const char str960[] PROGMEM = "nervous";const char str961[] PROGMEM = "dose";
const char str962[] PROGMEM = "alcohol";const char str963[] PROGMEM = "enhance";
const char str964[] PROGMEM = "tail";   const char str965[] PROGMEM = "smell";
const char str966[] PROGMEM = "architecture";
const char str967[] PROGMEM = "barrier";const char str968[] PROGMEM = "pitch";
const char str969[] PROGMEM = "tackle";
const char str970[] PROGMEM = "evaluation";
const char str971[] PROGMEM = "dimension";const char str972[] PROGMEM = "awful";
const char str973[] PROGMEM = "pink";   const char str974[] PROGMEM = "vessel";
const char str975[] PROGMEM = "lower";  const char str976[] PROGMEM = "fixed";
const char str977[] PROGMEM = "bite";   const char str978[] PROGMEM = "lecture";
const char str979[] PROGMEM = "leisure";const char str980[] PROGMEM = "fabric";
const char str981[] PROGMEM = "cease";const char str982[] PROGMEM = "isolated";
const char str983[] PROGMEM = "snap"; const char str984[] PROGMEM = "reward";
const char str985[] PROGMEM = "vegetable";
const char str986[] PROGMEM = "junior";const char str987[] PROGMEM = "mystery";
const char str988[] PROGMEM = "upset"; const char str989[] PROGMEM = "till";
const char str990[] PROGMEM = "tissue";const char str991[] PROGMEM = "turn";
const char str992[] PROGMEM = "shrug"; const char str993[] PROGMEM = "ceiling";
const char str994[] PROGMEM = "sail";  const char str995[] PROGMEM = "adjust";
const char str996[] PROGMEM = "running";const char str997[] PROGMEM = "adapt";
const char str998[] PROGMEM = "blind";  const char str999[] PROGMEM = "wire";
const char str1000[] PROGMEM = "squad"; const char str1001[] PROGMEM = "bowl";
const char str1002[] PROGMEM = "uncertainty";
const char str1003[] PROGMEM = "reinforce";
const char str1004[] PROGMEM = "dust";  const char str1005[] PROGMEM = "album";
const char str1006[] PROGMEM = "amendment";
const char str1007[] PROGMEM = "tube";  const char str1008[] PROGMEM = "coin";
const char str1009[] PROGMEM = "diary"; const char str1010[] PROGMEM = "flesh";
const char str1011[] PROGMEM = "rugby"; //<--uncommon realword
const char str1012[] PROGMEM = "psychology"; //<--uncommon
const char str1013[] PROGMEM = "seize"; const char str1014[] PROGMEM = "button";
const char str1015[] PROGMEM = "ultimate";
const char str1016[] PROGMEM = "venture";
const char str1017[] PROGMEM = "time";
const char str1018[] PROGMEM = "gesture";const char str1019[] PROGMEM = "jury";
const char str1020[] PROGMEM = "gaze";
const char str1021[] PROGMEM = "sophisticated";//-14char
const char str1022[] PROGMEM = "does";//<--realword: taxation
const char str1023[] PROGMEM = "asleep"; const char str1024[] PROGMEM = "aids";
const char str1025[] PROGMEM = "multiple";
const char str1026[] PROGMEM = "evolution";
const char str1027[] PROGMEM = "grin";
const char str1028[] PROGMEM = "punishment";
const char str1029[] PROGMEM = "twin";  const char str1030[] PROGMEM = "tunnel";
const char str1031[] PROGMEM = "wipe"; const char str1032[] PROGMEM = "nowhere";
const char str1033[] PROGMEM = "loose";const char str1034[] PROGMEM = "crash";
const char str1035[] PROGMEM = "logic";const char str1036[] PROGMEM = "alarm";
const char str1037[] PROGMEM = "wrap";
const char str1038[] PROGMEM = "inadequate";
const char str1039[] PROGMEM = "ambition";
const char str1040[] PROGMEM = "anticipate";
const char str1041[] PROGMEM = "fibre";const char str1042[] PROGMEM = "petrol";
const char str1043[] PROGMEM = "maker";const char str1044[] PROGMEM = "acute";
const char str1045[] PROGMEM = "rubbish";const char str1046[] PROGMEM = "duke";
const char str1047[] PROGMEM = "dictionary";
const char str1048[] PROGMEM = "fence";const char str1049[] PROGMEM = "bike";
const char str1050[] PROGMEM = "eliminate";
const char str1051[] PROGMEM = "plot"; const char str1052[] PROGMEM = "mutual";
const char str1053[] PROGMEM = "hesitate";const char str1054[] PROGMEM = "rope";
const char str1055[] PROGMEM = "gear"; const char str1056[] PROGMEM = "swallow";
const char str1057[] PROGMEM = "rabbit";const char str1058[] PROGMEM = "tide";
const char str1059[] PROGMEM = "brush"; const char str1060[] PROGMEM = "piano";
const char str1061[] PROGMEM = "would";
const char str1062[] PROGMEM = "each";//<--uncommon realword: bible
const char str1063[] PROGMEM = "hire";const char str1064[] PROGMEM = "gastric";
const char str1065[] PROGMEM = "humour";const char str1066[] PROGMEM = "bulk";
const char str1067[] PROGMEM = "emission";
const char str1068[] PROGMEM = "naked";const char str1069[] PROGMEM = "toilet";
const char str1070[] PROGMEM = "molecule";//<--uncommon
const char str1071[] PROGMEM = "fiction";
const char str1072[] PROGMEM = "cinema"; const char str1073[] PROGMEM = "myth";
const char str1074[] PROGMEM = "enforce";const char str1075[] PROGMEM = "pond";
const char str1076[] PROGMEM = "diplomatic";//<--uncommon realword
const char str1077[] PROGMEM = "rebel";const char str1078[] PROGMEM = "loyalty";
const char str1079[] PROGMEM = "physically";
const char str1080[] PROGMEM = "biological";//<--uncommon
const char str1081[] PROGMEM = "hierarchy";
const char str1082[] PROGMEM = "seminar";const char str1083[] PROGMEM = "verse";
const char str1084[] PROGMEM = "echo";
const char str1085[] PROGMEM = "cupboard";//<--realword
const char str1086[] PROGMEM = "gang";const char str1087[] PROGMEM = "unhappy";
const char str1088[] PROGMEM = "aggressive";
const char str1089[] PROGMEM = "rumour";
const char str1090[] PROGMEM = "availability";//13char
const char str1091[] PROGMEM = "ocean"; const char str1092[] PROGMEM = "sadly";
const char str1093[] PROGMEM = "oral";const char str1094[] PROGMEM = "hundred";
const char str1095[] PROGMEM = "romantic";const char str1096[] PROGMEM = "hint";
const char str1097[] PROGMEM = "nasty";//<--uncommon
const char str1098[] PROGMEM = "during";
const char str1099[] PROGMEM = "amazing";
const char str1100[] PROGMEM = "crystal";const char str1101[] PROGMEM = "loud";
const char str1102[] PROGMEM = "fade";
const char str1103[] PROGMEM = "unnecessary";
const char str1104[] PROGMEM = "ingredient";
const char str1105[] PROGMEM = "dull";
const char str1106[] PROGMEM = "sculpture";
const char str1107[] PROGMEM = "lion";const char str1108[] PROGMEM = "fantasy";
const char str1109[] PROGMEM = "lamp";const char str1110[] PROGMEM = "pavement";
const char str1111[] PROGMEM = "peer";const char str1112[] PROGMEM = "nest";
const char str1113[] PROGMEM = "lung";const char str1114[] PROGMEM = "teenager";
const char str1115[] PROGMEM = "heel";const char str1116[] PROGMEM = "update";
const char str1117[] PROGMEM = "giant";const char str1118[] PROGMEM = "sphere";
const char str1119[] PROGMEM = "sword";const char str1120[] PROGMEM = "tutor";
const char str1121[] PROGMEM = "down";
const char str1122[] PROGMEM = "cafe";const char str1123[] PROGMEM = "fetch";
const char str1124[] PROGMEM = "duck";const char str1125[] PROGMEM = "digital";
const char str1126[] PROGMEM = "inherit";
const char str1127[] PROGMEM = "chronic";  //<--uncommon
const char str1128[] PROGMEM = "orchestra";//<--uncommon
const char str1129[] PROGMEM = "system";const char str1130[] PROGMEM = "navy";
const char str1131[] PROGMEM = "juice"; const char str1132[] PROGMEM = "night";
const char str1133[] PROGMEM = "slave"; const char str1134[] PROGMEM = "elbow";
const char str1135[] PROGMEM = "smart"; const char str1136[] PROGMEM = "vanish";
const char str1137[] PROGMEM = "upwards";
const char str1138[] PROGMEM = "geography";
const char str1139[] PROGMEM = "embrace";
const char str1140[] PROGMEM = "endless";const char str1141[] PROGMEM = "dawn";
const char str1142[] PROGMEM = "neutral";const char str1143[] PROGMEM = "vague";
const char str1144[] PROGMEM = "tumour"; const char str1145[] PROGMEM = "dump";
const char str1146[] PROGMEM = "segment";const char str1147[] PROGMEM = "aunt";
const char str1148[] PROGMEM = "fluid";  const char str1149[] PROGMEM = "riot";
const char str1150[] PROGMEM = "hazard";
const char str1151[] PROGMEM = "fitness";const char str1152[] PROGMEM = "rally";
const char str1153[] PROGMEM = "vein";const char str1154[] PROGMEM = "awkward";
const char str1155[] PROGMEM = "liquid";const char str1156[] PROGMEM = "nail";
const char str1157[] PROGMEM = "atom";const char str1158[] PROGMEM = "auction";
const char str1159[] PROGMEM = "take";
const char str1160[] PROGMEM = "rigid";const char str1161[] PROGMEM = "hedge";
const char str1162[] PROGMEM = "eagle";
const char str1163[] PROGMEM = "peculiar";const char str1164[] PROGMEM = "bold";
const char str1165[] PROGMEM = "saying";const char str1166[] PROGMEM = "yacht";
const char str1167[] PROGMEM = "fossil";const char str1168[] PROGMEM = "lump";
const char str1169[] PROGMEM = "mobility";//<--realword
const char str1170[] PROGMEM = "good";
const char str1171[] PROGMEM = "onwards";const char str1172[] PROGMEM = "cave";
const char str1173[] PROGMEM = "erect";  const char str1174[] PROGMEM = "tuck";
const char str1175[] PROGMEM = "ruin";const char str1176[] PROGMEM = "dedicate";
const char str1177[] PROGMEM = "bucket";// <--uncommon
const char str1178[] PROGMEM = "might";
const char str1179[] PROGMEM = "ritual";
const char str1180[] PROGMEM = "dioxide";//<--uncommon
const char str1181[] PROGMEM = "soap";
const char str1182[] PROGMEM = "bias";const char str1183[] PROGMEM = "eyebrow";
const char str1184[] PROGMEM = "irrelevant";
const char str1185[] PROGMEM = "ankle";const char str1186[] PROGMEM = "tobacco";
const char str1187[] PROGMEM = "sauce";const char str1188[] PROGMEM = "bunch";
const char str1189[] PROGMEM = "hook";const char str1190[] PROGMEM = "wicket";
const char str1191[] PROGMEM = "don't";const char str1192[] PROGMEM = "tyre";
const char str1193[] PROGMEM = "elaborate";
const char str1194[] PROGMEM = "dilemma";
const char str1195[] PROGMEM = "utterly";
const char str1196[] PROGMEM = "unpleasant";
const char str1197[] PROGMEM = "sacred";const char str1198[] PROGMEM = "obey";
const char str1199[] PROGMEM = "jeans";
const char str1200[] PROGMEM = "boyfriend"; // <--realword
const char str1201[] PROGMEM = "viewer";const char str1202[] PROGMEM = "melt";
const char str1203[] PROGMEM = "pump";const char str1204[] PROGMEM = "erosion";
const char str1205[] PROGMEM = "lemon";const char str1206[] PROGMEM = "doing";
const char str1207[] PROGMEM = "sunlight"; //<--realword
const char str1208[] PROGMEM = "skull";const char str1209[] PROGMEM = "inland";
const char str1210[] PROGMEM = "bless";const char str1211[] PROGMEM = "toss";
const char str1212[] PROGMEM = "jewellery"; //uncommon realword apparently wrong
const char str1213[] PROGMEM = "fond"; const char str1214[] PROGMEM = "mammal";
const char str1215[] PROGMEM = "sovereignty";
const char str1216[] PROGMEM = "enzyme";const char str1217[] PROGMEM = "last";
const char str1218[] PROGMEM = "synthesis";
const char str1219[] PROGMEM = "fusion";const char str1220[] PROGMEM = "onion";
const char str1221[] PROGMEM = "rage";  const char str1222[] PROGMEM = "toxic";
const char str1223[] PROGMEM = "apology";
const char str1224[] PROGMEM = "cylinder";
const char str1225[] PROGMEM = "cognitive";
const char str1226[] PROGMEM = "gothic";
const char str1227[] PROGMEM = "hydrogen";
const char str1228[] PROGMEM = "usage"; const char str1229[] PROGMEM = "jail";
const char str1230[] PROGMEM = "fertility";
const char str1231[] PROGMEM = "wolf";const char str1232[] PROGMEM = "orthodox";
const char str1233[] PROGMEM = "jazz";const char str1234[] PROGMEM = "boil";
const char str1235[] PROGMEM = "keyboard";//---realword
const char str1236[] PROGMEM = "vowel";  //---realword:hammer
const char str1237[] PROGMEM = "given";
const char str1238[] PROGMEM = "dual";  const char str1239[] PROGMEM = "pepper";
const char str1240[] PROGMEM = "ethical";
const char str1241[] PROGMEM = "bicycle";
const char str1242[] PROGMEM = "luxury";
const char str1243[] PROGMEM = "glimpse";const char str1244[] PROGMEM = "alert";
const char str1245[] PROGMEM = "node";   const char str1246[] PROGMEM = "lodge";
const char str1247[] PROGMEM = "ignorance";
const char str1248[] PROGMEM = "abbey";  const char str1249[] PROGMEM = "lobby";
const char str1250[] PROGMEM = "told";
const char str1251[] PROGMEM = "pudding";const char str1252[] PROGMEM = "cage";
const char str1253[] PROGMEM = "ashamed";const char str1254[] PROGMEM = "amid";
const char str1255[] PROGMEM = "exotic";
const char str1256[] PROGMEM = "coherent";
const char str1257[] PROGMEM = "amuse";  const char str1258[] PROGMEM = "torch";
const char str1259[] PROGMEM = "arbitrary";
const char str1260[] PROGMEM = "haul";const char str1261[] PROGMEM = "sediment";
const char str1262[] PROGMEM = "lexical";
const char str1263[] PROGMEM = "uphold";const char str1264[] PROGMEM = "sketch";
const char str1265[] PROGMEM = "rifle"; const char str1266[] PROGMEM = "yarn";
const char str1267[] PROGMEM = "bizarre";const char str1268[] PROGMEM = "sniff";
const char str1269[] PROGMEM = "daylight";
const char str1270[] PROGMEM = "nuisance";
const char str1271[] PROGMEM = "vivid";  const char str1272[] PROGMEM = "rude";
const char str1273[] PROGMEM = "velocity";
const char str1274[] PROGMEM = "vocational";
const char str1275[] PROGMEM = "fever";const char str1276[] PROGMEM = "cutting";
const char str1277[] PROGMEM = "agony";const char str1278[] PROGMEM = "poison";
const char str1279[] PROGMEM = "ribbon";
const char str1280[] PROGMEM = "unwilling";
const char str1281[] PROGMEM = "irony";const char str1282[] PROGMEM = "toast";
const char str1283[] PROGMEM = "aluminium";
const char str1284[] PROGMEM = "unreasonable";
const char str1285[] PROGMEM = "dash";const char str1286[] PROGMEM = "vigorous";
const char str1287[] PROGMEM = "asylum";
const char str1288[] PROGMEM = "rhetoric";
const char str1289[] PROGMEM = "jockey";const char str1290[] PROGMEM = "viable";
const char str1291[] PROGMEM = "unsuccessful";
const char str1292[] PROGMEM = "hemisphere"; //<--realword
const char str1293[] PROGMEM = "nominate";
const char str1294[] PROGMEM = "area";
const char str1295[] PROGMEM = "nine"; //vacuum<uncommon
const char str1296[] PROGMEM = "jerk";
const char str1297[] PROGMEM = "rehearsal";
const char str1298[] PROGMEM = "bake"; const char str1299[] PROGMEM = "vector";
const char str1300[] PROGMEM = "robbery"; //<--uncommon
const char str1301[] PROGMEM = "aviation";//<--uncommon
const char str1302[] PROGMEM = "kettle";const char str1303[] PROGMEM = "gown";
const char str1304[] PROGMEM = "gospel";const char str1305[] PROGMEM = "hectare";
const char str1306[] PROGMEM = "hobby"; const char str1307[] PROGMEM = "boxing";
const char str1308[] PROGMEM = "upgrade";
const char str1309[] PROGMEM = "sideways";const char str1310[] PROGMEM = "noun";
const char str1311[] PROGMEM = "sodium";
const char str1312[] PROGMEM = "rotation";
const char str1313[] PROGMEM = "syllable";
const char str1314[] PROGMEM = "veteran";const char str1315[] PROGMEM = "ulcer";
const char str1316[] PROGMEM = "voucher";const char str1317[] PROGMEM = "odour";
const char str1318[] PROGMEM = "pioneer";
const char str1319[] PROGMEM = "nitrogen";
const char str1320[] PROGMEM = "pedestrian";
const char str1321[] PROGMEM = "microphone";
const char str1322[] PROGMEM = "hastily";const char str1323[] PROGMEM = "dozen";
const char str1324[] PROGMEM = "omission";
const char str1325[] PROGMEM = "orbit";  const char str1326[] PROGMEM = "slump";
const char str1327[] PROGMEM = "puzzle";
const char str1328[] PROGMEM = "cemetery";
const char str1329[] PROGMEM = "nephew";
const char str1330[] PROGMEM = "astonishing";
const char str1331[] PROGMEM = "bubble";
const char str1332[] PROGMEM = "ascertain";
const char str1333[] PROGMEM = "went";//<--removal: pigeon
const char str1334[] PROGMEM = "municipal";
const char str1335[] PROGMEM = "sulphur";
const char str1336[] PROGMEM = "voyage"; const char str1337[] PROGMEM = "siege";
const char str1338[] PROGMEM = "eternal";
const char str1339[] PROGMEM = "ample"; //<--realword
const char str1340[] PROGMEM = "lazy";
const char str1341[] PROGMEM = "kidney";//<--realword
const char str1342[] PROGMEM = "pest";   const char str1343[] PROGMEM = "bump";
const char str1344[] PROGMEM = "athlete";const char str1345[] PROGMEM = "bail";
const char str1346[] PROGMEM = "abnormal";
const char str1347[] PROGMEM = "hover";
//------------four letter start------------------
//problem

const char * const wordIndex[] PROGMEM= 	   
{   
  str0,str1,str2,str3,str4,str5,str6,str7,str8,str9,
  str10,str11,str12,str13,str14,str15,str16,str17,str18,str19,
  str20,str21,str22,str23,str24,str25,//start 2 combos
  str26,str27,str28,str29,
  str30,str31,str32,str33,str34,str35,str36,str37,str38,str39,
  str40,str41,str42,str43,str44,str45,str46,str47,str48,str49,
  str50,str51,str52,str53,str54,str55,str56,str57,str58,str59,
  str60,str61,str62,str63,str64,str65,str66,str67,str68,str69,
  str70,str71,str72,str73,str74,str75,str76,str77,str78,str79,
  str80,str81,str82,str83,str84,str85,str86,str87,str88,str89,
  str90,str91,str92,str93,str94,str95,str96,str97,str98,str99,
  str100,str101,str102,str103,str104,str105,str106,str107,str108,str109,
  str110,str111,str112,str113,str114,str115,str116,str117,str118,str119,
  str120,str121,str122,str123,str124,str125,str126,str127,str128,str129,
  str130,str131,str132,str133,str134,str135,str136,str137,str138,str139,
  str140,str141,str142,str143,str144,str145,str146,str147,str148,str149,
  str150,str151,str152,str153,str154,str155,str156,str157,str158,str159,
  str160,str161,str162,str163,str164,str165,str166,str167,str168,str169,
  str170,str171,str172,str173,str174,str175,str176,str177,str178,str179,
  str180,str181,str182,str183,str184,str185,str186,str187,str188,str189,
  str190,str191,str192,str193,str194,str195,str196,str197,str198,str199,
  str200,str201,str202,str203,str204,str205,str206,str207,str208,str209,
  str210,str211,str212,str213,str214,str215,str216,str217,str218,str219,
  str220,str221,str222,str223,str224,str225,str226,//start 3 combos
  str227,str228,str229,
  str230,str231,str232,str233,str234,str235,str236,str237,str238,str239,
  str240,str241,str242,str243,str244,str245,str246,str247,str248,str249,
  str250,str251,str252,str253,str254,str255,str256,str257,str258,str259,
  str260,str261,str262,str263,str264,str265,str266,str267,str268,str269,
  str270,str271,str272,str273,str274,str275,str276,str277,str278,str279,
  str280,str281,str282,str283,str284,str285,str286,str287,str288,str289,
  str290,str291,str292,str293,str294,str295,str296,str297,str298,str299,
  str300,str301,str302,str303,str304,str305,str306,str307,str308,str309,
  str310,str311,str312,str313,str314,str315,str316,str317,str318,str319,
  str320,str321,str322,str323,str324,str325,str326,str327,str328,str329,
  str330,str331,str332,str333,str334,str335,str336,str337,str338,str339,
  str340,str341,str342,str343,str344,str345,str346,str347,str348,str349,
  str350,str351,str352,str353,str354,str355,str356,str357,str358,str359,
  str360,str361,str362,str363,str364,str365,str366,str367,str368,str369,
  str370,str371,str372,str373,str374,str375,str376,str377,str378,str379,
  str380,str381,str382,str383,str384,str385,str386,str387,str388,str389,
  str390,str391,str392,str393,str394,str395,str396,str397,str398,str399,
  str400,str401,str402,str403,str404,str405,str406,str407,str408,str409,
  str410,str411,str412,str413,str414,str415,str416,str417,str418,str419,
  str420,str421,str422,str423,str424,str425,str426,str427,str428,str429,
  str430,str431,str432,str433,str434,str435,str436,str437,str438,str439,
  str440,str441,str442,str443,str444,str445,str446,str447,str448,str449,
  str450,str451,str452,str453,str454,str455,str456,str457,str458,str459,
  str460,str461,str462,str463,str464,str465,str466,str467,str468,str469,
  str470,str471,str472,str473,str474,str475,str476,str477,str478,str479,
  str480,str481,str482,str483,str484,str485,str486,str487,str488,str489,
  str490,str491,str492,str493,str494,str495,str496,str497,str498,str499,
  str500,str501,str502,str503,str504,str505,str506,str507,str508,str509,
  str510,str511,str512,str513,str514,str515,str516,str517,str518,str519,
  str520,str521,str522,str523,str524,str525,str526,str527,str528,str529,
  str530,str531,str532,str533,str534,str535,str536,str537,str538,str539,
  str540,str541,str542,str543,str544,str545,str546,str547,str548,str549,
  str550,str551,str552,str553,str554,str555,str556,str557,str558,str559,
  str560,str561,str562,str563,str564,str565,str566,str567,str568,str569,
  str570,str571,str572,str573,str574,str575,str576,str577,str578,str579,
  str580,str581,str582,str583,str584,str585,str586,str587,str588,str589,
  str590,str591,str592,str593,str594,str595,str596,str597,str598,str599,
  str600,str601,str602,str603,str604,str605,str606,str607,str608,str609,
  str610,str611,str612,str613,str614,str615,str616,str617,str618,str619,
  str620,str621,str622,str623,str624,str625,str626,str627,str628,str629,
  str630,str631,str632,str633,str634,str635,str636,str637,str638,str639,
  str640,str641,str642,str643,str644,str645,str646,str647,str648,str649,
  str650,str651,str652,str653,str654,str655,str656,str657,str658,str659,
  str660,str661,str662,str663,str664,str665,str666,str667,str668,str669,
  str670,str671,str672,str673,str674,str675,str676,str677,str678,str679,
  str680,str681,str682,str683,str684,str685,str686,str687,str688,str689,
  str690,str691,str692,str693,str694,str695,str696,str697,str698,str699,
  str700,str701,str702,str703,str704,str705,str706,str707,str708,str709,
  str710,str711,str712,str713,str714,str715,str716,str717,str718,str719,
  str720,str721,str722,str723,str724,str725,str726,str727,str728,str729,
  str730,str731,str732,str733,str734,str735,str736,str737,str738,str739,
  str740,str741,str742,str743,str744,str745,str746,str747,str748,str749,
  str750,str751,str752,str753,str754,str755,str756,str757,str758,str759,
  str760,str761,str762,str763,str764,str765,str766,str767,str768,str769,
  str770,str771,str772,str773,str774,str775,str776,str777,str778,str779,
  str780,str781,str782,str783,str784,str785,str786,str787,str788,str789,
  str790,str791,str792,str793,str794,str795,str796,str797,str798,str799,
  str800,str801,str802,str803,str804,str805,str806,str807,str808,str809,
  str810,str811,str812,str813,str814,str815,str816,str817,str818,str819,
  str820,str821,str822,str823,str824,str825,str826,str827,str828,str829,
  str830,str831,str832,str833,str834,str835,str836,str837,str838,str839,
  str840,str841,str842,str843,str844,str845,str846,str847,str848,str849,
  str850,str851,str852,str853,str854,str855,str856,str857,str858,str859,
  str860,str861,str862,str863,str864,str865,str866,str867,str868,str869,
  str870,str871,str872,str873,str874,str875,str876,str877,str878,str879,
  str880,str881,str882,str883,str884,str885,str886,str887,str888,str889,
  str890,str891,str892,str893,str894,str895,str896,str897,str898,str899,
  str900,str901,str902,str903,str904,str905,str906,str907,str908,str909,
  str910,str911,str912,str913,str914,str915,str916,str917,str918,str919,
  str920,str921,str922,str923,str924,str925,str926,str927,str928,str929,
  str930,str931,str932,str933,str934,str935,str936,str937,str938,str939,
  str940,str941,str942,str943,str944,str945,str946,str947,str948,str949,
  str950,str951,str952,str953,str954,str955,str956,str957,str958,str959,
  str960,str961,str962,str963,str964,str965,str966,str967,str968,str969,
  str970,str971,str972,str973,str974,str975,str976,str977,str978,str979,
  str980,str981,str982,str983,str984,str985,str986,str987,str988,str989,
  str990,str991,str992,str993,str994,str995,str996,str997,str998,str999,
  str1000,str1001,str1002,str1003,str1004,str1005,str1006,str1007,str1008,
  str1009,str1010,str1011,str1012,str1013,str1014,str1015,str1016,str1017,
  str1018,str1019,str1020,str1021,str1022,str1023,str1024,str1025,str1026,
  str1027,str1028,str1029,str1030,str1031,str1032,str1033,str1034,str1035,
  str1036,str1037,str1038,str1039,str1040,str1041,str1042,str1043,str1044,
  str1045,str1046,str1047,str1048,str1049,str1050,str1051,str1052,str1053,
  str1054,str1055,str1056,str1057,str1058,str1059,str1060,str1061,str1062,
  str1063,str1064,str1065,str1066,str1067,str1068,str1069,str1070,str1071,
  str1072,str1073,str1074,str1075,str1076,str1077,str1078,str1079,str1080,
  str1081,str1082,str1083,str1084,str1085,str1086,str1087,str1088,str1089,
  str1090,str1091,str1092,str1093,str1094,str1095,str1096,str1097,str1098,
  str1099,str1100,str1101,str1102,str1103,str1104,str1105,str1106,str1107,
  str1108,str1109,str1110,str1111,str1112,str1113,str1114,str1115,str1116,
  str1117,str1118,str1119,str1120,str1121,str1122,str1123,str1124,str1125,
  str1126,str1127,str1128,str1129,str1130,str1131,str1132,str1133,str1134,
  str1135,str1136,str1137,str1138,str1139,str1140,str1141,str1142,str1143,
  str1144,str1145,str1146,str1147,str1148,str1149,str1150,str1151,str1152,
  str1153,str1154,str1155,str1156,str1157,str1158,str1159,str1160,str1161,
  str1162,str1163,str1164,str1165,str1166,str1167,str1168,str1169,str1170,
  str1171,str1172,str1173,str1174,str1175,str1176,str1177,str1178,str1179,
  str1180,str1181,str1182,str1183,str1184,str1185,str1186,str1187,str1188,
  str1189,str1190,str1191,str1192,str1193,str1194,str1195,str1196,str1197,
  str1198,str1199,str1200,str1201,str1202,str1203,str1204,str1205,str1206,
  str1207,str1208,str1209,str1210,str1211,str1212,str1213,str1214,str1215,
  str1216,str1217,str1218,str1219,str1220,str1221,str1222,str1223,str1224,
  str1225,str1226,str1227,str1228,str1229,str1230,str1231,str1232,str1233,
  str1234,str1235,str1236,str1237,str1238,str1239,str1240,str1241,str1242,
  str1243,str1244,str1245,str1246,str1247,str1248,str1249,str1250,str1251,
  str1252,str1253,str1254,str1255,str1256,str1257,str1258,str1259,str1260,
  str1261,str1262,str1263,str1264,str1265,str1266,str1267,str1268,str1269,
  str1270,str1271,str1272,str1273,str1274,str1275,str1276,str1277,str1278,
  str1279,str1280,str1281,str1282,str1283,str1284,str1285,str1286,str1287,
  str1288,str1289,str1290,str1291,str1292,str1293,str1294,str1295,str1296,
  str1297,str1298,str1299,str1300,str1301,str1302,str1303,str1304,str1305,
  str1306,str1307,str1308,str1309,str1310,str1311,str1312,str1313,str1314,
  str1315,str1316,str1317,str1318,str1319,str1320,str1321,str1322,str1323,
  str1324,str1325,str1326,str1327,str1328,str1329,str1330,str1331,str1332,
  str1333,str1334,str1335,str1336,str1337,str1338,str1339,str1340,str1341,
  str1342,str1343,str1344,str1345,str1346,str1347,
};

const int TC_INDEX[] = {0,25,225,1348};//index to type correction dictionary
#define CHECKABLE_CHARS 3 //up to N positions
#define LARGEST_WRD 15

void headsUpSuggest(byte letter, byte place)
{
  static char sChar[CHECKABLE_CHARS];
  static boolean firstCap = 0;
  static char buff[LARGEST_WRD]; //buff for suggestions to be stored in ram

  if(place == 0 && letter > 64 && letter < 91)
  {//given we are talking a letter that could be capitalized
    sChar[place] = (char)letter + 32;//lower caps for comparison
    firstCap = true;//note that the first letter is capitalized
  }
  else if(place<CHECKABLE_CHARS && letter>96 && letter<123)
  {//given we are talking letters we have suggestions for
    sChar[place] = (char)letter;
  }
  else if(letter == 8)//backspace case
  {
    if(place == 0xff){firstCap = false;}
    else if(place < CHECKABLE_CHARS){sChar[place + 1] = 0;}
    return;
  }
  else
  {
    if(letter == IMPLICIT_SPACE)
    {
      if(place < CHECKABLE_CHARS && buff[place])
      {
        for(byte i = 0; i < place + 1; i++){Keyboard.write(8);}
        Keyboard.print(buff);//print suggestion
      }
      Keyboard.write(32);  //complete word with trailing space
    }
    firstCap = false;
    return;
  }//none checkable condition

  for(int i = TC_INDEX[place];i < TC_INDEX[place + 1];i++)
  {//for every word in this possition length of the dictionary
    strcpy_P(buff, (char*)pgm_read_word(&(wordIndex[i])));//pull into buf
    for(byte j = 0; j < place + 1; j++)
    {//iterate over places in the word until an incorrect match
      if(buff[j] != sChar[j]){break;}
      else if(j == place)//match case
      {
        if(firstCap){buff[0] -= 32;}//cap first if needed
        Serial.println(buff); //this suggestion matches, print it
        return; //Mission accomplished: suggestion found
      }
    }
  }//unsuccesfull search
  for(byte rm = 0; rm < LARGEST_WRD; rm++){buff[rm] = 0;}//remove last search
}
