// Generated from random_multinomial.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::random_multinomial {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0.025f,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{ // input0
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.18163621f, 0.3327348f, 0.50951556f, 0.08877703f, 0.51185218f, 0.1673424f, 0.63870587f, 0.56538613f, 0.96808477f, 0.56056615f, 0.02934992f, 0.03258404f, 0.72106282f, 0.54496657f, 0.22183018f, 0.14761066f, 0.38261428f, 0.73637053f, 0.78623964f, 0.00538754f, 0.17758578f, 0.21533023f, 0.83887367f, 0.71035332f, 0.28841254f, 0.24017199f, 0.11599192f, 0.55738622f, 0.35368502f, 0.09133554f, 0.81038602f, 0.03550774f, 0.88201054f, 0.07141711f, 0.20562562f, 0.9998214f, 0.36866199f, 0.84549652f, 0.68196711f, 0.60800431f, 0.04897644f, 0.79349817f, 0.34294643f, 0.31649012f, 0.61759858f, 0.67423009f, 0.14606593f, 0.82548304f, 0.14200278f, 0.58680437f, 0.41861224f, 0.86453261f, 0.80694849f, 0.23185477f, 0.81298628f, 0.1415089f, 0.16687062f, 0.03645446f, 0.50345389f, 0.82756624f, 0.84377461f, 0.46665451f, 0.91611352f, 0.29161655f, 0.86669246f, 0.21630808f, 0.98051105f, 0.7158922f, 0.54117114f, 0.37597655f, 0.61811207f, 0.39746145f, 0.19850883f, 0.10498004f, 0.45398218f, 0.84427816f, 0.44244307f, 0.97186493f, 0.02943687f, 0.05995579f, 0.91047162f, 0.84049659f, 0.29692092f, 0.37859579f, 0.68067858f, 0.53199727f, 0.30587859f, 0.96904311f, 0.53895138f, 0.8035052f, 0.56936886f, 0.90789923f, 0.48829865f, 0.74295622f, 0.07730283f, 0.35745998f, 0.63879813f, 0.8858171f, 0.78119555f, 0.34389121f, 0.00664631f, 0.43921788f, 0.38457199f, 0.95430791f, 0.92432083f, 0.29473732f, 0.25805162f, 0.94078243f, 0.63156303f, 0.49350546f, 0.60020588f, 0.1699311f, 0.78426143f, 0.31030305f, 0.74027296f, 0.86801874f, 0.71064432f, 0.9804212f, 0.26738505f, 0.22304029f, 0.9747488f, 0.93888746f, 0.02851034f, 0.22468271f, 0.67886092f, 0.79198019f, 0.56653174f, 0.17544579f, 0.89579936f, 0.9627906f, 0.04028579f, 0.586905f, 0.72510547f, 0.60705131f, 0.4332557f, 0.15888959f, 0.3452346f, 0.56390766f, 0.31160624f, 0.14503308f, 0.19243339f, 0.26307077f, 0.53711017f, 0.90120554f, 0.20798102f, 0.44519176f, 0.83232068f, 0.82690943f, 0.23728192f, 0.27897126f, 0.24336233f, 0.5649185f, 0.8000913f, 0.91884854f, 0.00823675f, 0.30183011f, 0.64548693f, 0.06524323f, 0.0296091f, 0.10885612f, 0.93308847f, 0.01737334f, 0.87532111f, 0.64499222f, 0.80151762f, 0.68087718f, 0.48854077f, 0.33778072f, 0.89418992f, 0.00524248f, 0.49021969f, 0.4240395f, 0.74438303f, 0.9300514f, 0.98648675f, 0.0631691f, 0.77617813f, 0.77113286f, 0.51341796f, 0.49668114f, 0.85817043f, 0.12039487f, 0.69007245f, 0.63516463f, 0.43368987f, 0.0303484f, 0.75404114f, 0.78141053f, 0.23417318f, 0.0746254f, 0.02689441f, 0.6663184f, 0.86519194f, 0.91861606f, 0.1081877f, 0.42462775f, 0.26566337f, 0.68942528f, 0.27363712f, 0.54874752f, 0.58072208f, 0.18649499f, 0.79037057f, 0.14188329f, 0.29430633f, 0.91596697f, 0.40646783f, 0.7772651f, 0.75446749f, 0.01020716f, 0.20875567f, 0.73854318f, 0.73204509f, 0.02641734f, 0.15423192f, 0.9786318f, 0.14997906f, 0.56356818f, 0.71459404f, 0.74379692f, 0.40063276f, 0.05400237f, 0.51403009f, 0.27387991f, 0.68738814f, 0.44641846f, 0.38901113f, 0.52327729f, 0.97282648f, 0.43078061f, 0.66980505f, 0.21611701f, 0.78165645f, 0.01494616f, 0.14573566f, 0.89647321f, 0.27992757f, 0.93745905f, 0.95605115f, 0.14323041f, 0.93223624f, 0.13351544f, 0.48690382f, 0.48056268f, 0.5839936f, 0.38147627f, 0.5730877f, 0.88455851f, 0.61266891f, 0.88541185f, 0.88516824f, 0.53789164f, 0.04956664f, 0.11410213f, 0.47340589f, 0.30371802f, 0.6881104f, 0.60006376f, 0.98732277f, 0.11725557f, 0.91365836f, 0.49581686f, 0.43231324f, 0.88435984f, 0.07224436f, 0.35188695f, 0.74323035f, 0.20613255f, 0.80579434f, 0.19316965f, 0.05335943f, 0.77709435f, 0.20689616f, 0.85582175f, 0.14171426f, 0.05923329f, 0.57708418f, 0.58697364f, 0.50752432f, 0.88097219f, 0.9393658f, 0.78270476f, 0.07068334f, 0.80061511f, 0.66090995f, 0.4040367f, 0.37639738f, 0.31872702f, 0.10560548f, 0.32295307f, 0.71104409f, 0.95057601f, 0.62568311f, 0.82158469f, 0.87822325f, 0.34216374f, 0.42095343f, 0.49155748f, 0.04824981f, 0.93577404f, 0.02006045f, 0.52143329f, 0.35735855f, 0.22339355f, 0.21191254f, 0.2546379f, 0.00673706f, 0.02776729f, 0.29688424f, 0.28939652f, 0.93429233f, 0.54223604f, 0.24985107f, 0.83891685f, 0.16851543f, 0.09681473f, 0.12913905f, 0.41894106f, 0.88119316f, 0.56941667f, 0.98743163f, 0.24583594f, 0.26439969f, 0.98900542f, 0.5955239f, 0.1059829f, 0.19145128f, 0.82124177f, 0.16724271f, 0.44599363f, 0.59829451f, 0.72605966f, 0.09989227f, 0.82615394f, 0.5806505f, 0.11331605f, 0.28981f, 0.84587381f, 0.07083202f, 0.14833035f, 0.65867223f, 0.59021865f, 0.58735805f, 0.59678862f, 0.70551718f, 0.19207017f, 0.73940653f, 0.22106109f, 0.33934016f, 0.77465068f, 0.22509303f, 0.1235782f, 0.94794034f, 0.97312112f, 0.73280797f, 0.599655f, 0.18524258f, 0.11258899f, 0.55591609f, 0.46436632f, 0.21880912f, 0.1987587f, 0.3838968f, 0.14392435f, 0.70625112f, 0.93164951f, 0.79722014f, 0.48610288f, 0.72093904f, 0.72137738f, 0.27261254f, 0.76680176f, 0.1166376f, 0.1839796f, 0.03195002f, 0.82115076f, 0.73068862f, 0.28732616f, 0.61875003f, 0.88276158f, 0.02675303f, 0.93052378f, 0.45810254f, 0.80719106f, 0.78505935f, 0.15465711f, 0.81852908f, 0.01035686f, 0.6375997f, 0.57701143f, 0.61182946f, 0.81902549f, 0.64849716f, 0.63775381f, 0.33944463f, 0.01088021f, 0.81885416f, 0.06320171f, 0.09684302f, 0.04174445f, 0.93106984f, 0.07546183f, 0.24547596f, 0.93751226f, 0.74065679f, 0.54327627f, 0.17024274f, 0.94692311f, 0.09290775f, 0.53920561f, 0.72992514f, 0.62150301f, 0.40669172f, 0.06787872f, 0.72004642f, 0.3949012f, 0.98234857f, 0.94828936f, 0.74268101f, 0.73370598f, 0.68092173f, 0.37850705f, 0.61021436f, 0.26261629f, 0.52934261f, 0.06334639f, 0.76891534f, 0.32289764f, 0.92373486f, 0.42402109f, 0.41378012f, 0.10279785f, 0.67314394f, 0.48186146f, 0.5067538f, 0.86822955f, 0.8249941f, 0.15719373f, 0.2966814f, 0.92028725f, 0.95904319f, 0.25983566f, 0.75594963f, 0.46969604f, 0.82638328f, 0.56783068f, 0.96105872f, 0.43980714f, 0.98960801f, 0.70075472f, 0.1554009f, 0.57160886f, 0.88793223f, 0.57795871f, 0.56514445f, 0.65909586f, 0.69458952f, 0.42359339f, 0.09707922f, 0.04027207f, 0.7964146f, 0.55542973f, 0.57159987f, 0.41985797f, 0.61658945f, 0.03278444f, 0.63403447f, 0.09048499f, 0.84939516f, 0.04907535f, 0.579219f, 0.96982613f, 0.96066375f, 0.60938927f, 0.98017393f, 0.47613619f, 0.04483615f, 0.35458106f, 0.77925608f, 0.09762995f, 0.17605426f, 0.6547558f, 0.49400027f, 0.74430323f, 0.66834557f, 0.55180554f, 0.56149147f, 0.17780739f, 0.45887371f, 0.87113438f, 0.34729137f, 0.0362189f, 0.02752394f, 0.58748568f, 0.949492f, 0.01234387f, 0.22512224f, 0.20421475f, 0.30241591f, 0.4428763f, 0.92693591f, 0.85988589f, 0.58523018f, 0.75493725f, 0.67976038f, 0.90210808f, 0.16193264f, 0.06854948f, 0.780654f, 0.56588785f, 0.06676102f, 0.42662219f, 0.12653993f, 0.18016388f, 0.74432183f, 0.80186216f, 0.61353588f, 0.30734192f, 0.60950496f, 0.73033964f, 0.45933113f, 0.95340344f, 0.95873238f, 0.22091518f, 0.41664395f, 0.89282994f, 0.12649949f, 0.94538995f, 0.38797159f, 0.21194355f, 0.93976699f, 0.13237574f, 0.17614998f, 0.63638084f, 0.74515463f, 0.15821088f, 0.26233025f, 0.97151094f, 0.84639784f, 0.96858076f, 0.12372874f, 0.00061914f, 0.47989416f, 0.46585169f, 0.93181998f, 0.2416897f, 0.51493176f, 0.84527806f, 0.71583991f, 0.47779283f, 0.7489892f, 0.1475276f, 0.50176804f, 0.23792488f, 0.36169898f, 0.07560302f, 0.38701148f, 0.76247368f, 0.20033977f, 0.48230152f, 0.30565115f, 0.22688719f, 0.31492229f, 0.7390802f, 0.63944999f, 0.63692535f, 0.36776983f, 0.99915443f, 0.37796898f, 0.57700454f, 0.19073928f, 0.35272975f, 0.47523137f, 0.86415822f, 0.14259931f, 0.86897617f, 0.87083832f, 0.09469065f, 0.01176569f, 0.6651902f, 0.53688186f, 0.57907948f, 0.92104488f, 0.53224148f, 0.94279853f, 0.66933028f, 0.76264173f, 0.00846143f, 0.17787411f, 0.27029984f, 0.94069575f, 0.97091936f, 0.34419143f, 0.8051343f, 0.97102144f, 0.56356255f, 0.96426302f, 0.36658938f, 0.83537716f, 0.99772803f, 0.44309853f, 0.82985523f, 0.10590215f, 0.26874156f, 0.99451632f, 0.40830606f, 0.55523556f, 0.66017859f, 0.55543373f, 0.33966445f, 0.68147221f, 0.15953739f, 0.70994904f, 0.34768995f, 0.26252758f, 0.61505059f, 0.7300693f, 0.19949312f, 0.20781777f, 0.5699809f, 0.08808883f, 0.90775056f, 0.64990724f, 0.85463078f, 0.57091962f, 0.37328744f, 0.94231607f, 0.48375077f, 0.5124315f, 0.08293697f, 0.84244579f, 0.71510894f, 0.16874849f, 0.98483478f, 0.79377902f, 0.71630545f, 0.0282783f, 0.05768694f, 0.1975256f, 0.91946121f, 0.75047528f, 0.77643189f, 0.55484145f, 0.09883586f, 0.95207175f, 0.61484315f, 0.65478232f, 0.89697994f, 0.81336748f, 0.68487048f, 0.3086041f, 0.69941932f, 0.81105303f, 0.3071789f, 0.98674485f, 0.61447425f, 0.69822731f, 0.75686959f, 0.52146685f, 0.40302938f, 0.26923451f, 0.51424179f, 0.65125432f, 0.35501958f, 0.51128504f, 0.62502966f, 0.93869369f, 0.04485744f, 0.46558787f, 0.36337906f, 0.06694895f, 0.56433501f, 0.11381991f, 0.25193077f, 0.98502529f, 0.05704914f, 0.42741233f, 0.94695681f, 0.34237149f, 0.21235143f, 0.38026753f, 0.87707973f, 0.19586441f, 0.12177076f, 0.50809963f, 0.75425738f, 0.73740277f, 0.95442052f, 0.30532292f, 0.28454304f, 0.1109462f, 0.28705514f, 0.6037947f, 0.82317726f, 0.68476054f, 0.19807496f, 0.62396085f, 0.93379787f, 0.54316971f, 0.63767898f, 0.48464992f, 0.62082514f, 0.88571107f, 0.5337665f, 0.33199652f, 0.73353233f, 0.40077416f, 0.7461847f, 0.59866563f, 0.21305606f, 0.12555324f, 0.99799893f, 0.55033241f, 0.03249085f, 0.26086445f, 0.98521994f, 0.99166855f, 0.53523486f, 0.69955169f, 0.04899369f, 0.23795922f, 0.47763494f, 0.76727401f, 0.33971988f, 0.13467868f, 0.6142018f, 0.15563938f, 0.55256845f, 0.26988188f, 0.1326102f, 0.2797428f, 0.11176598f, 0.32525126f, 0.88784146f, 0.26752581f, 0.03067154f, 0.60569129f, 0.02002373f, 0.48760334f, 0.62073825f, 0.21474893f, 0.76444057f, 0.55800774f, 0.73889036f, 0.29518644f, 0.94996021f, 0.56444047f, 0.47058584f, 0.43366718f, 0.85572272f, 0.90300854f, 0.59503714f, 0.65801756f, 0.56853684f, 0.58558048f, 0.72015027f, 0.17025921f, 0.30271306f, 0.53116499f, 0.97653227f, 0.51964288f, 0.52717848f, 0.05840294f, 0.52634715f, 0.29470665f, 0.99334131f, 0.65047692f, 0.47785087f, 0.90506666f, 0.67078885f, 0.90046675f, 0.32475029f, 0.34752749f, 0.9129403f, 0.03475684f, 0.2686405f, 0.50324954f, 0.46955497f, 0.53413073f, 0.84181129f, 0.360859f, 0.59277558f, 0.88209431f, 0.25836241f, 0.70103928f, 0.02857411f, 0.36042473f, 0.56857452f, 0.45256708f, 0.61420176f, 0.18950828f, 0.57047725f, 0.27502452f, 0.76338308f, 0.54628702f, 0.97671683f, 0.91241649f, 0.87801976f, 0.90878537f, 0.53572628f, 0.28748983f, 0.38151063f, 0.53979463f, 0.02287989f, 0.16685784f, 0.29065976f, 0.90010275f, 0.2209012f, 0.00914414f, 0.02322095f, 0.25122691f, 0.3907038f, 0.5251212f, 0.72430885f, 0.72957361f, 0.9787146f, 0.9369526f, 0.21384469f, 0.68111323f, 0.93152877f, 0.38167531f, 0.64671057f, 0.99357667f, 0.81439462f, 0.18172161f, 0.34157997f, 0.14163516f, 0.97008374f, 0.00017817f, 0.17492667f, 0.89017036f, 0.10573359f, 0.01900931f, 0.16774126f, 0.79037446f, 0.84010306f, 0.47519226f, 0.00439313f, 0.18381522f, 0.84613238f, 0.75610369f, 0.38004291f, 0.12868142f, 0.35629285f, 0.80828631f, 0.28274608f, 0.44106362f, 0.73265737f, 0.61325191f, 0.2418784f, 0.97955674f, 0.93618438f, 0.96051047f, 0.23422243f, 0.97520706f, 0.82584169f, 0.88025727f, 0.35319169f, 0.11022647f, 0.48966716f, 0.33862352f, 0.46629508f, 0.35234246f, 0.99066635f, 0.99262152f, 0.00977917f, 0.61749715f, 0.2228196f, 0.71707526f, 0.87362648f, 0.91055938f, 0.47073659f, 0.88101976f, 0.21494194f, 0.33205552f, 0.54351819f, 0.55835019f, 0.01768484f, 0.02116836f, 0.70469912f, 0.76899386f, 0.64696939f, 0.40084197f, 0.59803212f, 0.52970593f, 0.89719532f, 0.87168575f, 0.35151884f, 0.5608725f, 0.38735172f, 0.10494279f, 0.41009167f, 0.74723117f, 0.32829241f, 0.92508072f, 0.08944341f, 0.61823771f, 0.9519981f, 0.38566778f, 0.45387474f, 0.14874216f, 0.06920534f, 0.16466161f, 0.57534195f, 0.72012502f, 0.2284078f, 0.64040413f, 0.7225271f, 0.46071354f, 0.95938459f, 0.15282101f, 0.25416612f, 0.27624054f, 0.40343682f, 0.21556083f, 0.10719734f, 0.01178395f, 0.81544681f, 0.61108854f, 0.58873211f, 0.08313659f, 0.31389776f, 0.26683639f, 0.1740869f, 0.19860426f, 0.54852056f, 0.45089482f, 0.29739356f, 0.06490634f, 0.94512628f, 0.75476861f, 0.79302202f, 0.91709407f, 0.44093711f, 0.42285809f, 0.87353064f, 0.05154859f, 0.05673061f, 0.03360053f, 0.47314265f, 0.14352713f, 0.86919501f, 0.89407749f, 0.71384359f, 0.43505102f, 0.76105734f, 0.480729f, 0.26590561f, 0.23636561f, 0.53526685f, 0.43621137f, 0.70461497f, 0.04695302f, 0.29312615f, 0.47657411f, 0.47776949f, 0.67893515f, 0.74761854f, 0.1964709f, 0.90858326f, 0.65050969f, 0.78866488f, 0.56645663f, 0.28301728f, 0.21439215f, 0.23534408f, 0.99123621f, 0.33798052f, 0.57132079f, 0.13509136f, 0.23913264f, 0.9882279f, 0.12259069f, 0.59413715f, 0.98916346f, 0.15804781f, 0.53868433f, 0.82989573f, 0.31032958f, 0.52338512f, 0.43014882f, 0.80809309f, 0.5810279f, 0.41232677f, 0.7232558f, 0.15152519f, 0.61332742f, 0.69908457f, 0.68902723f, 0.4086777f, 0.56938072f, 0.30977628f, 0.75155389f, 0.77055871f, 0.24496359f, 0.00515177f, 0.68565391f, 0.04478322f, 0.74595021f, 0.44720965f, 0.25587623f, 0.42443591f, 0.05974449f, 0.20046287f, 0.3034349f, 0.9062242f, 0.64120083f, 0.52238185f, 0.11133412f, 0.43655075f, 0.76620214f, 0.36598683f, 0.67400905f, 0.89241105f, 0.69407209f, 0.64427034f, 0.18430072f, 0.92961135f, 0.37992458f, 0.41103806f, 0.99307206f, 0.62659181f, 0.44814843f, 0.07694981f}),
                            .dimensions = {1, 1024},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, { // sample_count
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({128}),
                            .dimensions = {},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::INT32,
                            .zeroPoint = 0
                        }, { // seeds
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({37, 42}),
                            .dimensions = {2},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }, { // output
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<int32_t>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
                            .dimensions = {1, 128},
                            .isIgnored = true,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_INT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0, 1, 2},
                            .outputs = {3},
                            .type = TestOperationType::RANDOM_MULTINOMIAL
                        }},
                .outputIndexes = {3}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("random_multinomial", get_test_model());

}  // namespace generated_tests::random_multinomial
