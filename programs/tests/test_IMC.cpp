//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 1ba4c41588c1672490fe06451fb9be8a                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.0806563987712);
    msg.setSource(56224U);
    msg.setSourceEntity(126U);
    msg.setDestination(59116U);
    msg.setDestinationEntity(48U);
    msg.state = 190U;
    msg.flags = 102U;
    msg.description.assign("MTGXJXVUHRZQJWLLAWPJWKMXAEDXZJOQJYSMSKNERJYKODHIITABHTMABGQBUHHUPOCZTLHQVEHTQMNGVNXGGCIOVSJDWIKAFACGPRHCERRFTNZEFLIVUYLIWFVYKCFHYUIEYCSOXRNIGVDMRZMMESFESRJPLPDWBKCQDSKCBRXHZEZQDJPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.920783816172);
    msg.setSource(38223U);
    msg.setSourceEntity(20U);
    msg.setDestination(23573U);
    msg.setDestinationEntity(245U);
    msg.state = 229U;
    msg.flags = 170U;
    msg.description.assign("GZYEGMSSBJIOUIAUDPAKKHGFYYKBSFNTLZKTTQHORPSNCXRWTOTNFTVIRSBKRBUPGSBOGGJMQAMSIMPCLEFXZEIJACKNDCXJCFGYDRQJTAIZUTZUPJUOCZPPDCWHPWERAYERFODDJVHYTOXVVLHMQFYXPDRDSIWEOQDDWOEBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.672295426202);
    msg.setSource(54559U);
    msg.setSourceEntity(81U);
    msg.setDestination(39814U);
    msg.setDestinationEntity(85U);
    msg.state = 197U;
    msg.flags = 197U;
    msg.description.assign("APYRKJKQCDDLDETIYPFYRGLKFKOBCGVYZVBTNVFVXMYZZMWLUMEDNFTOBHHBCXRBEXNFHGIPUUWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.289210429993);
    msg.setSource(26289U);
    msg.setSourceEntity(46U);
    msg.setDestination(47529U);
    msg.setDestinationEntity(186U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.391912206667);
    msg.setSource(53453U);
    msg.setSourceEntity(56U);
    msg.setDestination(9065U);
    msg.setDestinationEntity(216U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.852552070576);
    msg.setSource(56912U);
    msg.setSourceEntity(76U);
    msg.setDestination(16924U);
    msg.setDestinationEntity(104U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.883498297243);
    msg.setSource(39705U);
    msg.setSourceEntity(198U);
    msg.setDestination(1787U);
    msg.setDestinationEntity(150U);
    msg.id = 216U;
    msg.label.assign("QFOKPFDNPJJKZHTMQMCJCCRHJVMMVGRIHUKFYVWAXTWEEPKQDWDJANUWEIFQTCNMJVQNXVHMCRLBGPPOPCJSCTKZPIYZOGBFZWWSDICGNFKL");
    msg.component.assign("HNFQGKDPYLLZVJCKPSXNOUICIVNCUIISKKUTZTLBBGEJXMVHHQYMDVLOUKZFGPJUOAZBUCXEEXOXFXNDTBIPCFYEIHVQKBFAPNCZSPWANUDMRNWHAQURHFLBXVLWLLYYJNYZJVPHEJGFVWCDOPOAYYIRAWTHOXQAGYJLGITWQGYKXTPRMRJONSATQRDIWNOJTGGWI");
    msg.act_time = 22167U;
    msg.deact_time = 27350U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.974711329543);
    msg.setSource(48581U);
    msg.setSourceEntity(189U);
    msg.setDestination(19632U);
    msg.setDestinationEntity(249U);
    msg.id = 62U;
    msg.label.assign("CFAYIQHFAGCXPYWLJYIVKCNTWEYAUMSHRYLQGINNNIKKDPAVHGLOPLDTZCSZZJYDDNFKYNNVWFBZTFGTXVLJZFVNTJODRAEBHUQLGZTMAMCYFHEPEZGZXSDHEKPWPOSKTXBPUVLTGHBQJEIPRBFMOZTDHCBEWUKHBMKMDQYOXZPJAJIWVURCCE");
    msg.component.assign("DWCZCQKYZBHWFPHAVUHDHBCPCDPRNICVRDIXQIEHYLUVBRGPFKJHTNBSIRLEHSGAXJOOPRMEWTKIFCEDJEQSSTGUBEJTTMVSGAJRZLGZLXUQZMOUARMKEMAAOVKPRFLLQEGBHLXCMZQTWFJRKUNBUFKDXNEYVNIYLUIPQLVPOTABAGZEYOPSXDDOKHGDFXFCYTYCQPGMZYTWDZNTRMHSILCWXAJINQ");
    msg.act_time = 21465U;
    msg.deact_time = 39427U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.090693039657);
    msg.setSource(43025U);
    msg.setSourceEntity(12U);
    msg.setDestination(3741U);
    msg.setDestinationEntity(217U);
    msg.id = 72U;
    msg.label.assign("IRGKTHCZKEFLSZRUFDPDHGYMZMDMGXMEFFIVBILOONYKJGVURUQJYUXHVTJNQLCQQKNPHKACGOVGCRPMVXXVOZSJYHIGWQJFEZLWWMEBULEPWHYDFFC");
    msg.component.assign("CXTFIAJSUTCMFZGNRHQEKSQYRLJEGFDANKRYUXMZWIJFIDOPUCPGWHKZWEDITXKC");
    msg.act_time = 45977U;
    msg.deact_time = 48389U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.504084323209);
    msg.setSource(22151U);
    msg.setSourceEntity(157U);
    msg.setDestination(59221U);
    msg.setDestinationEntity(219U);
    msg.id = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.206534903395);
    msg.setSource(47710U);
    msg.setSourceEntity(121U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(41U);
    msg.id = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.65562228192);
    msg.setSource(28200U);
    msg.setSourceEntity(145U);
    msg.setDestination(33207U);
    msg.setDestinationEntity(199U);
    msg.id = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.0870520521676);
    msg.setSource(53118U);
    msg.setSourceEntity(196U);
    msg.setDestination(13717U);
    msg.setDestinationEntity(17U);
    msg.op = 119U;
    msg.list.assign("ALGUEKREIIFYUCZXSSHGPPANAQTKFEXHKBMUJEJRFRLZVGPJRMGCDBQXBEQXNIJRKAZNUIXBUTOMSMRFVSAYKUOOLFKQGDZSWBJPLCWNCOLZAZOUPEGLOPMHIEPUDCLZAHSOARQDHQIDYTXCXYDKYZBCGGIMHWZVPWCCQJQZXRWYDKQHIKSWFEVTJGNMRTIMVNS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.385265098604);
    msg.setSource(63592U);
    msg.setSourceEntity(205U);
    msg.setDestination(31877U);
    msg.setDestinationEntity(136U);
    msg.op = 185U;
    msg.list.assign("OGTLXPKNCJMM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.170179688877);
    msg.setSource(49447U);
    msg.setSourceEntity(132U);
    msg.setDestination(52627U);
    msg.setDestinationEntity(126U);
    msg.op = 79U;
    msg.list.assign("OFXFRSVTQCVHSMED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.374966573411);
    msg.setSource(61816U);
    msg.setSourceEntity(18U);
    msg.setDestination(7566U);
    msg.setDestinationEntity(241U);
    msg.value = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.890028921509);
    msg.setSource(29514U);
    msg.setSourceEntity(116U);
    msg.setDestination(61675U);
    msg.setDestinationEntity(9U);
    msg.value = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.958621520659);
    msg.setSource(17026U);
    msg.setSourceEntity(67U);
    msg.setDestination(58975U);
    msg.setDestinationEntity(130U);
    msg.value = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.13513370697);
    msg.setSource(39646U);
    msg.setSourceEntity(77U);
    msg.setDestination(39850U);
    msg.setDestinationEntity(29U);
    msg.consumer.assign("WBDOAQKQIGSUOSWAWNBJQUPYJEBIKSGZHDGDMYVAESRNKHNJLGIQAFCXPKKNVWDIXPBVWTPYAFBIVXHNUSDIOCVTRVGVIWBHQRLDGLCMIZLLJUCRWHTERMRPQEOEAQFOMHKELBXZRTUXUGCZODYXPOLFTYPLCLITZVTNOFZKMCUWPKIOFNRTLOYEQRUMCMQWFYMSFNXGTZWHQCJEAJBBJJGCFFNYZVXXEHSGNSHZPRAVSMHPBMETJYKUK");
    msg.message_id = 48748U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.650742819314);
    msg.setSource(31739U);
    msg.setSourceEntity(94U);
    msg.setDestination(21425U);
    msg.setDestinationEntity(36U);
    msg.consumer.assign("WFYZGDDCVVDRDEXCCLSIFSANSEKHGWEUXAEPGWXAYPZTUGYWKVYRNMILKIUFAXQYOKLUMYHNNRFAQOALATSGQMZDTLVZCUCAIOLTPSOPJLVKKJJGPYHDBHWTGEIQHZLMKEUNLJDHKIUZQXPEWXENZFGMHRMLOMEBMHQSRXSJOYIFWWEGQBRJHNQPMOBZMKKDY");
    msg.message_id = 63314U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.651978079191);
    msg.setSource(27741U);
    msg.setSourceEntity(46U);
    msg.setDestination(46679U);
    msg.setDestinationEntity(9U);
    msg.consumer.assign("ZTKYMIFDHOGALOAQHSMRFQYFJCLDZKUHBBWFETKBXNFIRXGVXKKSXVSTRJEFAMEHSJLUGBJWKZAYXQQFNZCLPGZYCHYZJUEIANUCCAMBKXOISGPPRWAXFBMOMIRTPMBDIASZDMRNURGLFAQOCCTPHSPMOGBTEOLMDEAJ");
    msg.message_id = 14226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.292714793829);
    msg.setSource(53287U);
    msg.setSourceEntity(107U);
    msg.setDestination(31102U);
    msg.setDestinationEntity(137U);
    msg.type = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.327098329624);
    msg.setSource(39435U);
    msg.setSourceEntity(228U);
    msg.setDestination(11663U);
    msg.setDestinationEntity(94U);
    msg.type = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.991303897076);
    msg.setSource(57375U);
    msg.setSourceEntity(111U);
    msg.setDestination(37692U);
    msg.setDestinationEntity(28U);
    msg.type = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.604385410612);
    msg.setSource(41319U);
    msg.setSourceEntity(109U);
    msg.setDestination(15945U);
    msg.setDestinationEntity(201U);
    msg.op = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.773810337616);
    msg.setSource(64126U);
    msg.setSourceEntity(173U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(54U);
    msg.op = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.0354205637152);
    msg.setSource(31565U);
    msg.setSourceEntity(184U);
    msg.setDestination(33385U);
    msg.setDestinationEntity(242U);
    msg.op = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.099092296321);
    msg.setSource(10404U);
    msg.setSourceEntity(6U);
    msg.setDestination(3699U);
    msg.setDestinationEntity(217U);
    msg.total_steps = 68U;
    msg.step_number = 60U;
    msg.step.assign("KKNAJKXJOQYBQORTVKASNXMMLOFWNWKC");
    msg.flags = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.324316258027);
    msg.setSource(12235U);
    msg.setSourceEntity(189U);
    msg.setDestination(5337U);
    msg.setDestinationEntity(223U);
    msg.total_steps = 206U;
    msg.step_number = 46U;
    msg.step.assign("NJJNLMEZTSTDZGUKVQGUOYCBXWRETDLPYWIXITDCKYI");
    msg.flags = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.129848091061);
    msg.setSource(13387U);
    msg.setSourceEntity(0U);
    msg.setDestination(43332U);
    msg.setDestinationEntity(80U);
    msg.total_steps = 136U;
    msg.step_number = 193U;
    msg.step.assign("ENLSJDFEJTSTUKDGUCXYWBONZFQKQXBBFOUQOJHCLALWLBBFZMFFWYRKUNCYJOJGAXZYGICRCGMFFRPOAATVOBKTKENQTVMEKDKWDINQVXJVDHNWEPPCPFW");
    msg.flags = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.398863793583);
    msg.setSource(33901U);
    msg.setSourceEntity(166U);
    msg.setDestination(35605U);
    msg.setDestinationEntity(119U);
    msg.state = 108U;
    msg.error.assign("KKJISPSBPZLYRISRGJSXJIMKUYVAENTQBRPWYKUQEKCITVQHHJTUVAFMLJRVNXCDOHRMBYOYPPTDNJWTOEZCPSHAXCKQPJRUFFEWHSFAVMYOCUVJMHBJBHVZGVDTHKWAQDQBNIAWGQZMNDZGURFKEIRAWFNXBYPMIVGVSOQXGIMCTBUCJHHXLAKNLZYSGTZPFIQGZDCCDFEUODILLUGGWOXQSYAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.431577231029);
    msg.setSource(16579U);
    msg.setSourceEntity(78U);
    msg.setDestination(25189U);
    msg.setDestinationEntity(87U);
    msg.state = 62U;
    msg.error.assign("KCTICBYMRSRMWNDGHDHKEAWGWNWTGANSTQRHVERDXKXQUBKCQUBUTAOXYSJONMXWZEZQDUSOFGJSOAFUIIQQKCKLGTZTYGEBUYOIMFDJHPQMWWCIOPANTIEPJLEZBEERHXZALQLKWYABVGFZVSCANODCYRHVOZYHSRJWZJVAGSGOTXLZPJKXVBQMDIMSNNOIDHFJCQTAJFWLUIPYKYSMFDPRHPLHVPYEINVP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.312055266262);
    msg.setSource(48190U);
    msg.setSourceEntity(94U);
    msg.setDestination(6489U);
    msg.setDestinationEntity(65U);
    msg.state = 206U;
    msg.error.assign("YIUWDXFZCOIBQFKJOCQLLIPYUFGPPZOFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.679085389358);
    msg.setSource(19526U);
    msg.setSourceEntity(176U);
    msg.setDestination(15868U);
    msg.setDestinationEntity(177U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.634660665983);
    msg.setSource(9158U);
    msg.setSourceEntity(24U);
    msg.setDestination(59488U);
    msg.setDestinationEntity(199U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.166125003355);
    msg.setSource(24855U);
    msg.setSourceEntity(246U);
    msg.setDestination(31717U);
    msg.setDestinationEntity(101U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.109560498271);
    msg.setSource(57926U);
    msg.setSourceEntity(4U);
    msg.setDestination(34949U);
    msg.setDestinationEntity(82U);
    msg.op = 62U;
    msg.speed_min = 0.72262866411;
    msg.speed_max = 0.202385808457;
    msg.long_accel = 0.935527846041;
    msg.alt_max_msl = 0.497577470831;
    msg.dive_fraction_max = 0.567538704152;
    msg.climb_fraction_max = 0.560252416566;
    msg.bank_max = 0.502112927216;
    msg.p_max = 0.0575874344046;
    msg.pitch_min = 0.957556151048;
    msg.pitch_max = 0.951758013979;
    msg.q_max = 0.750549377778;
    msg.g_min = 0.728310574251;
    msg.g_max = 0.780974717948;
    msg.g_lat_max = 0.87154292913;
    msg.rpm_min = 0.907459982944;
    msg.rpm_max = 0.173862519224;
    msg.rpm_rate_max = 0.482621352036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.239678219667);
    msg.setSource(46005U);
    msg.setSourceEntity(245U);
    msg.setDestination(41500U);
    msg.setDestinationEntity(172U);
    msg.op = 177U;
    msg.speed_min = 0.976159129687;
    msg.speed_max = 0.0824441932008;
    msg.long_accel = 0.492872524493;
    msg.alt_max_msl = 0.91597459797;
    msg.dive_fraction_max = 0.522570984745;
    msg.climb_fraction_max = 0.811599753678;
    msg.bank_max = 0.368788397867;
    msg.p_max = 0.864971362426;
    msg.pitch_min = 0.499148062938;
    msg.pitch_max = 0.0734505142104;
    msg.q_max = 0.678139412233;
    msg.g_min = 0.0674926319789;
    msg.g_max = 0.903255480408;
    msg.g_lat_max = 0.569422133077;
    msg.rpm_min = 0.373072406988;
    msg.rpm_max = 0.894316862282;
    msg.rpm_rate_max = 0.0971931302735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.516211954175);
    msg.setSource(58338U);
    msg.setSourceEntity(63U);
    msg.setDestination(57180U);
    msg.setDestinationEntity(207U);
    msg.op = 109U;
    msg.speed_min = 0.0545067168157;
    msg.speed_max = 0.879901224053;
    msg.long_accel = 0.687194749337;
    msg.alt_max_msl = 0.442988010554;
    msg.dive_fraction_max = 0.833739434536;
    msg.climb_fraction_max = 0.810446940291;
    msg.bank_max = 0.96918424343;
    msg.p_max = 0.044563528888;
    msg.pitch_min = 0.338414085022;
    msg.pitch_max = 0.683237755007;
    msg.q_max = 0.701162314142;
    msg.g_min = 0.985057117497;
    msg.g_max = 0.809138503256;
    msg.g_lat_max = 0.875362539176;
    msg.rpm_min = 0.552856534902;
    msg.rpm_max = 0.915398847538;
    msg.rpm_rate_max = 0.581160132956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.0318661575162);
    msg.setSource(1524U);
    msg.setSourceEntity(81U);
    msg.setDestination(40052U);
    msg.setDestinationEntity(56U);
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.286380326946;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.760218858685);
    msg.setSource(8884U);
    msg.setSourceEntity(44U);
    msg.setDestination(21457U);
    msg.setDestinationEntity(121U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.169010706218);
    msg.setSource(18933U);
    msg.setSourceEntity(3U);
    msg.setDestination(4022U);
    msg.setDestinationEntity(197U);
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("GXNDBPQKSIQEEMYLSHLVHSGRKZCECJSQTXACTQYOBAWYDTWKDMOZWNTMJZGARWCWXEDRLHEPLVDQUTAMLFUIFBOKMGFIGTNKZVNWDUNCAZHRLJYZAXGFFIVRM");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.979994466119);
    msg.setSource(11028U);
    msg.setSourceEntity(130U);
    msg.setDestination(62405U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.723368114791;
    msg.lon = 0.3966256434;
    msg.height = 0.955725235972;
    msg.x = 0.191107607402;
    msg.y = 0.416867624872;
    msg.z = 0.146318023889;
    msg.phi = 0.0498082328941;
    msg.theta = 0.551330032877;
    msg.psi = 0.586670367196;
    msg.u = 0.212928509246;
    msg.v = 0.617814049753;
    msg.w = 0.196102764133;
    msg.p = 0.87969498584;
    msg.q = 0.314676521873;
    msg.r = 0.166660997146;
    msg.svx = 0.625055098413;
    msg.svy = 0.0479426669309;
    msg.svz = 0.0790469456684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.988004687636);
    msg.setSource(39239U);
    msg.setSourceEntity(47U);
    msg.setDestination(8781U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.353876144808;
    msg.lon = 0.012195651537;
    msg.height = 0.517556224151;
    msg.x = 0.595661913901;
    msg.y = 0.887638688661;
    msg.z = 0.954925030912;
    msg.phi = 0.162195485171;
    msg.theta = 0.71687646783;
    msg.psi = 0.384234893314;
    msg.u = 0.754638147738;
    msg.v = 0.543774984055;
    msg.w = 0.723774961322;
    msg.p = 0.203285318398;
    msg.q = 0.404396087854;
    msg.r = 0.0568045416258;
    msg.svx = 0.699267197728;
    msg.svy = 0.284129766489;
    msg.svz = 0.465655664202;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.631392987829);
    msg.setSource(29376U);
    msg.setSourceEntity(62U);
    msg.setDestination(423U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.453291620461;
    msg.lon = 0.255534185388;
    msg.height = 0.236599398823;
    msg.x = 0.675752007238;
    msg.y = 0.237494688678;
    msg.z = 0.613849568622;
    msg.phi = 0.154093744643;
    msg.theta = 0.489687065598;
    msg.psi = 0.133010106069;
    msg.u = 0.00455874854522;
    msg.v = 0.898444483764;
    msg.w = 0.974513466807;
    msg.p = 0.896765018235;
    msg.q = 0.999431189887;
    msg.r = 0.239260071078;
    msg.svx = 0.00808148060856;
    msg.svy = 0.301832446066;
    msg.svz = 0.92600283932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.0714802330712);
    msg.setSource(28436U);
    msg.setSourceEntity(213U);
    msg.setDestination(15969U);
    msg.setDestinationEntity(230U);
    msg.op = 168U;
    msg.entities.assign("CIPEVDZHXYNAZRQKXTLXZHHQKDTWYTBWUGPDWQQXUCBHRAJKKYLAERZNMIFGJJIKCQFJJSUULRDVYKQGFVBCOZSKBJWKNDLGSXPEESFATVLWGTPOOHUCZUCMLSJCMPDFRFAFFDTRQJYZLGRCZPHOHWNXMIEHZIEMEGBODVMHAGWZIONMVWVUYURWLWBMSAKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.801236241084);
    msg.setSource(12366U);
    msg.setSourceEntity(170U);
    msg.setDestination(26912U);
    msg.setDestinationEntity(97U);
    msg.op = 45U;
    msg.entities.assign("SGSIDIJJJVHKXMWWPFHIPTRTHVOAYRTKVXBCSZJWNFCYLJGIEWDTPBRXTWLQHWSACRAUZUGBUCMFAATJNHGCTEJHTPVMDGFYPDOVQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.528972800163);
    msg.setSource(51303U);
    msg.setSourceEntity(122U);
    msg.setDestination(45895U);
    msg.setDestinationEntity(51U);
    msg.op = 73U;
    msg.entities.assign("LMXKVFFEGSXNSEBTFMXVKRLEJTWOSYJZYNSURITWZFSPBATUAERGMWRPXKDEEIQGKJIOHYRROLTCELWWCTVZCCYABVADJVQDKXCLMGLDQIBXMZGPOAAKMOWBLTAZGZHRGFMOQVJNBBQMBVKSONNQMDEQYPNUHZPXSZUYDWATUCDXKPCUYRJVFZNVWUHFJQOBUDZHYIBYWJSHWQMNGCAOGCFRDPHAFNEOCLDVIXSPJJLIHHISXKPRI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.550222917025);
    msg.setSource(1247U);
    msg.setSourceEntity(143U);
    msg.setDestination(40984U);
    msg.setDestinationEntity(2U);
    msg.type = 2U;
    msg.speed = 32903U;
    const char tmp_msg_0[] = {81, -11, 119, 112, -93, -63, 29, -103, -94, 52, 36, -20, 60, 32, 89, 103, -86, -14, -115, 49, -10, 91, -124, -45, 86, -119, -65, 35, -83, 26, -26, 109, 77, -94, 22, -2, 23, 120, 56, -122, 101, -1, 70, -95, -30, -16, -52, -31, -98, -19, -79, 96, 49, -54, 100, -54, 50, -53, 20, -21, -1, 28, 35, -113, -59, 26, 21, 86, -57, -77, -36, -89, -104, 47, -123, -14, -53, -17, 61, -80, -31, 126, 63, 78, -39, 71, 39, 98, 105, -34, 36, 55, -117, 24, -97, -93, -19, 122, 0, -128, -38, -23, -32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.759396269054);
    msg.setSource(52386U);
    msg.setSourceEntity(86U);
    msg.setDestination(26262U);
    msg.setDestinationEntity(145U);
    msg.type = 65U;
    msg.speed = 4250U;
    const char tmp_msg_0[] = {-118, 29, 19, -9, -63, -80, 114, 126, 69, 95, -68, 109, -122, -53, -38, 47, -13, -30, -51, 53, 23, 82, 107, 53, 5, -42, -92, 94, 105, 36, -104, 50, -6, -72, -39, 70, 106, 38, -69, -36, 29, -16, 13, -73, 107, 82, -59, -114, 102, 63, 0, 21, -124, -64, -20, 73, -95, -47, -92, 11, -14, 0, 119, 33, -78, 73, 35, 54, 5, -31, 14, -28, 120, -10, -36, -17, -118, 89, 111, -61, -128, 12, 86, 79, 24, 86, -42, 89, 40, -31, -94, -63, -26, 64, 100, 82, 51, 56, -117, -78, -48, -52, 41, 30, -11, 21, -40, 80, -41, -111, 57, 56, -91, -25, -21, -19, -64, 80, 47, -4, 81, -98, 82, 87, 75, 115, -65, 38, 43, -57, -113, -40, -54, 82, -111, -66, 58, 119, -12, 8, -104, -115, -83, -60, 54, 57, 20, -99, 2, -47, 66, 84, 63, -85, 41, 86, -55, -32, 48, -7, -84, 58, -55, -109, -105, -122, 101, 20, -39, 40, -1, 74, 101, 97, -118, -3, 93, 79, -83, 24, -17, -125, 3, -87, 1, 14, 113, 38, 47, -47, 25, -107, -105, -119, 83, -3, -109, 93, 18, -11, 16, 50, 31, -52};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.607898985454);
    msg.setSource(56265U);
    msg.setSourceEntity(11U);
    msg.setDestination(51909U);
    msg.setDestinationEntity(29U);
    msg.type = 17U;
    msg.speed = 13452U;
    const char tmp_msg_0[] = {43, -88, 12, 32, 7, -58, -97, 112, -90, 55, -106, 18, 67, -92, 49, 39, -92, -117, 9, -120, 49, -114, 49, -100, -18, 122, 98, -95, 73, -34, -74, 65, 78, -89, -109, 126, 84, 85, -20, 55, 30, -100, 123, -95, -120, -22, -123, -121, -30, -49, -109, 64, -94, -25, 24, -63, 105, -79, 38, -21, -106, 64, 6, -60, 33, -113, -121, -57, 27, 51, -118, -57, 63, 60, 94, 3, 80, -75, -6, -16, 23, 96, 85, -127, -72, 67, -108, -88, 105, -92, 122, 22, 34, -128, -113, 2, -85, -102, -33, -17, 86, -123, -85, -104, -26, 92, 4, 57, -1, 117, 36, 38, 39, -13, -74, 79, 126, -7, -68, -43, 121, 122, 109, -84, -27, 50, 115, -46, -127, 102, 51, -30, -116, -76, -24, -5, 113, -1, -60, -43, 9, 76, 26, -13, 62, -38, 36, 41, 2, 76, -95, 41, 79, -123, 90, -112, -21, -89, 86, 91, 76, -8, -42, 13, -37, -49, -31, -62, 126, -90, 117, -54, -28, -97, 35, -40, -1, 24, -122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.281414459229);
    msg.setSource(52989U);
    msg.setSourceEntity(4U);
    msg.setDestination(29364U);
    msg.setDestinationEntity(68U);
    msg.op = 83U;
    msg.tas2acc_pgain = 0.654933826163;
    msg.bank2p_pgain = 0.930630612936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.922370366204);
    msg.setSource(4770U);
    msg.setSourceEntity(9U);
    msg.setDestination(43279U);
    msg.setDestinationEntity(225U);
    msg.op = 28U;
    msg.tas2acc_pgain = 0.77829629863;
    msg.bank2p_pgain = 0.532221371111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.313659822637);
    msg.setSource(62143U);
    msg.setSourceEntity(13U);
    msg.setDestination(58790U);
    msg.setDestinationEntity(202U);
    msg.op = 202U;
    msg.tas2acc_pgain = 0.243479226806;
    msg.bank2p_pgain = 0.947693556144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.138275562592);
    msg.setSource(9495U);
    msg.setSourceEntity(224U);
    msg.setDestination(64867U);
    msg.setDestinationEntity(238U);
    msg.available = 2015608368U;
    msg.value = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.0248264340959);
    msg.setSource(13701U);
    msg.setSourceEntity(82U);
    msg.setDestination(7951U);
    msg.setDestinationEntity(123U);
    msg.available = 516377644U;
    msg.value = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.684213377101);
    msg.setSource(30422U);
    msg.setSourceEntity(160U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(128U);
    msg.available = 3602734918U;
    msg.value = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.753576851393);
    msg.setSource(7976U);
    msg.setSourceEntity(2U);
    msg.setDestination(34596U);
    msg.setDestinationEntity(97U);
    msg.op = 173U;
    msg.snapshot.assign("WPYBEBGSBDXSNEUIYWHQIEGCLEIUPLYUJNGMPCIXAWNHICDJPGQZSCKAAZNYZGAVXDTQEFSTCJNSQUXCUWJKMADJORHWVFXYGRVVYFZIWCYCKQZKVLXUPHXRITRFTRTKSOPOBAFBOFHZMGVHWSMPNLDSHIHQQGNDZMCBEYRFDTLGQVOBADKKUASJBTTXEPVRMBEHLYNVUVOZJREDXZFFLMRTHOPULTECQJLIWIZFYAWJROPSKKM");
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {-119, -26, -72, -111, 4, 2, 9, 97, 121, -128, 34, 7, 8, 19, -16, -14, 12, 67, 46, -122, 79, -56, -13, -97, 73, -75, 40, 61, -71, 38, -24, 79, -13, -19, -86, 75, -111, 32, -117, -6, 68, -11, -50, -88, -35, -84, 46, -29, -114, -36, -85, -20, -54, 4, 45, -102, 124, -100, 83, 45, -38, 111, 4, -105, 99, 79, 11, -102, -58, 72, -110, -75, -115, 89, 114, 46, -84, 67, -24, -58, 26, -128, -13, -68, -62, 63, 76, 48, -8, -114, 28, -49, 57, -97, -109, 50, 85, -56, -63, -121, -116, -98, 19, 24, 44, 87, -42, 3, 99, -123, -54, 99, 1, 15, -24, 63, 46, 75, 88, -31, -114, -44, 105, -107, -126, 94, -77, -119, -109, -76, -37, -49, 8, -97, 39, 24, -66, 115, -23, -54, 7, -127, 88, 16, -102, -8, -58, 97, 47, -40, -79, 70};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.844072696211);
    msg.setSource(4719U);
    msg.setSourceEntity(132U);
    msg.setDestination(41104U);
    msg.setDestinationEntity(112U);
    msg.op = 247U;
    msg.snapshot.assign("GFLWIXHXXUFUEJIRNKSYMYYHRGRXPNITEMZCEVISJSHIZWXMCANMYIKENPQBRGTZCAOBOPOLEEZHKSWASDFARHEDBBSSQJYKCUWXMTVYZNLPLKUJVTHLCHBCTWRZAFYMRODIECRFBZLNBLQTJRTLUQUWVWOZUCGWPHMNLGUOFPQHWXMBKKTGAFYISNTDDOQDVKVAOWOXMCPMKSDIODENYHFNAFSQXGDPFKJUBPPAAXDUZGQ");
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.974665962741;
    tmp_msg_0.phi = 0.703669124201;
    tmp_msg_0.theta = 0.575867426424;
    tmp_msg_0.psi = 0.0864623448399;
    tmp_msg_0.psi_magnetic = 0.0719170044562;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.425390415879);
    msg.setSource(8175U);
    msg.setSourceEntity(173U);
    msg.setDestination(18567U);
    msg.setDestinationEntity(196U);
    msg.op = 188U;
    msg.snapshot.assign("SLXRZKNKRMUVNXUTQAUBGDESMYDLAPKMLXBUKQWPGWXMHGJCOVRVRRUQWDPYYFNJEZQGBHIZCEANKFRISHUQPGBTAAKAMVROCSPWXLCEGJQZTSDJSYKZTJJFYFTTNDZXHTUJWBADGSOLCLCSVZOWEWPFWJNFEFCMYFPQTPIBXVVYYNOKIMIBSVNEDRAIANYHHXLPHWBQTQHIXOMPEFN");
    IMC::ImageTracking tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.23787089505);
    msg.setSource(30474U);
    msg.setSourceEntity(177U);
    msg.setDestination(41680U);
    msg.setDestinationEntity(25U);
    msg.op = 173U;
    msg.name.assign("OUQRIEFNWLLRUADNCGSPVJXXRBQXZFVDVRHXPNZLZIXCJVYHGGCQGYCECAPZXITGSARAKVRKDJSGKEEOWOLDMTFDXYUTVJUESJCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.52505251267);
    msg.setSource(13707U);
    msg.setSourceEntity(143U);
    msg.setDestination(14742U);
    msg.setDestinationEntity(222U);
    msg.op = 102U;
    msg.name.assign("JLQRAQWOYSTVAANDFENWIEJIGHNZQSTFXSGUNEQFMDDREZHULXVZPXMQTJWBHQEXCGHQBLYJBCZTXDWCAVJVPSGLADZYLYHSPETCTIEEMAPJYWKBIWPUYKPIFVHAGYIMVIXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.904046395841);
    msg.setSource(55952U);
    msg.setSourceEntity(210U);
    msg.setDestination(41877U);
    msg.setDestinationEntity(18U);
    msg.op = 171U;
    msg.name.assign("QDBSUCTZKTPRLFQXOMGMVLVYINODUQHJSDJYILCJLIXFNZBYICEDBRTSWGVEOTDYPBGHBUGNBQGWCWHVMAMILNJUXEPOWWUSYUAEHHPYSXJFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.324115431007);
    msg.setSource(60424U);
    msg.setSourceEntity(19U);
    msg.setDestination(11983U);
    msg.setDestinationEntity(146U);
    msg.type = 1U;
    msg.htime = 0.633665783764;
    msg.context.assign("YFCNXJYZXKRISCTZUTBWLXMQVLWKJJVVGAETUBUROCEHXNELKAFERXEKWPPIHNXZGTQKB");
    msg.text.assign("NNWCHGJDGRMUFLLUTJJBDSEVGQYKQLBRQZZWNQEPSOVKYCJUDIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.905331698425);
    msg.setSource(40920U);
    msg.setSourceEntity(186U);
    msg.setDestination(43574U);
    msg.setDestinationEntity(243U);
    msg.type = 143U;
    msg.htime = 0.650190503441;
    msg.context.assign("ROXZPXAIJTHLINSNSXLDYCROKFIRFMQTEQD");
    msg.text.assign("ZTSPHZSPWPAQTPEBPBEQOKXQROBEJSWQUOTPVGQRIEFTJFYUBHDAWCRRJYIXBZMNKXALOBFMGRIBUWLZOMSSRURXHNUFJNHQWVCCYXHXOUHKV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.824018411432);
    msg.setSource(58753U);
    msg.setSourceEntity(57U);
    msg.setDestination(16053U);
    msg.setDestinationEntity(59U);
    msg.type = 56U;
    msg.htime = 0.62649752422;
    msg.context.assign("IWGFXJAEDSSCZHRNPHFOJOWQVTEBUHKLZGJDQBVMABDZQHALGKBFMSGRDLWUYXPJQYGTYAWZMLAIKZIOEIURLPBHQKYETFCRPFMLVEQNXXOAVUXCJTLCFYPOMWXJRWGVTOYMVXIYQUKBCKOUHGWTKLXSAGCQVNZPRJNEKPNFDEEIFEWNKFARBCUZO");
    msg.text.assign("ATCWPZMGJYPTRHCBVZXJTRGSLPTLJQHRIOYLHFARWKZDWLPJKXQBTJPTMXOVQESYNGQOSNXLMFERUGHHBVIZONIRGFJNKZFAPGXCIHYFKUWSZPLREV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.446299431597);
    msg.setSource(46122U);
    msg.setSourceEntity(249U);
    msg.setDestination(2945U);
    msg.setDestinationEntity(218U);
    msg.command = 219U;
    msg.htime = 0.422446129233;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 4U;
    tmp_msg_0.htime = 0.403280509393;
    tmp_msg_0.context.assign("KXXEESLNFOSOTCKDZVPGGAPXVXGYJFOKZROPBGMI");
    tmp_msg_0.text.assign("YNYIRCYDULWPYBMFQGFDVEQBQJZPIVEAPUTGLWNKFSWVDBYACUROPEABHBXOLVEGHFZYEHGUHCFMEGRLFSBZRZJHFWJTWQDQWLLRMKMTBYSSWLPSZMJOEIUQUJCUJPCCKUVRCTFXJEPDJIYOHWGSITUCRWZBOMXFJHZTNQXIRYGVOEDASMZHXSKOQNXMGAAAVWKPNNVKZZBAAOOMLIF");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.740713631608);
    msg.setSource(34353U);
    msg.setSourceEntity(126U);
    msg.setDestination(33292U);
    msg.setDestinationEntity(84U);
    msg.command = 169U;
    msg.htime = 0.820876115715;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 117U;
    tmp_msg_0.htime = 0.991521945991;
    tmp_msg_0.context.assign("ULXKAVYLQPCJVFXXMEMHZTNKPHJJSCADOPCJIIYBNKREUQZKLNWYRZBDQMUACEKJBHTSGRUGXUHGRWFZQBAAVQQEWFGLTCITIJPFZQRTGLGSARMUEWDQONVIOTGGRBUODMJBUFWYVLKJIYKXBJXHZFLWCPNKMZTOYWWFSDXQDMGMNBOXPJZXAPKIDRHVHDASVF");
    tmp_msg_0.text.assign("KWAXTYXDTTYJBSQVQHLLIDNAFUTDIRNRYKUNGGTKXLUBMOKSRCPOYYVEBBZBSLXMQVXGHAYHVMRZDDMLIUEUHDWPQDNVQAWXGFAEJFZFRPPHHJOSXHMMKEOC");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.346567356052);
    msg.setSource(65333U);
    msg.setSourceEntity(215U);
    msg.setDestination(65075U);
    msg.setDestinationEntity(109U);
    msg.command = 148U;
    msg.htime = 0.950273295551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.453981356167);
    msg.setSource(21350U);
    msg.setSourceEntity(54U);
    msg.setDestination(57277U);
    msg.setDestinationEntity(117U);
    msg.op = 152U;
    msg.file.assign("FMNZMZBETVSMBVGOLDJHNSIFKPWAYKBUASOXBLPZIDWDOGTPANEIPNITYGUYHHHTNPCNEDTGGVVFNDMQFUXSOJRSOZIMEJDTPCEGDCFFJRPYJLHQUPZKBGEXMUJRIABDTHRIWXDAOBCGKTYFCKUKWEJCVOAGKLKXMCJBBNQHWFXOYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.880191870778);
    msg.setSource(64119U);
    msg.setSourceEntity(68U);
    msg.setDestination(58830U);
    msg.setDestinationEntity(191U);
    msg.op = 52U;
    msg.file.assign("VFYEOTLDLMKHZBWQUEUCGVLEXSDONNKGPANPZRLBTUBOYUWWKIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.0010930969725);
    msg.setSource(43033U);
    msg.setSourceEntity(94U);
    msg.setDestination(53925U);
    msg.setDestinationEntity(188U);
    msg.op = 182U;
    msg.file.assign("HJXLONIPVKVQDWMJDVTQUNSXEZLITGWUEWSOZSKCLPNCVVOVTLZTQVBOQXXZXRFPRENSOKUFGYKWYHHGSRDBGUYWRNFJYKDQPZESORPEMJNNEVRPUDYAAWXTENQUKMBRZCVDTWNAYQHOHMXLBUKGCSJACRLUUIIZRQJLXYIBMAGHPMJJACIAAICTCZYHEQDRGMKVPLGIBOEAZSWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.154805110496);
    msg.setSource(42675U);
    msg.setSourceEntity(202U);
    msg.setDestination(15123U);
    msg.setDestinationEntity(27U);
    msg.op = 117U;
    msg.clock = 0.262632349631;
    msg.tz = -120;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.527134819004);
    msg.setSource(42666U);
    msg.setSourceEntity(254U);
    msg.setDestination(50004U);
    msg.setDestinationEntity(82U);
    msg.op = 3U;
    msg.clock = 0.917197248285;
    msg.tz = 31;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.702655811248);
    msg.setSource(1709U);
    msg.setSourceEntity(215U);
    msg.setDestination(31402U);
    msg.setDestinationEntity(13U);
    msg.op = 91U;
    msg.clock = 0.225656779813;
    msg.tz = 74;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.416959106952);
    msg.setSource(3675U);
    msg.setSourceEntity(238U);
    msg.setDestination(44827U);
    msg.setDestinationEntity(147U);
    msg.conductivity = 0.795475585105;
    msg.temperature = 0.500597047307;
    msg.depth = 0.0185206868471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.0910343679783);
    msg.setSource(13657U);
    msg.setSourceEntity(252U);
    msg.setDestination(16351U);
    msg.setDestinationEntity(162U);
    msg.conductivity = 0.111190972719;
    msg.temperature = 0.884246765922;
    msg.depth = 0.198184735738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.0330925777399);
    msg.setSource(17917U);
    msg.setSourceEntity(220U);
    msg.setDestination(61631U);
    msg.setDestinationEntity(201U);
    msg.conductivity = 0.555811967436;
    msg.temperature = 0.0273244733099;
    msg.depth = 0.0348251644383;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.0552788247363);
    msg.setSource(17087U);
    msg.setSourceEntity(219U);
    msg.setDestination(55721U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.231646630429;
    msg.roll = 52141U;
    msg.pitch = 43581U;
    msg.yaw = 25232U;
    msg.speed = 30470;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.253287157338);
    msg.setSource(20037U);
    msg.setSourceEntity(126U);
    msg.setDestination(59550U);
    msg.setDestinationEntity(116U);
    msg.altitude = 0.797822796226;
    msg.roll = 26946U;
    msg.pitch = 37233U;
    msg.yaw = 1244U;
    msg.speed = -8511;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.13929297242);
    msg.setSource(10072U);
    msg.setSourceEntity(170U);
    msg.setDestination(56601U);
    msg.setDestinationEntity(166U);
    msg.altitude = 0.734768662161;
    msg.roll = 27006U;
    msg.pitch = 44396U;
    msg.yaw = 42630U;
    msg.speed = 346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.90053698257);
    msg.setSource(23287U);
    msg.setSourceEntity(15U);
    msg.setDestination(5074U);
    msg.setDestinationEntity(5U);
    msg.altitude = 0.745635975051;
    msg.width = 0.121329175673;
    msg.length = 0.663996553801;
    msg.bearing = 0.0827408980115;
    msg.pxl = 6710;
    msg.encoding = 187U;
    const char tmp_msg_0[] = {-58, -3, 42, 44, 95, -123, 27, -96, -120, -76, 102, -125, -62, 9, 125, -8, -97, 110, -89, 32, -52, -17, -43, -57, 63, 22, -67, 125, 49, -103, 65, -18, -66, 81, 64, 69, 43, 86, 116, 126, 62, -98, -12, -76, -93, 125, 5, -16, 109, -121, 49, 33, 58, -42, -41, 37, -32, 7, 31, 99, -25, 53, -126, -64};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.741295966166);
    msg.setSource(22978U);
    msg.setSourceEntity(121U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(182U);
    msg.altitude = 0.140650901008;
    msg.width = 0.752396458754;
    msg.length = 0.171924471406;
    msg.bearing = 0.421794962786;
    msg.pxl = -27314;
    msg.encoding = 81U;
    const char tmp_msg_0[] = {-36, 57, -1, 90, 3, -76, 65, -10, 3, -92, 98, 17, -114, -34, -87, 67, -99, -11, 16, 120, -78, -75, -32, -93, -61, -55, 11, 60, 17, 45, 14, 21, 17, 49, 81, -46, -4, -45};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.808622476116);
    msg.setSource(33287U);
    msg.setSourceEntity(193U);
    msg.setDestination(16590U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.560126575056;
    msg.width = 0.142486862211;
    msg.length = 0.0216446218534;
    msg.bearing = 0.851273450183;
    msg.pxl = 7045;
    msg.encoding = 27U;
    const char tmp_msg_0[] = {14, 38, 120, 115, -107, 4, -93, 1, 26, 12, -75, -54, -97, 24, -16, 116, 62, -104, 31, 37, -13, 85, -57, 62, 105, -82, 89, -47, -78, 2, 2, -34, 68, 92, 114, -26, 53, -74, 36, -63, 121, -12, -107, 76, -2, 27, -34, 36, -57, 63, -7, -82, 19, -104, -70, 89, 53, 9, 28, -51, -25, 114, 76, 9, -107, -60, 43, -111, 26, -12, -102, -29, -1, -62, 82, 76, -94, -121, 43, 89, 109, -58, -9, -83, 99, -106, 65, -42, -12, -43, -51, -96, -40, -27, 59, -57, 48, 70, -75, 0, 116, 70, -72, -8, 105, 84, -34, 111, -119, -97, -85, -86, 61, 82, 4, -18, 94, -29, -27, 73, 124, -13, 91, -67, -41, -60, 123, -62, -71, -113, -77, -112, 124, -16, -18, 100, -7, 82, -87, -102, 106, -65, 67, -64, 74, 82, 77, 1, -43, -114, 75, -101, -105, -9};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.65478916055);
    msg.setSource(22040U);
    msg.setSourceEntity(7U);
    msg.setDestination(60023U);
    msg.setDestinationEntity(50U);
    msg.text.assign("XRKLEIZDJYYYEAIMPTOVAPRQDUPMVTNFWGUZYXTWGOMWKEECKWUXFBVAOSOQVHNWKFGRR");
    msg.type = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.0036018383092);
    msg.setSource(42795U);
    msg.setSourceEntity(176U);
    msg.setDestination(20301U);
    msg.setDestinationEntity(203U);
    msg.text.assign("ZXGRSMHYDFOLGMESXSEJ");
    msg.type = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.118481687243);
    msg.setSource(31226U);
    msg.setSourceEntity(177U);
    msg.setDestination(45954U);
    msg.setDestinationEntity(207U);
    msg.text.assign("ULIPXCXPZLRORNREJBHMURQSIRYEUJAADYQKVIYOCIIZMEMARNPUMSWHIQYYNNKJDQDHVCKRAUAEZHQMBCXUFWSLFOXKWXZBQRDLSIWBVNFANAGVVOQTJGZWZPTPJADSWZHCTQLFSYFQKTELVXFHMBHEVQYLBJFRGCEUGPBOIOGMFPNBBMTACYTDSJCKTHULSPYKUVAPIBWWJ");
    msg.type = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.663792140821);
    msg.setSource(10569U);
    msg.setSourceEntity(216U);
    msg.setDestination(32504U);
    msg.setDestinationEntity(139U);
    msg.parameter = 250U;
    msg.numsamples = 209U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 16913U;
    tmp_msg_0.avg = 0.81001937362;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.166368015009;
    msg.lon = 0.481317791038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.881948966486);
    msg.setSource(38299U);
    msg.setSourceEntity(17U);
    msg.setDestination(16577U);
    msg.setDestinationEntity(0U);
    msg.parameter = 127U;
    msg.numsamples = 224U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 64606U;
    tmp_msg_0.avg = 0.270613440498;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.75093624513;
    msg.lon = 0.168972350352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.678695633266);
    msg.setSource(31279U);
    msg.setSourceEntity(179U);
    msg.setDestination(2414U);
    msg.setDestinationEntity(57U);
    msg.parameter = 159U;
    msg.numsamples = 149U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 13032U;
    tmp_msg_0.avg = 0.874064045707;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.775276819332;
    msg.lon = 0.679311119213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.932155986277);
    msg.setSource(43517U);
    msg.setSourceEntity(229U);
    msg.setDestination(57305U);
    msg.setDestinationEntity(213U);
    msg.depth = 47470U;
    msg.avg = 0.251325377739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.615810479033);
    msg.setSource(60129U);
    msg.setSourceEntity(0U);
    msg.setDestination(46681U);
    msg.setDestinationEntity(30U);
    msg.depth = 56300U;
    msg.avg = 0.0955842205313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.0254575955404);
    msg.setSource(28236U);
    msg.setSourceEntity(54U);
    msg.setDestination(4361U);
    msg.setDestinationEntity(165U);
    msg.depth = 42159U;
    msg.avg = 0.121943114831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.276888274171);
    msg.setSource(11426U);
    msg.setSourceEntity(26U);
    msg.setDestination(56696U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.277083087611);
    msg.setSource(64523U);
    msg.setSourceEntity(47U);
    msg.setDestination(29780U);
    msg.setDestinationEntity(58U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.906253849025);
    msg.setSource(36065U);
    msg.setSourceEntity(89U);
    msg.setDestination(38496U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.843417791753);
    msg.setSource(21325U);
    msg.setSourceEntity(31U);
    msg.setDestination(51043U);
    msg.setDestinationEntity(123U);
    msg.sys_name.assign("WZBQGEHWVTKGBOQCWCEKXSJEDPXLMSYKRJOMBDYYZZIIYCG");
    msg.sys_type = 33U;
    msg.owner = 28884U;
    msg.lat = 0.457330974824;
    msg.lon = 0.0632037328874;
    msg.height = 0.577640305229;
    msg.services.assign("YXXORWJBCPJIKTVFWKQLATHFDSMXWAZVARIAHWIQEUPVDASBGMYZMPDUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.759765781458);
    msg.setSource(64315U);
    msg.setSourceEntity(210U);
    msg.setDestination(46665U);
    msg.setDestinationEntity(31U);
    msg.sys_name.assign("HRLYWBJKDNLHRRBLVBXCGJTOSNIUZWNISGAEGMUAMVXGMEJGXKGWMPMZQSJFASTULJCWRCYRAVUDQFOQNCSZGHSPQNUSWUCWVRWXATZKGDWYRBXRAEMDUPQJYBUQOFIFVIQTXDRCHZENS");
    msg.sys_type = 78U;
    msg.owner = 60528U;
    msg.lat = 0.806476196814;
    msg.lon = 0.806095340229;
    msg.height = 0.307500294485;
    msg.services.assign("FYNTXIOMROBGQKLUVLYQQBOWXFPEJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.757932920552);
    msg.setSource(12157U);
    msg.setSourceEntity(183U);
    msg.setDestination(61682U);
    msg.setDestinationEntity(7U);
    msg.sys_name.assign("UPXCLAYHQNEHNRLJPKLRNCSZNQGSYTKTWJKLBKQKPDEOBZXHAATVDEOYRJKRNILOUBCKTWFPWXFSHJGESVFCIDJEGUUTCNROUZOEPQMIHRYOHRMBLTMXFMMXWMQQNFQPYGYRYDQTJFQLXDFAADOUETGDBPZNUGNIZFEMUBCCRXHICOWBWZVWISGVLGVKNIESZZJKAOHPVDUFUHYCB");
    msg.sys_type = 10U;
    msg.owner = 28846U;
    msg.lat = 0.151710715558;
    msg.lon = 0.191507855325;
    msg.height = 0.85303976959;
    msg.services.assign("ZNCPLCXWOOWPFMGBJASSDFINQGKYBZJHAOYCJWTGEJNLFCXYNJPFQEORZMVIKLUITUZBVEBXSORMHOZGQMLFMVVDVUUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.832076604053);
    msg.setSource(28201U);
    msg.setSourceEntity(120U);
    msg.setDestination(26866U);
    msg.setDestinationEntity(6U);
    msg.service.assign("FZMTBKRUVAZXCLMMQNEOSYGIFHJYDJKCCYYSHOGFLMVSNEOVVNBEHXWHLXLTZXZDRUMMUNIRDLBK");
    msg.service_type = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.44057112039);
    msg.setSource(36714U);
    msg.setSourceEntity(57U);
    msg.setDestination(61686U);
    msg.setDestinationEntity(88U);
    msg.service.assign("NGHEYMYPYUZQVSGMDCHNKWRJWACELIFCGDEZIAOFJENLJBRLXVVBJRUCFBXREHGIFUVGPBWHJIXPIKRKYEHVYRDZTVXEGEQCSPSEJXVRKZDLPYDZPSBPWBHRGSJLXQSDQYCBKLMGMSSTLWAXNNMWCTWFFFZAEMIMWFOUQPYAPNBDSNFDZJQUPUHUDZKOMNZTRMLKQYKAJALTTCTAYTWWFICUIVORUBXGVQNOOHVUBHAOOQIKKXTLQTOXIHOZSD");
    msg.service_type = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.907121738614);
    msg.setSource(8739U);
    msg.setSourceEntity(159U);
    msg.setDestination(38040U);
    msg.setDestinationEntity(59U);
    msg.service.assign("XLBUNKIRIMUWYCVWBTVEOYZUJKOPTPMSJASLHGUNEPMAAVBKJQCROHDTEKLXXBKRFNQPSIIQFYCMHTVUXBRYEN");
    msg.service_type = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.569970682278);
    msg.setSource(44535U);
    msg.setSourceEntity(217U);
    msg.setDestination(59924U);
    msg.setDestinationEntity(31U);
    msg.value = 0.221522366159;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.607587956943);
    msg.setSource(35354U);
    msg.setSourceEntity(240U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(34U);
    msg.value = 0.0740554127844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.113284243708);
    msg.setSource(26592U);
    msg.setSourceEntity(130U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(187U);
    msg.value = 0.353996829315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.704791918586);
    msg.setSource(2004U);
    msg.setSourceEntity(30U);
    msg.setDestination(7652U);
    msg.setDestinationEntity(145U);
    msg.value = 0.479381328127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.636518549159);
    msg.setSource(29602U);
    msg.setSourceEntity(98U);
    msg.setDestination(41375U);
    msg.setDestinationEntity(44U);
    msg.value = 0.932110799421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.617209308883);
    msg.setSource(44111U);
    msg.setSourceEntity(211U);
    msg.setDestination(33312U);
    msg.setDestinationEntity(210U);
    msg.value = 0.103096468388;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.084991521888);
    msg.setSource(2758U);
    msg.setSourceEntity(29U);
    msg.setDestination(29342U);
    msg.setDestinationEntity(35U);
    msg.value = 0.538613037438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.301405279889);
    msg.setSource(62768U);
    msg.setSourceEntity(146U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(8U);
    msg.value = 0.151970524593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.7709869861);
    msg.setSource(44549U);
    msg.setSourceEntity(88U);
    msg.setDestination(22093U);
    msg.setDestinationEntity(113U);
    msg.value = 0.326596138565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.716272730294);
    msg.setSource(39017U);
    msg.setSourceEntity(197U);
    msg.setDestination(42971U);
    msg.setDestinationEntity(225U);
    msg.number.assign("LVWTHZXEGHAHTJWRFPHQTBVBPIJDKCZQGMLGMYTUOGDJYECCQURMZWSURSJUXYVWHDEFVPANRVNTOWPZAVUBXLXYROZBKCUWOAFIOIGIRLDIZTPXXCOBSOZJDKGFLRVBZNROJFFBJIEKJGOFDARMAQZMSYNTWUYKIAVDSCBWNUEXTSFMSFYHULMKAUPCSNVQCQQVIEHAMPFGLEMXJNPTHLBESJDNHKWKSGYWHZGOXYIMBNDDC");
    msg.timeout = 47940U;
    msg.contents.assign("VQOKIDPRULNEJCSFAHGZVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.057163340274);
    msg.setSource(27893U);
    msg.setSourceEntity(150U);
    msg.setDestination(59231U);
    msg.setDestinationEntity(64U);
    msg.number.assign("NAGXLMVXWSJKM");
    msg.timeout = 1065U;
    msg.contents.assign("DPUKHLPVHBLXAKIGJRLWUMSOYWSFKOTGKKETRCPVXUJQTTPGNCSHYMONNYLCBBVUWAZPFWIVRBRGDEYMKDKWNJODRJQCIIJDFNFSRQGXWXBTVFMAXUFIALXBHZKTEQLRWOCZWVMSAXLTNXULIVNYUHNDYQOMZTEPRQCWADNHXMJTUUGDIZKMPACPYNQFBIZCLEYPGBSEHSHGZEDLFZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.470130529021);
    msg.setSource(32099U);
    msg.setSourceEntity(82U);
    msg.setDestination(15421U);
    msg.setDestinationEntity(144U);
    msg.number.assign("OTSEADLKWCSENKZTPIUGLXPHJXGTJRXSPZJSIXIFITRTKZKAPHDYVQMOZZCJYPGLUBMHHHUXONKYWMMQPLLTUSVDUHIRWVGCVCAUZJPWMNIEGJSSVDQCGKFEOHMOBMHPRFMVENFIWDXBJVQMZZNEAWWYUOELBDEFPFETJGILVAPRJRTNRUMONUDYQBGCYLUIWACQIXBKFEKJQOQHGYBBARSASVNFBNCKCBFVHWOZRDXNYYTKZOQG");
    msg.timeout = 42823U;
    msg.contents.assign("MSDKUGOPZDIHIYUNCUJEQAEQHNGOGSEIEZLAYOBDACVHVRDLWIKHMLEFPKQQXEWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.968873874535);
    msg.setSource(13055U);
    msg.setSourceEntity(138U);
    msg.setDestination(21282U);
    msg.setDestinationEntity(16U);
    msg.seq = 62360941U;
    msg.destination.assign("BFSPBQVUECGJAFQSJQJGGBHABJESLPFWARJPMVZSXIZTPPHSOTKNJMACHMYOWKWXMCFVCPRENTQCUYBKVQGGUYXKNKWYLZHLMYRSIZNKHNBEQIJKOVYIGPVKDAWHIWOQDDNOYOGAIIEQJTUMNALURCOLXXWYMSAZLCSVSBFXDRGEUKZPEFOABITFTTROCWGXZRQWUDTQTGAPVDTFSNVXMDHUXHIBNUMFZHCNBPXDVFZERZLYLDOREMDHECY");
    msg.timeout = 43054U;
    const char tmp_msg_0[] = {61, 7, -51, 24, 39, 63, 37, 35, 49, -100, -84, 12, -110, -11, -21, 73, 38, 113, 32, 26, 112, 102, -91, 44, 78, -69, -1, 125, -38, 121, -30, -73, 14, -37, -40, 59, -105, -9, 121, -10, -17, -82, 0, -34, 116, 97, -97, 65, 32, 120, 12, 104, 60, 104, 39, -14, 123, 42, -117, -85, 59, -61, 47, 43, -117, 34, 123, -125, -35, -81, -85, -115, 61, -50, 70, 70, 32, -21, 24, 11, -1, 65, -68, -98, -72, 65, 121, 95, -30, -58, -119, 3, -56, -45, 78, -110, -127, 9, 77, -88, 61, 83, 25, -47, 96, 23, -96, 104, 94, -109};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.525010288864);
    msg.setSource(41783U);
    msg.setSourceEntity(173U);
    msg.setDestination(8780U);
    msg.setDestinationEntity(64U);
    msg.seq = 232887958U;
    msg.destination.assign("WZOPETUHBCUGFZKBQYTJLZCKFOQIUNCHDZGRFSVMWFFKKYXWUPDOMRXIUPSADDYVJDNEXWNOQSXJDOBDBMGLGRBSOAFWLCWFHSYLOWHIVKBHZUYCHNSPYMYGZNQCAVQYLQTOAZEMFIZGEPBIPUVFEEJMSNDJJPQWVBTGUZNICNEOLRJTAPKTMTJXVWUSXYMZJAPERUYPKBASRCXRLAQOGNIEQKRCIXRB");
    msg.timeout = 31710U;
    const char tmp_msg_0[] = {-42, 92, 24, 58, -92, -101, 86, 112, 99, 50, 32, 99, -126, -109, 6, -23, -77, -56, -46, 115, -35, -74, -30, -109, 65, 25, -77, -101, -93, -67, -120, 52, 83, -38, -86, 86, 90, -128, -31, -5, -107, -111, -4, -108, -66, 86, -105, -94, -100, -1, 1, -59, -28, -35, -37, -114, -127, 119, -45, -21, 123, -27, -23, -42, 116, -77, 124, -117, 29, -114, 34, -71, 106, 3, -103, 6, -114, -116, 52, 116, 26, 11, 67, 36, 11, 111, -104, 31, -46, -65, 111, 10, -15, 57, 90, -127, 98, -94, -45, -46, -115, -55, -75, -102, -71, 73, 24, -36, -53, 18, 99, 47, 2, 69, -91, 11, -13, 65, 12, -127, 70, -71, 107, 25, 66, -49, 91, -65, 96, -55, 64, 73, 61, -54, -59, -23, -58, 107, 37, -109, 29, -112, 13, 67, -125, -46, 38, -34, 19, -92, -123, 107, 111, 16, 62, 50, 60, 27, 79, 64, 92, -6, 42, 51, 52, -45, -4, 48, -115, 84, -14, 115, 105, -76, 90, -3, 115, -78, -70, -56, 60, 96, -37, 56, 85, 37, -126, 2, -17, -29, 7, -26, 77, 31, 42, 99, -87, 4, 53, 77, 113, -1, -46, -25, 56, 59, 39, 0, -79, -82, -73, -112, 88, -12, -17};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.433671615494);
    msg.setSource(19752U);
    msg.setSourceEntity(79U);
    msg.setDestination(254U);
    msg.setDestinationEntity(237U);
    msg.seq = 4253056262U;
    msg.destination.assign("MJHTBHRGZYVUUGKIPTSCZ");
    msg.timeout = 29604U;
    const char tmp_msg_0[] = {-120, -94, 79, 110, -75, -50, 72, -43, -60, -4, -54, -79, -104, 59, 120, -84, 71, 39, -84, 116, -66, -49, -44, 52, 2, -61, 108, 11, 49, -118, -83, 61, -70, -68, -116, 75, 52, 59, -40, -38, -12, 35, 49, 115, 50, 116, -23, 79, -10, -101, -114};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.52183506503);
    msg.setSource(31982U);
    msg.setSourceEntity(52U);
    msg.setDestination(44609U);
    msg.setDestinationEntity(207U);
    msg.source.assign("QHSAZHTQOWRTUIEGAQYKXTCSEXOUTVRKCWNPNJBVEJDJDFZJBBIDIKMWKKVOXMKLNBPRICHFQFAGBMGRGWHUSWZJSVZYLIAMOOFDTUQRXBKUEIMWSVYYCCNUXXDDDWGROOCZLRWMPJGXVHPOLIYIUBDCGNJNCAPCWAVFT");
    const char tmp_msg_0[] = {-56, 44, 102, -74, 49, -75, 85, -127, 101, -70, 111, 114, -11, 111, 86, -108, 120, 81, -108, -34, 76, 56, 44, 89, 48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.225625364469);
    msg.setSource(15386U);
    msg.setSourceEntity(189U);
    msg.setDestination(24392U);
    msg.setDestinationEntity(210U);
    msg.source.assign("QRFMTEYZMHFHQIUDKAYOPKULRYOGLVLRCQDPSPHLXPKBGSXNOIFVEUYKDZMTTELOAFOEPQCVWYSUXWTPXMSOKJWASAWRVNTQJBASQWYLYTXINXDGJVBNPMHCBXKACTGVJHFYIGAZERIVECIQZFNCRSLXKJJLDORTAURNBEETIZNMISJDDHYPJHUDBKFIRWCJABQZAXFSPZNCHCF");
    const char tmp_msg_0[] = {-52, 1, -109, -7, 113, 103, -6, -59, 37, -53, -68, -121, -8, -113, -83, -59, -66, 104, 48, -108, 113, -40, 22, 45, -26, -22, -78, -77, -31, 117, -107, -65, -117, 23, -58, 55, -11, -1, 101, 81, -36, 29, 17, -49, 64, -33, -80, -44, 87, -124, 112, -61, 104, -38, -118, -124, -28, -14, 75, -60, -84, 70, 36, 49, 118};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.185293976053);
    msg.setSource(4635U);
    msg.setSourceEntity(131U);
    msg.setDestination(28042U);
    msg.setDestinationEntity(168U);
    msg.source.assign("MINJCZKRMLWVFSKKYEICMMAFASRFZEOCDNPNIWVPTHQVFGTCBWGPHYKGLBHQJQEZCCPMZUTTIXFQOKVBVHMJTDLCLXRYAXDQIOMEPY");
    const char tmp_msg_0[] = {-77, 102, 59, -111, -77, 14, 38, -100, 70, 37, -47, -94, 15, 93, 35, -69, 80, 1, -31, -106, 109, 78, 117, 55, 55, -10, -6, 30, -48, -116, -3, 60, -72, -16, -105, 118, -100, 27, -24, -49, -13, 18, 43, 26, 3, -34, 39, 102, 99, -120, -105, 114, -96, 48, 125, 66, 114, -46, 43, 121, 100, -13, 107, 76, -127, 66, 10, 81, 91, -116, -119, 118, -103, 62, 111, -21, -71, -68, -106, 43, 120, -11, -108, -68, 103, 59, -124, 51, 57, 43, 44, 50, 11, 89, -41, 41, 43, -34, -44, -121, -4, 25, 63, 125, -107, -69, 123, -117, -69, 121, -47, 81, 105, 97, -52, 124, -92, -24, -37, 17, -14, 42, -107, 33, -78, -124, -83, 111, 46, -71, 20, -47, 59, 113, 108, -22, -89, -11, 8, -46, -59, 1, -95, 21, -33, -57, 123, -53, -12, 43, 87, -105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.283033448442);
    msg.setSource(63632U);
    msg.setSourceEntity(233U);
    msg.setDestination(62235U);
    msg.setDestinationEntity(127U);
    msg.seq = 4224351779U;
    msg.state = 217U;
    msg.error.assign("DJGQLCVQBTBLXNMVYQVULNNCDAYOZSRVYLXXNUGAGEPRWHCQLHSAKCPAZTMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.903040690138);
    msg.setSource(4090U);
    msg.setSourceEntity(190U);
    msg.setDestination(64430U);
    msg.setDestinationEntity(178U);
    msg.seq = 1536537336U;
    msg.state = 77U;
    msg.error.assign("UWVEOWNZNXXAEGENLKDKDHKWGAMAPWLEDKDVUIVCFUWAHTGYIWKKHABRCBZAUJIHXBMIVBRQWQELCKXBYSLCQDSRJSRBRQXBBTTMWSYYQJNZOIJBLUKGGNNEJZUSQEEOPIEZDYJFPMSGRALPQZZWMFURUZYOSCNTJOFTESDPAODBZFTMRKPTFCYTIXDJGIWNJVFACMHGJPCVNOXLSQXOUMXHVRXYYHHOFTLPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.447806834912);
    msg.setSource(27185U);
    msg.setSourceEntity(16U);
    msg.setDestination(39971U);
    msg.setDestinationEntity(146U);
    msg.seq = 2197646317U;
    msg.state = 171U;
    msg.error.assign("UKRQKYKUOODCZPRDSHEHZKYUOLHMDTCEOPEVLEMAQNQIPLGAWNVTIIPHEQAOLEDVWIYWETWRCWGYXHZLCMTFRGLVYPOBKJKFKBCCSPUGNMBRXNXVSLISGSMNFJRLVBYYKPISHOQEWQUKXLRTBDJTNXHOBUNJMYTWBCDMTHVP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.513805484218);
    msg.setSource(48884U);
    msg.setSourceEntity(198U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(99U);
    msg.origin.assign("WQSXOXLUFTUFDHCEAVFQRUUMQOXZWX");
    msg.text.assign("WXDPBVATHPZVSXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.9816407252);
    msg.setSource(13347U);
    msg.setSourceEntity(236U);
    msg.setDestination(17750U);
    msg.setDestinationEntity(232U);
    msg.origin.assign("LLKGUBVDFJVZVZHIWTOLABVIIGJDQAUUSVNYKQGSIIRUSIFENGNREJFSHCHKUBDJDYCYYEWNLKGPGSCVUZQLKRPOGXFBEHANNCMTSMWNTUMOCSQOYBHMROPTRPWBYKYXAGZUXWIABNADPUSHOCSLUWNOTTMAVXPNWBEFZKXTCQEDDCLHMRQJXEPGKRMJVOTMXRHHVYXCOKIJHLELTCFQXIDMWMIO");
    msg.text.assign("KUMARKLALQRFOPREQYNNWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.91321224496);
    msg.setSource(16347U);
    msg.setSourceEntity(150U);
    msg.setDestination(32082U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("OBUNIDJRZDRVDXVUZKEOVIKIQHNJVBUQOHSGGGZPGFYJSWMJPVPH");
    msg.text.assign("LYXTDMVAIMCGWBCVVIOFTRWWUHGQWZHRAHSBUXKOCGKBGMAYOZVDGJMQNDJTTYZXCLZSGHHEFNZPETXKQOLMNEPULSYMOOJDFVFFEBFLTEMMJADBJVCAFCNSVYFJEYBTYOLLXKWAZYCPQBGJNUWCRHSIFKQHVIWTWQXSXHDKSAFERAIPXINUBOTHZDUVMRCDVYZPLANUWCIRPXSQNKMPUPZRSZUPKBPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.881555971565);
    msg.setSource(6356U);
    msg.setSourceEntity(126U);
    msg.setDestination(46668U);
    msg.setDestinationEntity(149U);
    msg.origin.assign("ZYAEIQQBXKMHMCXHIOGHPEGABKWQDZSDWTCENZTOMHBLFSCHSJJIYXWZPKZFJYIGDMYLIAZBEPITATKFYNOCPNMZJWRNNKHVPNWNUDWUOTZUXGRVQLPLVSW");
    msg.htime = 0.357120282099;
    msg.lat = 0.00907441095057;
    msg.lon = 0.0617655924873;
    const char tmp_msg_0[] = {-126, -128, 6, 126, -105, -48, 21, 53, -29, 1, -48, -111, -97, -61, 105, 0, -115, 45, -96, 5, 84, -105, -97, 37, 30, 113, -128, -54, -75, -43, -88, 67, -75, -79, -38, 54, -86, -91, 104, 110, -43, -99, -27, 68, -42, 96, -67, -66, 39, 117, -97, 108, -93, 88, 84, 89, -24, -48, 42, 84, -119, -105, 52, -52, -35, 93, 80, -50, 3, 119, 62, -106, 24, -8, -123, 39, -86, 72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.405893791009);
    msg.setSource(7533U);
    msg.setSourceEntity(44U);
    msg.setDestination(24280U);
    msg.setDestinationEntity(53U);
    msg.origin.assign("LRGLOTBSLHBDGQDCZQVSESWCMSAKOQCYEGBFDARKJSULRCVAJFKAFKQSWIVIRQAHCRALLDLMWTXUGPZHWGVYEZZMNSOTYIRAIMRYTBIUNZNYJGIOZXXNAQTYWPOOHDTPFOGHULRXKFUNTFBWAIOPEBBJVYJRDZLVHBHIKIZPKMKCVRJNXVLMZDSWBTJSHQXYUEMJCCHGEEFSFNPDPWIMMXADHZVPUWJNQUFKKEQPXQMEGENCGXYU");
    msg.htime = 0.601972135148;
    msg.lat = 0.103085717585;
    msg.lon = 0.73912876516;
    const char tmp_msg_0[] = {10, 54, -3, -83, 93, -32, -88, 8, -48, -28, 105, 37, 90, 124, 7, 84, 18, 7, 111, -67, 81, -73, -95, -3, -2, -118, 23, 25, -125, 70, 18, 14, 83, 122, -37, 22, 45, -83, -21, 77, 125, 104, 105, 97, 43, -97, -51, -13, 96, -127, -85, 62, -36, 124, 7, 50, 88, -113, 111, 81, 66, 71, -28, -68, 20, 113, -110, -76, -9, -13, -13, -39, 29, 56, -49, 74, 125, -71, 8, 103, -102, -89, 109, -77, 29, 0, 30, 89, 82, 48, 24, 65, 107, 112, 40, 51, 85, -58, -61, -75, 115, 29, -58, -31, 110, 2, 78, 104, -100, -80, -3, 75, 88, -26, -69, 59, -114, 103, 54, 119, -106, 68, 26, -22, -102, 0, 76, 73, 81, 96, -4, 71, -24, 50, 104, 7, -105, -66, -81, -29, 84, 40, 50, -39, 51, 41, 102, -37, 4, -101, 55, -23, -86, -3, 96, -103, 86, 100, -12, 10, 23, 84, -71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.0333145600157);
    msg.setSource(52875U);
    msg.setSourceEntity(194U);
    msg.setDestination(16279U);
    msg.setDestinationEntity(141U);
    msg.origin.assign("VOHZKHMTSQJGQNIABBMSVBWMRKCAAQYYDRSPIBSNOGOYTTQTBJHYOGAVGZPZNDGKTXDBFPWYLHQTUCHXVSWREGWJMZTEWEZEMXDTBYDFKMKBAMTAXKDPJFXLSPNKEIUUECRMIVHOZLPWPCYNXZYNMLFEJFXNRFQGNGVRBLEXUGVNWUMHNBUJZURX");
    msg.htime = 0.956399804641;
    msg.lat = 0.179514132759;
    msg.lon = 0.881885408488;
    const char tmp_msg_0[] = {18, -5, 114, -91, -42, -43, 2, -10, -63, -53, 39, 69, 123, -99, 51, -122, 33, -8, 35, 30, 39, -108, -1, -73, -1, -45, -11, -17, 80, 93, 121, 88, 108, 30, 110, 2, 77, 56, -90, -2, -17, 77, 74, -32, 105, -126, -23, -16, 120, 11, -32, -11, 33, 19, 26, -99, -17, 58, -12, 90, 2, -17, -81, 119};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.192777463572);
    msg.setSource(51051U);
    msg.setSourceEntity(97U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(123U);
    msg.req_id = 58614U;
    msg.ttl = 11819U;
    msg.destination.assign("PGKTUWZZKIJYUBAXTENSXQOASYJEFUNUQKCHVVBUB");
    const char tmp_msg_0[] = {-122, 86, 73, 2, 79, -20, -20, -27, -119, 82, -3, -101, 90, -31, 43, 58, -121, -66, -41, 55, 21, -96, -98, 12, -63, 79, 20, -9, -92, -62, 100, -94, 109, -113, -50, 71, -98, -13, 76, 16, -69, -47, 44, 63, 119, 50, -111, -56, -95, 103, -127, 121, 32, 50, 45, 17, 37, 85, 92, -55, -68, -11, 20, -51, 62, -110, -92, -50, 47, -44, -105, -47, 85, 45, -57, -49, -51, -9, -100, 30, 76, 14, 98, -106, -66, 68, 54, 37, -70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.737738784508);
    msg.setSource(58065U);
    msg.setSourceEntity(79U);
    msg.setDestination(54339U);
    msg.setDestinationEntity(62U);
    msg.req_id = 26840U;
    msg.ttl = 42126U;
    msg.destination.assign("UJHIEFUSTDIHMVUYWKBVHAGAUBVBKMRTLBNMEGQVCQHZLCAZFCTPPFKNXBAWYKDSUQSBXODGFJILRRKHOTZAZUVFECGFQSPXYLQSFBYNQQWOSVIJJ");
    const char tmp_msg_0[] = {45, -58, -79, 76, -80, -28, 71, -54, -18, -56, -6, 119, -113, -6, 107, 10, 113, 109, -27, -68, -107, 72, 10, 112, 61, 121, 19, 46, 88, 126, -93, -80, 30, -7, -7, 67, 72, -18, 19, 58, -10, 34, 37, 41, -97, 84, 115, -42, -45, -10, -3, -120, 53, 10, -102, 94, -112, -8, 84, 104, 60, 124, 67, -85, -56, 45, 7, 35, 66, 35, 23, -96, -62, -112, -54, 34, 29, -108, -110, 37, -122, 114, 87, -80, 57, 106, -37, -65, 50, -8, -15, -51, 98, -102, 48, -126, 74, -90, -67, 55, 115, 44, -63, -128, -21, -100, -108, -98, -110, 39, 23, 23, -89, -92, 9, 58, 91, 76, -37, 114, 86, 77, -114, 67, 54, -82, -106, -29, -24, 119, -4, 124, 86, 25, 13, 50, -49, -14, -87, 12, -7, 106, -111, 79, -19, -28, 121, -82, 3, 116, -70, 7, -10, -81, -56, -35, 57, 95, -83, -28, -23, 105, -13, 43, -50, -16, -88, -40, -75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.173267188564);
    msg.setSource(25365U);
    msg.setSourceEntity(183U);
    msg.setDestination(28370U);
    msg.setDestinationEntity(190U);
    msg.req_id = 55748U;
    msg.ttl = 23116U;
    msg.destination.assign("OJRIRTRQRZRR");
    const char tmp_msg_0[] = {29, -48, 28, -93, -14, -100, -105, 40, -88, -91, 101, -34, -100, 52, 111, 58, 76, -100, 117, 7, 114, 90, -28, -56, -32, -64, -28, -55, 88, -38, 25, -112, 112, 70, -30, -37, 122, -33, -65, -114, 4, 95, 76, 117, 54, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.967394331139);
    msg.setSource(12201U);
    msg.setSourceEntity(59U);
    msg.setDestination(45417U);
    msg.setDestinationEntity(231U);
    msg.req_id = 32945U;
    msg.status = 86U;
    msg.text.assign("BZZCTPUVUGWOPACUYSSYSTLEDTYDXOKUOZVQBMTKBNXJWMXMOZBVDAINJEWDRDSFSAYBHAFSWMYBELLKDDXNQFODOVHHQOJARQAHNJGEIOWTVZVKUPPYPCQPLRML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.835972043691);
    msg.setSource(39319U);
    msg.setSourceEntity(210U);
    msg.setDestination(8534U);
    msg.setDestinationEntity(110U);
    msg.req_id = 18664U;
    msg.status = 128U;
    msg.text.assign("LVZJPHTWDHHCQVOUTGZGDXOGZBECUVGIMLPJLNUGEAXXUYVYYHAXYZOKFTRDFSSVBXWDSZQJGZNIRCPXBRDXPFRGLOIDIXDMENTMKLUAFEKYKSPCLJISZNEOTWNF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.659686331012);
    msg.setSource(15036U);
    msg.setSourceEntity(30U);
    msg.setDestination(23029U);
    msg.setDestinationEntity(160U);
    msg.req_id = 44807U;
    msg.status = 214U;
    msg.text.assign("QMGABDEWGNMOZRYXNFUYETTHOUWPNFVSTEBLXYRWFDOOIFEKEJBZGHMIXOLSYQKQKLSYDSEPHREJKMGPAZWLGCDOQVZJZRLDIVPPOHNUSY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.528899956363);
    msg.setSource(16593U);
    msg.setSourceEntity(73U);
    msg.setDestination(2752U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("HVAAOIGNGXFZZJTYAFOSEUPXIXRHGKZJVICIBBHDYQGLFMBVFPLUNWSMHJMVUZOKLSMOAPGFTEKRLDODPLOXMLIVIR");
    msg.links = 3910734373U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.382170858594);
    msg.setSource(10887U);
    msg.setSourceEntity(111U);
    msg.setDestination(35680U);
    msg.setDestinationEntity(9U);
    msg.group_name.assign("RQTXTXPVZDHDHKZJFJFGLNSIWUJVXOVEHCIWLAQPUUBTBGIZLNWCRBPMMFHGCFGOYQWOHLCFNODOKEJXIARQWYLKBUYRJMYTZSSENEKHDZKVRVTAEZFFAKHCYAOKIWIGXAMTLFMQMYTRRQYRRUNWVLAXEWZDWGSVNPZJPSAZSFEQLXBLPONI");
    msg.links = 3116210869U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.233538292051);
    msg.setSource(10708U);
    msg.setSourceEntity(28U);
    msg.setDestination(24063U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("ACCTTQNWPNGVLTWSCBFTBPXLQZZPDNBBARHEXIEQIYKOFJAHCXZLGPDUNZKDULILWGYQOAOVKEJFHCOXSZFOPOMXOFMWFB");
    msg.links = 1502484788U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.499106379375);
    msg.setSource(47589U);
    msg.setSourceEntity(111U);
    msg.setDestination(46812U);
    msg.setDestinationEntity(73U);
    msg.groupname.assign("HPDHPUDASPAMJAXJHYPEZRKRADYCBDVRIHVWLVNZIYYGJRJNJBHYSVWFGRXGPPIHESWIFGLCBTILMTBEKFVZKZVOIGRVRRCEFXENTGDFQNPSUTXCMUGXKOULFBZFXZCQDIRZGFAUWCXSCAESODNLWHNWJSQ");
    msg.action = 26U;
    msg.grouplist.assign("LKHWVFIOEDKGRPQIFVOHWYGLMPQUEANBDDKEEJTYMBCLJVRMRMOVIZKTCSJVOKAWACDKZWCTJXHLCLAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.557552039576);
    msg.setSource(9238U);
    msg.setSourceEntity(134U);
    msg.setDestination(28840U);
    msg.setDestinationEntity(92U);
    msg.groupname.assign("ZVVLLYFPGREDKCCASRWFTDFOZEWESNCVUXAJBIWWHROSKAISEYLU");
    msg.action = 193U;
    msg.grouplist.assign("SYCXJSSYGCEHLGBEHCREXCXKNRETLNHNQRBQONZLGFLIOFRMJOZCWDYCQEPJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.35248605226);
    msg.setSource(39351U);
    msg.setSourceEntity(152U);
    msg.setDestination(25673U);
    msg.setDestinationEntity(239U);
    msg.groupname.assign("QGVSPRJVIZYBLLITUCOOMIUVDFMUDUCBNODLEFBSMRXRWMVKVKEITTTRWALMNTEVSWGDEYSEB");
    msg.action = 149U;
    msg.grouplist.assign("PGNWAUWDZKCOJWDYGXLLEVKLZHEHJGJXPCVOTMHPARPGNBGQVRQAVFPDDIDZVARCNNAIDVWFAPIOMZUXDTXNBPFCWOCBKROCHHNEHCMJFQKUAXWGGVDMBTMNVOKQILGXYTCGQOEZLUKFMYTULSEICYAIYRHMLJUHFTZIYYSYGKUMRJXFTSASQVFKEOQLNUZOHQMUQRJSTIQPXSJZXWEENVBSJNPXCDSBZWOALTURBBSZYLPEBFEWTRHKYBFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.950181456643);
    msg.setSource(43150U);
    msg.setSourceEntity(133U);
    msg.setDestination(30669U);
    msg.setDestinationEntity(240U);
    msg.value = 0.0726112929498;
    msg.sys_src = 5412U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.549074325503);
    msg.setSource(26580U);
    msg.setSourceEntity(1U);
    msg.setDestination(58680U);
    msg.setDestinationEntity(124U);
    msg.value = 0.0900480122771;
    msg.sys_src = 25784U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.979585590211);
    msg.setSource(22642U);
    msg.setSourceEntity(193U);
    msg.setDestination(42048U);
    msg.setDestinationEntity(211U);
    msg.value = 0.469653712672;
    msg.sys_src = 40909U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.30044350067);
    msg.setSource(8233U);
    msg.setSourceEntity(22U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(130U);
    msg.value = 0.280658474242;
    msg.units = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.761594716647);
    msg.setSource(42340U);
    msg.setSourceEntity(154U);
    msg.setDestination(58013U);
    msg.setDestinationEntity(118U);
    msg.value = 0.940626230362;
    msg.units = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.941601974121);
    msg.setSource(29903U);
    msg.setSourceEntity(137U);
    msg.setDestination(48888U);
    msg.setDestinationEntity(196U);
    msg.value = 0.654539993914;
    msg.units = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.266818757847);
    msg.setSource(58062U);
    msg.setSourceEntity(60U);
    msg.setDestination(37911U);
    msg.setDestinationEntity(58U);
    msg.base_lat = 0.987312670672;
    msg.base_lon = 0.05567743187;
    msg.base_time = 0.358605437903;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 10601U;
    tmp_msg_0.destination = 384U;
    tmp_msg_0.timeout = 0.35852055155;
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.729280667222;
    tmp_tmp_msg_0_0.lon = 0.150730207024;
    tmp_tmp_msg_0_0.z = 0.555678347083;
    tmp_tmp_msg_0_0.z_units = 161U;
    tmp_tmp_msg_0_0.speed = 0.516632715256;
    tmp_tmp_msg_0_0.speed_units = 251U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.155489481898;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0237101720867;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("WYSACGCNKHNUCPSPKZIFQLGD");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.899916257427);
    msg.setSource(56338U);
    msg.setSourceEntity(40U);
    msg.setDestination(18711U);
    msg.setDestinationEntity(2U);
    msg.base_lat = 0.860689310658;
    msg.base_lon = 0.867991145698;
    msg.base_time = 0.437283532385;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 60294U;
    tmp_msg_0.destination = 11870U;
    tmp_msg_0.timeout = 0.813313180637;
    IMC::FormCtrlParam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 110U;
    tmp_tmp_msg_0_0.longain = 0.118959389872;
    tmp_tmp_msg_0_0.latgain = 0.687426883676;
    tmp_tmp_msg_0_0.bondthick = 4106652717U;
    tmp_tmp_msg_0_0.leadgain = 0.436681059038;
    tmp_tmp_msg_0_0.deconflgain = 0.443555478331;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.458476070187);
    msg.setSource(14917U);
    msg.setSourceEntity(197U);
    msg.setDestination(24606U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.274939744831;
    msg.base_lon = 0.64133376166;
    msg.base_time = 0.698826620109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.98559381754);
    msg.setSource(26276U);
    msg.setSourceEntity(102U);
    msg.setDestination(17560U);
    msg.setDestinationEntity(144U);
    msg.base_lat = 0.418440672146;
    msg.base_lon = 0.841510938379;
    msg.base_time = 0.989123406952;
    const char tmp_msg_0[] = {41, -56, -79, -8, -31, -97, 118, -128, 12, 97, 92, 54, 20, -3, -5, -19, 21, 91, -104, 109, -63, -128, -128, 28, -119, 112, 28, -14, 100, 52, -77, 107, 7, -42, -23, -3, 21, -100, -39, 29, -12, -108, -3, -55, -68, 107, -67, -39, -90, 23, -82, 125, 119, -41, 52, 3, 57, -106, -70, 51, -69, 66, 87, -34, -72, -35, 122, 111, -101, 51, 64, 94, -123, -106, 85, -34, 67, -101, -124, -1, 102, -5, -60, -25, -128, -52, -101, 109, -107, -52, 62, -128, -64, 89, -25, -7, -83, -70, 52, -11, 20, 2, -120, -42, -41, 35, 90, -42, 103, -37, -126, 118, -117, -4, -46, 118, 66, 70, -8, -112, 83, 61, 26, 89, 29, -105, 60, -74, 70, -105, 82, -34, 121, -124, 11, 26, -8, 123, -12, 81, 4, 25, 16, 86, -36, 96, -53, 57, -53, 93, -26, 99, -125, -117, 5, -81, 5, -52, 17, -48, 41, -108, 44, 52, 21, 51, -87, 93, -61, 95, -81, 99, -7, -102, 74, -121, 10, -127, -79, -92, -25, 81, -67, -9, -42, -126, -57, 109, -65, 102, -17, 10, -38, 61, -68, -75, 72, 57, -72, 46, 16, 40, -18, 104, -19, 76, 82, -5, -3, 43, 14, 45, -22, -4, 12, 64, 73, 92, -93, -36, -83, -3, 16, -83, -15, -68, -31, 90, 122, -80, -2, 60, 59, -60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.257460999338);
    msg.setSource(27021U);
    msg.setSourceEntity(46U);
    msg.setDestination(10977U);
    msg.setDestinationEntity(254U);
    msg.base_lat = 0.13722113268;
    msg.base_lon = 0.785132945001;
    msg.base_time = 0.905951349527;
    const char tmp_msg_0[] = {5, -112, -89, -108, 91, 115, 35, -7, 56, 120, -34, -70, -60, 88, 82, 107, -28, -87, -74, -73, -18, -29, -105, -60, 7, -43, -60, -76, -14, 78, 43, -107, -5, 32, -108, -89, -61, 49, 68, -90, 118, -77, -27, -123, 76, -77, 4, 13, -57, -19, 24, -62, -127, 93, 102, -102, -105, 79, 52, -52, 54, 22, 71, -62, -35, 83, 104, -93, 38, -78, 109, 18, 1, -12, 56, 3, 55, 68, -22, 8, 104, -115, -76, 90, -122, -12, -46, 9, 98, -11, -14, -88, -61, -44, -104, 81, 26, -72, 35, -92, -45, 100, 87, 67, -79, -41, -61, 109, -5, 108, 97, -49, 3, 91, -16, -80, 28, -104, -61, -115, -24, 53, 70, 103, 71, -119, -32, -20, -107, 54, 31, 73, 6, -30, -6, -118, -16, -98, 105, -122, 66, 87, 126, -25, 14, 17, -108, -65, 100, -75, -18, -41, -40, -124, -52, 79, -99, 24, 90, -118, -91, 27, -58};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.514156501432);
    msg.setSource(17158U);
    msg.setSourceEntity(123U);
    msg.setDestination(34609U);
    msg.setDestinationEntity(99U);
    msg.base_lat = 0.205380962502;
    msg.base_lon = 0.483130139408;
    msg.base_time = 0.959763314906;
    const char tmp_msg_0[] = {-26, 118, 29, 3, 2, -18, 32, 54, 26, -117, -84, 14, 121, -110, 4, 19, 103, -76, 86, -104, 29, -37, 94, -86, 15, 47, -98, 10, 22, 95, -6, 54, -77, 5, -119, 71, -31, -25, 52, -105, -128, -36, 79, 46, -123, 103, 70, 126, 56, -127, 63, -17, -62, -122, 117, -78, -101, 81, 63, -76, -124, 25, -60, 96, 7, 58, -87, -54, -25, 104, -114, 78, -18, 75, -126, 56, -12, 57, 85, -30, 23, -89, 61, 74, 14, 24, 101, -92, -99, 3, -119, 75, 6, 122, 98, 6, 109, -56, -2, 35, 4, -36, 51, -87, 92, 41, -33, -8, 105, -34, -115, -113, 109, -107, -8, -31, -55, 7, -75, -36, -1, 91, 106, -92, 68, -58, 13, -26, 47, 101, -55, 114, 122, -34, -28, 117, -27, -47, 34, -20, -12, 34, -36, 91, -87, 91, 50, 11, 47, 42, 104, -10, 15, 87, -117, 104, 71, -66, 40, -108, -30, -97, -11, -24, 95, 23, 109, 119, -70, -107, -37, 111, 17, -33, 26, -39, -64, -87, -48, 118, 7, -82, -47, -44, -67, 61, -106, 123, -94, -26, 5, -6, -73, 74, -31, -73, -118, 50, -102, 93, 97, -19, -118, 38, -56, 24, 58, -15, -100, 88, 118, 122, 54, -23, -19, 55, -25, -12, -27, -124, 108, -112, -73, 45, -70, -93, 83, -126, 66, 51, -124, -29, -25, -48, -60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.546612299614);
    msg.setSource(37937U);
    msg.setSourceEntity(240U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(74U);
    msg.sys_id = 36864U;
    msg.priority = 36;
    msg.x = -651;
    msg.y = -25917;
    msg.z = -30919;
    msg.t = 20200;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 29258U;
    tmp_msg_0.status = 229U;
    tmp_msg_0.info.assign("KAREMWOKBDBIZLXMMQHYIBMAGKWYHVRFLDSXXTXBGSXFIZPCCUSIBAZLWEKYJTUHUEQDVFRHZZYAOJQTCNWVUOFGPHXBIAKHTMSVEFGSMTYWRAURTWZRDLWXPAWLDCBDYYAPJECHUXZKSDIPMMIIQPNAFZYNNBIGGKQXLPVOKDLLJEORMEOENMPPSALNJYVGEYEHVDUFRHNJNWJQOXTKHGSQJQUCNTQS");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.163040082184);
    msg.setSource(64445U);
    msg.setSourceEntity(254U);
    msg.setDestination(35125U);
    msg.setDestinationEntity(230U);
    msg.sys_id = 63104U;
    msg.priority = -21;
    msg.x = 19897;
    msg.y = 24749;
    msg.z = -24507;
    msg.t = -21608;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 86U;
    tmp_msg_0.op = 23U;
    tmp_msg_0.err_mean = 0.920011756854;
    tmp_msg_0.dist_min_abs = 0.875407218103;
    tmp_msg_0.dist_min_mean = 0.552534087068;
    tmp_msg_0.roll_rate_mean = 0.116203451735;
    tmp_msg_0.time = 0.941386066708;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 174U;
    tmp_tmp_msg_0_0.lon_gain = 0.0165486265911;
    tmp_tmp_msg_0_0.lat_gain = 0.574289284246;
    tmp_tmp_msg_0_0.bond_thick = 0.0697565825857;
    tmp_tmp_msg_0_0.lead_gain = 0.104851716332;
    tmp_tmp_msg_0_0.deconfl_gain = 0.593090523048;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.333079605183;
    tmp_tmp_msg_0_0.safe_dist = 0.232627075102;
    tmp_tmp_msg_0_0.deconflict_offset = 0.689210316342;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.182999396838;
    tmp_tmp_msg_0_0.accel_lim_x = 0.150537096193;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.540220745035);
    msg.setSource(14742U);
    msg.setSourceEntity(111U);
    msg.setDestination(26264U);
    msg.setDestinationEntity(250U);
    msg.sys_id = 59584U;
    msg.priority = -115;
    msg.x = -21945;
    msg.y = 9026;
    msg.z = 29845;
    msg.t = -17047;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 60480U;
    tmp_msg_0.destination.assign("BJVEZLHIQTMNYH");
    tmp_msg_0.timeout = 0.344002473565;
    tmp_msg_0.sms_text.assign("TLIUUNUHDZQDXKEGFSRIZAOEAJSNQWTZXDUKGWTFSIFXHSQVYPPMPGQLMCSNLVWDMACBAENXFEALFGAEYHLEYCCVMGCWNHRYBDDNIQWRNCRTJUCVGFLQZNUUMYXQJSBVZV");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.840269889497);
    msg.setSource(6391U);
    msg.setSourceEntity(7U);
    msg.setDestination(59309U);
    msg.setDestinationEntity(119U);
    msg.req_id = 21365U;
    msg.type = 111U;
    msg.max_size = 37934U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.344719362581;
    tmp_msg_0.base_lon = 0.333987750982;
    tmp_msg_0.base_time = 0.594385461482;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 33652U;
    tmp_tmp_msg_0_0.priority = -62;
    tmp_tmp_msg_0_0.x = 1898;
    tmp_tmp_msg_0_0.y = -8441;
    tmp_tmp_msg_0_0.z = -10308;
    tmp_tmp_msg_0_0.t = -23012;
    IMC::Sms tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.number.assign("QWUWXLZSKAYJTUGOLJDEAIHBFIWUTELNYUKLFQZDYIETOTPHDJMLZNRSQEJNIDPWHVAQOQRKGTNPXWQERQGERAZJBDFZMCBWZLFWGFNDWNXVYBYOZYSMFPAVAMQKKCMVXYJLCCNPXNMZCYASLBRCRSTPDLHKBHGRKTMCRSEFCFUXMIGDTYIDSPVAMIOTRRKHEOTVBOKZOUJQMXZILECBN");
    tmp_tmp_tmp_msg_0_0_0.timeout = 55922U;
    tmp_tmp_tmp_msg_0_0_0.contents.assign("VXAWZCVULBBNXSQAERLJFFLMNIUKTBEKZLFEIDBIEJRRKOGQTEMCMCJAGPPINOWMVLQRPCLVAZQNXJXTDBSIXHZJHJDPVTHDP");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.110142272772);
    msg.setSource(33272U);
    msg.setSourceEntity(9U);
    msg.setDestination(35717U);
    msg.setDestinationEntity(249U);
    msg.req_id = 3021U;
    msg.type = 42U;
    msg.max_size = 45352U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.805857535273;
    tmp_msg_0.base_lon = 0.546024761008;
    tmp_msg_0.base_time = 0.745798531455;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.13762680833);
    msg.setSource(20019U);
    msg.setSourceEntity(184U);
    msg.setDestination(3189U);
    msg.setDestinationEntity(213U);
    msg.req_id = 11639U;
    msg.type = 46U;
    msg.max_size = 45264U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0371980083657;
    tmp_msg_0.base_lon = 0.807322381697;
    tmp_msg_0.base_time = 0.419907389124;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 18848U;
    tmp_tmp_msg_0_0.priority = -15;
    tmp_tmp_msg_0_0.x = -13996;
    tmp_tmp_msg_0_0.y = -19122;
    tmp_tmp_msg_0_0.z = -15319;
    tmp_tmp_msg_0_0.t = 25562;
    IMC::ClockControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 195U;
    tmp_tmp_tmp_msg_0_0_0.clock = 0.162615717411;
    tmp_tmp_tmp_msg_0_0_0.tz = -71;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.468704728596);
    msg.setSource(28885U);
    msg.setSourceEntity(130U);
    msg.setDestination(60756U);
    msg.setDestinationEntity(27U);
    msg.original_source = 63266U;
    msg.destination = 60447U;
    msg.timeout = 0.955118853919;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.036302934061;
    tmp_msg_0.width = 0.316676465523;
    tmp_msg_0.length = 0.206400589368;
    tmp_msg_0.bearing = 0.311116176052;
    tmp_msg_0.pxl = -29373;
    tmp_msg_0.encoding = 113U;
    const char tmp_tmp_msg_0_0[] = {-27, -60, 19, -46, -16, -112, -73, -128, -13, -18, 62, -71, 29, 50, 67, -65, 19, 97, -40, 48, 61, 24, 107, 33, 50, -12, -64, 55, -114, -98, 39, -26, 29, -65, -75, -70, -112, -119, -90, 46, -101, -11, 105, 49, 52, 100, -107, -5, -16, 82, -55, 32, 51, 24, 108, -128, 51, 86, -10, 10, -40, 55, 1, 100, 81, -90, 118, -71, -86, -12, -26, 14, -12, -45, -14, 126, 71, -73, 48, 57, 37, -9, -82, -118, 65, 59, -112, 81, 93, 123, 64, -107, 19, 104, -88, -40, -1, -46, 38, 80, 106, 57, -30, 8, -67, -117, 14, 13, -89, -41, -118, 16, -21, 47, 63, -16, 14, 31, 91, -64, -81, -83, -110, -81, 53, -12, 38, -68, 12, -60, -77, 19, 29, 94, -29, -55, -56, 66, -69, -81, -52, -59, 10, -70, 19, -11, -88, 3, 43, -26, 97, 43, -86, 87, 67, 34, 77, -29, -7, -21, -71, -42, 30, -106, 98, -74, 49, -19, 60, 51, -5, 80, 72, 17, -8, 95, 6, 121, -5, -63, 75, -43, 60, -16, -61, -41, -46, 76, 109, -51, -45, -79, -21, 54, -82, -124, -66, -9, 95, 17, 51, -27, -74, -7, 52, 105, -125, 13, 36, 0, 0, 88, 87, -45, 1, -29, 36, -45, 104, 125, -14, -63, 37, 1, -76, 60, -43, -16, -1, -122, 9, 42, -92, 74, -79, 95, -34};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.688153881092);
    msg.setSource(58159U);
    msg.setSourceEntity(43U);
    msg.setDestination(10122U);
    msg.setDestinationEntity(4U);
    msg.original_source = 20335U;
    msg.destination = 63557U;
    msg.timeout = 0.801326604117;
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BASVWRCUTNIHITODQRGVVWOJFCQYZTTVEEBMVFMADNSDMIMHZCSREYAYSBNOCKKUVXMAJNLWIBYYTZUYHEZIJDHOUWLNPWQZCIGDKCYHXHIFQAZIEOCLFTOJKQOZLGNDJDOTGWTKUSACLMEUBKHEZRBSNXGKRJGFFSKOSTJDVOWPNXQHXQCH");
    tmp_msg_0.predicate.assign("XCAFZHDQCJRJLKHIKGXLXXGEVMHNGOGGUUQRDPPNHKJNPCMAWMSAWOPQYTKDSJZUCHYPBDPRKIURSAOHALBSBJIGFXYKEWSOYKFOBINBLYIDEFEGETAXTRRGXSFYTCDZZNOESDJWUXTAZGMTGWYWPNRMSYFMDMDLLVBKZCLWFHCVAVUPTEZHBOCFQPPVMWKSVQQTE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QGPCJJCTEQCCBMDDAXWJUVIXNQVKIOFDBYGLFIZUFDVPGFPJITKULHJOWBWWLHOYYSMYCEBYOMNGGSDYOITRNZLVXTESKMKCQCUEZCHLBKZRSCNAXZGBUHRENBLQBMJSVXZRLKAXHZDVEKYFRPMFUJAP");
    tmp_tmp_msg_0_0.attr_type = 98U;
    tmp_tmp_msg_0_0.min.assign("VPYDDXRLXECPIPLGNCAHERILUJX");
    tmp_tmp_msg_0_0.max.assign("FCSGUPSSLPYHMWFDBNFRYRWPTVKVOZVNYKNKWJUYXAWDIDXRDMMRNWDUBFNYCMAPEPAAOZLIVFYGSZMASMQJHCPMXBNWZAQJLIZWSIKUOLSNXEQKHBMZIHHRJLYOIQGQTTVAHYXDPLGNOJXUXUFRQYRVIPSLHEGPGDQEJJFLPNLBHQSTRJWBZVEOOGATOETETCQBHLYACKSFGCMUOUCUIZBUNBVJZRECIKBXD");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0832183652217);
    msg.setSource(51158U);
    msg.setSourceEntity(17U);
    msg.setDestination(50899U);
    msg.setDestinationEntity(230U);
    msg.original_source = 13858U;
    msg.destination = 50079U;
    msg.timeout = 0.97206304276;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.786273429737;
    tmp_msg_0.lon = 0.0680991918627;
    tmp_msg_0.z = 0.743502091804;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.radius = 0.0365141307361;
    tmp_msg_0.duration = 48142U;
    tmp_msg_0.speed = 0.323137506562;
    tmp_msg_0.speed_units = 135U;
    tmp_msg_0.custom.assign("QFZQGIBTHDQNCRRWVCTEKOTEWGKCISTPJJWNGHPRHXRZWNURCNBGQOUQDGLDGYTVFIJAIFZFEXRYGGSNVFVTIPBHMLSPDMVKAZFOWNDIYQZMICULFNBXHVWQEEJJ");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.0944180837559);
    msg.setSource(14221U);
    msg.setSourceEntity(181U);
    msg.setDestination(27765U);
    msg.setDestinationEntity(181U);
    msg.type = 154U;
    msg.comm_interface = 43776U;
    msg.model = 26464U;
    msg.list.assign("HURXCLMVBOEZIQRQWAMWRPPGVYHNTFMQNTLPEBCPSJEJXOAQEOIMKZTLIQIOEHONRORUBHHLITYQYTRCNTLWMDFFSVFRQZEEPGOKSJEPQCDMXFRBCTJHSAUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.927189658544);
    msg.setSource(14520U);
    msg.setSourceEntity(34U);
    msg.setDestination(50869U);
    msg.setDestinationEntity(114U);
    msg.type = 6U;
    msg.comm_interface = 50509U;
    msg.model = 2310U;
    msg.list.assign("GKWSCRWTHUZKCKOBCDWWTSAXPPLRMUNMNAUKTBXBEOBIGXYORUYHDNMHPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.159384612012);
    msg.setSource(17452U);
    msg.setSourceEntity(95U);
    msg.setDestination(55756U);
    msg.setDestinationEntity(246U);
    msg.type = 113U;
    msg.comm_interface = 4839U;
    msg.model = 48893U;
    msg.list.assign("XFOSGVNAFRJYMEXOLQXIXMYWCZWZSDLYLIJBDORFZPNDMTWJNYSFTIGKTFMAVASZCEVDEHWOIVWNPYBIZDUFHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.0745017354216);
    msg.setSource(49513U);
    msg.setSourceEntity(81U);
    msg.setDestination(29233U);
    msg.setDestinationEntity(139U);
    msg.type = 46U;
    msg.req_id = 349755039U;
    msg.ttl = 62934U;
    msg.code = 241U;
    msg.destination.assign("PQNJODYEOGISKUSFCYIDRJGSTYAIRHNPSKBTEEVQDEJWAMLQWZKYFHCFTVBLMZFGOCRQVDBWIYWJKPCXXNDWJXANRGLOCOZAOTAWSTPOLCPSLHWABPZUCCHNMKQRRALLDVCTSMRVLSTMJQYABGOZEFUDHXRYNEATYIDLETQJFULRJVUBVNHIWBVFBMZGZQMWXYUKBGMEPEXXQNFGWFMOUIOJHRUPHXZMUBKXIVNKHFQYPPCKXIDZAKGUD");
    msg.source.assign("WXTPOCVJKDLOAHPJIJAXGYUSQHVZGVQISDNMRUKPOQEICQNDJIFXCFCZUCLZULLUABXWYPUEPWFHTHJKBBRITYGIYNZKOSGAEWAOAMONGVRDJNVAOYQMERFQSGEDCWANXLPELLYQRJPBXZTHNSFUVOZWTMLYTSBZLUEOYVV");
    msg.acknowledge = 68U;
    msg.status = 199U;
    const char tmp_msg_0[] = {16, 49, 27, 39, 44, 26, 75, 24, 50, -126, 55, -89, 13, 71, 72, -33, -97, -93, -34, -47, 52, 102, -81, 34, -84, -81, 45, 4, -64, 101, -120, 79, 125, 29, -109, -93, -22, -71, 86, 82, 37, -74, 25, 101, 74, 81, -113, 74, 45, 69, -3, -100, -65, -7, 9, 122, -113, 82, -38, 119, -63, -47, 65, 70, 52, 87, -26, -63, 116, -108, 54, 100, 21, 58, 126, 124, 87, 70, -125, -105, -73, 46, 22, -90, 55, -75, -97, 12, -100, -44, 74, -81, -8, 28, 10, 110, -122, -70, -4, -81, 85, -120, -123, -30, -7, 68, 124, -33, 48, -3, -34, -88, 33, -92, -74, 89, -28, -96, -63, -49, -73, -6, 31, 125, -100, -116, -84, 65, 90, -52, -86, -55, 22, 52, 124, -114, 98, -102, -96, -64, -124, 64, -101, 108, -95, 74, 105, 97, -98, -123, 28, -42, 88, -46, 41, -89, -74, -60, 3, -73, 53, -103, -39, 10, 70, -118, -34, 17, -57, -89, -60, 43, 32, 92, -74, 33, 67, -127, 51, 0, -45, -55, 120, -55, 78, -100, -100, -118, -71, -18, -10, -89, -84, -66, -125, 42, 94, -104, -65, -103, 98, 113, 91, -112, 77, 51, 108, -92, -108, 23, 6, -111, -2, 41, 69, 64, 117, 97, 118, 122, -78, -44, -3, -35, -101, 11, 87, 125, -88, 92, -44, 124, 36, 103, 32, 60, -28, -58, 88, -76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.0978429049357);
    msg.setSource(34385U);
    msg.setSourceEntity(88U);
    msg.setDestination(10388U);
    msg.setDestinationEntity(178U);
    msg.type = 36U;
    msg.req_id = 3921781481U;
    msg.ttl = 46553U;
    msg.code = 166U;
    msg.destination.assign("QHDIUTKZHRRIYXDNWFTWBFNJJDEMRUCDXNMEJYNLXUNVAPCNLGDWCFYKPUWXHWMIUDGAEOPWLWHQGDCRJTBLSICSKOIL");
    msg.source.assign("TFBTTNHCCPPXGCHHTZAGILSOPKDPMTZLGCWNKCZCUMDSBOHYORLEZKFVTWRJLIXUUOZTMFODMKWVKUYBKJQLCLNVHBZUEWDYIKVQTIZAYNWYTJDSMVTUXMRQEEGSAFAJWMRAGNAUQLBJLPPFQCAXFELUDNHOPOWOWSEPMADZXWGVJSXCKHKGZSDHQIFFBIRAZSFVIYBBRNYXRIBVEXJXILJQFIRNCUPDGAPGSWQHNMEERUQ");
    msg.acknowledge = 33U;
    msg.status = 85U;
    const char tmp_msg_0[] = {-71, 74, 77, 11, -75, -52, 19, -30, -60, 86, 106, 45, 101, 80, -75, 4, -63, -118, -51, 33, 96, 24, 121, -82, -40, 77, -10, 125, -85, -125, -6, -31, -62, 5, 49, 111, -50, 32, -7, -101, -14, 59, -54, -34, 61, -42, -32, 40, 13, -83, -117, -9, 72, -95, 54, 55, -23, 1, -90, -43, 79, -111, -25, 101, 33, 47, -88, 71, 17, -37, -102, 56, -128, -33, 9, -58, -13, -49, -9, 34, 102, -126, 33, -14, 106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.542214401397);
    msg.setSource(42869U);
    msg.setSourceEntity(250U);
    msg.setDestination(37147U);
    msg.setDestinationEntity(4U);
    msg.type = 206U;
    msg.req_id = 2975604646U;
    msg.ttl = 11805U;
    msg.code = 135U;
    msg.destination.assign("KYZQKZHXYALMWRXPJLUCPUHYHBUWPNZCISSICYQPDEXZOWGJRAAYYJHSEDUNULGIOLZNTOULUFIJVBSRTBFQSVFBEPZZOVGXMGWXGWFIKQFZOVJSIDDJRQTCRJKEFXKDSQJYQCMBHKLOMXDPHMRCOHKNVMHBCNJGDVDRUAZVNTWKWTGBIAAKY");
    msg.source.assign("COQKZYWXNKRYPWEPSXMCEKDOIQPJDRLKOSVTAXROMSCEMEZOURPEQFFBEIBJQZZPCEHKTTYULJRHUHHZDYGPFHNUKNWVBJMNDXXSOOQCDLVNAGRIOFDGBFXBHSHABVEUYJAUWEVZAZWSDPIQGKNCKFNIPAPTEONMDMLWXWWBGCDIASJXQXQMSYHGQGNVRYJVOCNTLLTUJMRUHWKYIQCSBJ");
    msg.acknowledge = 235U;
    msg.status = 109U;
    const char tmp_msg_0[] = {50, 30, 20, -109, 33, -1, -7, -108, -116, 69, -23, 107, 36, -124, -8, -54, -89, 43, 110, 79, -88, 106, 108, 80, -18, -68, -77, -99, -33, -76, -114, -49, -14, -38, 27, -77, -110, -79, 72, 125, 3, -31, 83, 41, 35, 4, -127, 75, -11, 69, 61, -42, -77, 120, 105, 45, -62, 102, -30, -110, -94, -40, -28, -99, -71, 46, 48, -69, -48, -82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.85348538491);
    msg.setSource(54566U);
    msg.setSourceEntity(236U);
    msg.setDestination(46458U);
    msg.setDestinationEntity(251U);
    msg.id = 202U;
    msg.range = 0.683076363165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.136445181387);
    msg.setSource(1572U);
    msg.setSourceEntity(6U);
    msg.setDestination(60178U);
    msg.setDestinationEntity(225U);
    msg.id = 210U;
    msg.range = 0.297490315309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.307765471365);
    msg.setSource(17507U);
    msg.setSourceEntity(182U);
    msg.setDestination(50592U);
    msg.setDestinationEntity(163U);
    msg.id = 13U;
    msg.range = 0.555868407432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.848474481468);
    msg.setSource(18590U);
    msg.setSourceEntity(31U);
    msg.setDestination(4973U);
    msg.setDestinationEntity(42U);
    msg.beacon.assign("ANAGWVJMMBPNNVYOSKRMWZSASDAJLKDBOWDUXINTCZHSEFHTYLSFULTHHTOVFSFDNCIEWFWNTGOGFXMUWIKJBMTCHQSJPXXRIXRTRVIGAXDQAEYAUJCCUWIYQMYMWSFEAPGZNKJLREUZPYNVXRQUQPRVWSRBGCRMLMPLZHHCIOXKZPKQTIECTQAPOAOBXMGGEJYDKJWDZ");
    msg.lat = 0.751559869179;
    msg.lon = 0.720575480063;
    msg.depth = 0.940185815517;
    msg.query_channel = 194U;
    msg.reply_channel = 80U;
    msg.transponder_delay = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.66923366488);
    msg.setSource(42914U);
    msg.setSourceEntity(228U);
    msg.setDestination(34882U);
    msg.setDestinationEntity(200U);
    msg.beacon.assign("ZMQYZCNGWTXIJIUKBDLZBRCTVAOVCOWVPZXIPROBGXLEISVQAKOSFHVGEEVTGLHYJGHGSMNHKTODXIFSMXYSBPHI");
    msg.lat = 0.113276355615;
    msg.lon = 0.352887265702;
    msg.depth = 0.315742372925;
    msg.query_channel = 112U;
    msg.reply_channel = 60U;
    msg.transponder_delay = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.342622175026);
    msg.setSource(20067U);
    msg.setSourceEntity(76U);
    msg.setDestination(61403U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("HGDBYZGWHYAYZDCWRNNQQEUSXVVDNDOVSNMNFHT");
    msg.lat = 0.843689901352;
    msg.lon = 0.150398800626;
    msg.depth = 0.157757332087;
    msg.query_channel = 168U;
    msg.reply_channel = 103U;
    msg.transponder_delay = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.838971791246);
    msg.setSource(49405U);
    msg.setSourceEntity(155U);
    msg.setDestination(17484U);
    msg.setDestinationEntity(24U);
    msg.op = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.210868020269);
    msg.setSource(15446U);
    msg.setSourceEntity(240U);
    msg.setDestination(30057U);
    msg.setDestinationEntity(90U);
    msg.op = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.875786296208);
    msg.setSource(46005U);
    msg.setSourceEntity(76U);
    msg.setDestination(42205U);
    msg.setDestinationEntity(232U);
    msg.op = 43U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JBKPXHLGRREGMLKAEAUIBVIUYHMNTFXSFKWEGZUYUCQJJIHNHXYPEDBKTZBOHFOJWQAARUGQRWDKMMPWBBCWTNYNQZWKYZPUZZIEAHV");
    tmp_msg_0.lat = 0.508718096932;
    tmp_msg_0.lon = 0.245499296826;
    tmp_msg_0.depth = 0.581515013773;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 219U;
    tmp_msg_0.transponder_delay = 183U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.193000161733);
    msg.setSource(43990U);
    msg.setSourceEntity(180U);
    msg.setDestination(64239U);
    msg.setDestinationEntity(119U);
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 223U;
    tmp_msg_0.x = 974U;
    tmp_msg_0.y = 7443U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0789207968981);
    msg.setSource(43048U);
    msg.setSourceEntity(159U);
    msg.setDestination(44824U);
    msg.setDestinationEntity(183U);
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 23588U;
    tmp_msg_0.type = 214U;
    tmp_msg_0.utc_year = 3670U;
    tmp_msg_0.utc_month = 64U;
    tmp_msg_0.utc_day = 57U;
    tmp_msg_0.utc_time = 0.0622917701865;
    tmp_msg_0.lat = 0.50017009468;
    tmp_msg_0.lon = 0.834173311724;
    tmp_msg_0.height = 0.82444903775;
    tmp_msg_0.satellites = 11U;
    tmp_msg_0.cog = 0.311108290576;
    tmp_msg_0.sog = 0.0663688865831;
    tmp_msg_0.hdop = 0.375603748464;
    tmp_msg_0.vdop = 0.792036961123;
    tmp_msg_0.hacc = 0.896468738909;
    tmp_msg_0.vacc = 0.678384159978;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.814200187633);
    msg.setSource(2455U);
    msg.setSourceEntity(154U);
    msg.setDestination(26771U);
    msg.setDestinationEntity(23U);
    IMC::TrexCommand tmp_msg_0;
    tmp_msg_0.command = 234U;
    tmp_msg_0.goal_id.assign("HAWHAILQSFJWMCRBPFZMDBVQRWOBLDVDGXNEDQCEMOUMOHOUWXFOZYQMERWKZCBUDVTQHUXVUSSTCBMJKMNKJMJXCNGPKRRHZSEAHHLYJYJENAGTDDBENPVKQPCKFINIISFLQPGDYUSGIWPSTKPWZHFGZVBGTSDKARRAYOOXJNJAYRFLNQKIFKXFLILTQCPEHTGLWEGSAUQPMDVEXBMULYXXVR");
    tmp_msg_0.goal_xml.assign("UFWHAMACOPJCMTJWJN");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.49739865356);
    msg.setSource(16877U);
    msg.setSourceEntity(164U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(174U);
    msg.op = 145U;
    msg.system.assign("WLXXORVWOLVKPFGJUZVGZDEEGDGBMHWQNTAZSVA");
    msg.range = 0.431361990516;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.833075782613;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0842067951379);
    msg.setSource(1581U);
    msg.setSourceEntity(33U);
    msg.setDestination(46322U);
    msg.setDestinationEntity(170U);
    msg.op = 69U;
    msg.system.assign("KAFOLPKZAVMODRGMARSQWRLYYWKUXV");
    msg.range = 0.0248863922317;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 138U;
    tmp_msg_0.htime = 0.271017524538;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 162U;
    tmp_tmp_msg_0_0.htime = 0.881539741418;
    tmp_tmp_msg_0_0.context.assign("QTAPGMMVILFNTZMVJTYHNVKVGAPYRQKXHTQWWDIQDOLKPRLEDOLGNAEMYKIZROFDWCHMIEPJWIQHBYMXDZZZQGPPJSEFHUSQASHJLEWVZEJGVHHGDNRGSUCCKUIFMPOEVOVBWYAXJBTNFUNYPOOFXPNIZILAH");
    tmp_tmp_msg_0_0.text.assign("HHDXUIKYKXRKJSQEBGAIRQOIAZDSBTAKWPCTRWPRQDAEYSMFBQ");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.529941686928);
    msg.setSource(31943U);
    msg.setSourceEntity(123U);
    msg.setDestination(35741U);
    msg.setDestinationEntity(177U);
    msg.op = 158U;
    msg.system.assign("FTZVFSSNAYXKMVOUXWVCGJHYMJGRRUMDLLDJIMSBENQJZOTVWIHTOYSPLMICUJLHGPCTSQSAOOHDIHKACTDDDKFJAJTZAPSEZUJGXGNWSQFKAOEWBOUZFNKIMWPAZIRKLBLWGYLVIPYROFFVYXGEDBVROKNEVBEWQECHDGPBXYNRKFIYQPLRDUTCBBRFQIWTPXXXJVTSRPNNCMCAIBZGWAU");
    msg.range = 0.585808558081;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2403422144U;
    tmp_msg_0.start_lat = 0.307407359804;
    tmp_msg_0.start_lon = 0.693046173996;
    tmp_msg_0.start_z = 0.259077185638;
    tmp_msg_0.start_z_units = 168U;
    tmp_msg_0.end_lat = 0.792162134345;
    tmp_msg_0.end_lon = 0.769125320107;
    tmp_msg_0.end_z = 0.347667696942;
    tmp_msg_0.end_z_units = 228U;
    tmp_msg_0.lradius = 0.383885205084;
    tmp_msg_0.flags = 183U;
    tmp_msg_0.x = 0.777092862347;
    tmp_msg_0.y = 0.274784690086;
    tmp_msg_0.z = 0.607148663851;
    tmp_msg_0.vx = 0.421404212052;
    tmp_msg_0.vy = 0.894666068572;
    tmp_msg_0.vz = 0.833064225151;
    tmp_msg_0.course_error = 0.312724764055;
    tmp_msg_0.eta = 31095U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.748482872946);
    msg.setSource(13921U);
    msg.setSourceEntity(49U);
    msg.setDestination(2269U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.622225528581);
    msg.setSource(28139U);
    msg.setSourceEntity(188U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(219U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.311008562111);
    msg.setSource(55330U);
    msg.setSourceEntity(125U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(64U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.0855262023624);
    msg.setSource(48096U);
    msg.setSourceEntity(157U);
    msg.setDestination(38288U);
    msg.setDestinationEntity(173U);
    msg.list.assign("TMNWELAJZOUHSWCVPJVWLQVVURYOUAQDPSHCYRTMUAHXPISOTUFJHPXQJQESWGFZFZTIVICOHCQDYTLHKGLNQGJNDXLCEMITAYSENKCMBRAJURKBMPQWMBVROTNOYXKGWIDBGXESUQUKIBNGGXAVTHPHFLOGJMECAZZNROYWYJEYYBWLIEGDPSPRMUBTKIZHJFAZCBEWFDPNRDDSGDWAQRJKMYXPLDSBAVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.684289040609);
    msg.setSource(41793U);
    msg.setSourceEntity(109U);
    msg.setDestination(22713U);
    msg.setDestinationEntity(33U);
    msg.list.assign("VSOOWOGBCIEATCMTEATKQCWPUHZYFFJMNHSTVHLPTKEYEWAQWJRALOWJFVCPFZOMGSVLKNTZHBJGCQZVQIQFHJLNVSGUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.929599751838);
    msg.setSource(8847U);
    msg.setSourceEntity(93U);
    msg.setDestination(46572U);
    msg.setDestinationEntity(116U);
    msg.list.assign("NEOAFLJLMLMKDUVALIOMTMHKYDLWCQAJNRXZICFHKKVLQYVBMOXRPHUFGXKAYIWKJQWLJDFRONGQRPJVTVNVBELOSZXCDEJNXIFOBVBCNMZUBECOBXQCTAEYZIPPWXIHSWBSHXTSTLMJTDNIEYWDPTSULFVRGWRABUGNUGBKNYYFZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.392052911099);
    msg.setSource(10771U);
    msg.setSourceEntity(28U);
    msg.setDestination(16680U);
    msg.setDestinationEntity(34U);
    msg.peer.assign("SWNURCYICKKKMMYASXURQJYDBBLXRAJQMZKSSDNLXGATRCMJBYGKKSMIFLIOCFMUMWHGJNVOSZZLRFTYADQOWPZGIDPTBZOMDSIHEKJQEOWYJTQXHVNCBRBUXWEEIJHKRXNCHMOWLPAHXKZLDZYCOTUGWVOPAOFDBBNMZTEQXPRFDYDCJAUPEGHIHPCAWPIPNF");
    msg.rssi = 0.790803688339;
    msg.integrity = 64355U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.522819997415);
    msg.setSource(6762U);
    msg.setSourceEntity(8U);
    msg.setDestination(50332U);
    msg.setDestinationEntity(220U);
    msg.peer.assign("EOJPZVSLFTDUJTBCEXPVMOEIFJGHAQDVDHRPNXBIIMDGVPCUNRHBFMZVGXQHJLKIQWTBXNHIEZNECVKDAUUCNATRBIHZFQOVOSHUISMPBLAYVOHOSSRBMEKYISQZGSWMCGEYQAXYTXNPLSKLRDRLMBWAUTWKWZQ");
    msg.rssi = 0.0685643516233;
    msg.integrity = 55503U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.365234628742);
    msg.setSource(12021U);
    msg.setSourceEntity(29U);
    msg.setDestination(464U);
    msg.setDestinationEntity(241U);
    msg.peer.assign("LGZVGBDJFXHKPJFGPHRTRUFXWAILTHHNAUTZARNAVVJHMKLYZUOIWCRJLYLCANUMXSZTXXQSBRWZCZIWIPUEQQDMMQRENVCICGIBEKVYFHSDPWENNHOJPSTYLUJAWKYTFROBHSRTSOIKMNPWXWLUPQMHKKQ");
    msg.rssi = 0.969959068811;
    msg.integrity = 7172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.107043181536);
    msg.setSource(5525U);
    msg.setSourceEntity(91U);
    msg.setDestination(62792U);
    msg.setDestinationEntity(44U);
    msg.req_id = 37179U;
    msg.destination.assign("HPGUHIWQDAILTAQXXTMPQXZAVWYLAKNQOGHJKMYQCHRVRKHTVDBARKKLUDYJOUNJNPLZFGYEEAQOYCJUUIMDGSFPHVQBIOVSFQDEKLZFQRBCCDBJBJRSMYBONVXGWPZZOCVEYYUSMIINZEPLPQMWXTMGYWSYTGUFNOITCGPWUZERFZX");
    msg.timeout = 0.475256442976;
    msg.range = 0.678310338138;
    msg.type = 217U;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.938924401029;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.645152347587);
    msg.setSource(17476U);
    msg.setSourceEntity(169U);
    msg.setDestination(20593U);
    msg.setDestinationEntity(28U);
    msg.req_id = 8588U;
    msg.destination.assign("JYMEABDUFVQKDGTVKSPKXMRZONAMSXGBVYCNWIQDYRYMBEYZUPLGZCTAOGNNYLWHWFTYDVNLTTJGJILUFELTYKVFSQWMICVULILVYNUUQKOMAZUBOMQMHADNHREXBKNFREFGPJQXEUYOACPOALKDJPIXUDZBLSWQOCXSSOKMSHWXNVAWOZFSIZBISTKCQCREGXRBTVXANFJDPHJIJRZWHIEUDPRZHKFATPGXDHTPMCJZ");
    msg.timeout = 0.170699293242;
    msg.range = 0.348709010587;
    msg.type = 10U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0413584096475;
    tmp_msg_0.beam_height = 0.230857643287;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.864970028193);
    msg.setSource(52898U);
    msg.setSourceEntity(69U);
    msg.setDestination(18483U);
    msg.setDestinationEntity(200U);
    msg.req_id = 59682U;
    msg.destination.assign("KNOZRKLYGLOTYZPIDVLEJKKPBHAQRVQVRGUOIPIICTMGKSQNPMKSSBQXCWIDQUMIZFOVLKLPQRLEXLXHRJRJUZGUQGZDCNRFEAILNFWSQWHDOQOOHTMBFTCHZMHJKEFKMYYWBAPOHKEWTJSJZGUBTAHXQWY");
    msg.timeout = 0.175426932449;
    msg.range = 0.302429564651;
    msg.type = 31U;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.916714566267;
    tmp_msg_0.width = 0.153777910348;
    tmp_msg_0.length = 0.607062534535;
    tmp_msg_0.bearing = 0.453241630498;
    tmp_msg_0.pxl = -31560;
    tmp_msg_0.encoding = 191U;
    const char tmp_tmp_msg_0_0[] = {-60, 18, -54, 115, 69, -76, 107, 114, -109, 63, -27, -117, -70, -55, 43, 58, 6, -63, -25, -122, -116, 26, -84, -48, 120, -69, 19, -43, 55, -51, 98, 121, 116, -46, -66, -113, -126, -112, -94, 45, -9, 45, 55, -65, -12, 15, -23, 25, 9, 86, -23, 39, 56, 113, -63, 16, 110, 106, 23, -127, 4, -17, -87, -15, 21, 0, 33, 93, 4, -26, -11, 121, -16, 10, -19, -88, -98, 83, 77, -92, -29, 69, -127, -80, 13, -65, -96, 107, -84, -4, -13, 50, 95, 25, 109, -119, -57, 95, -100, -60, -80, -68, -79, 17, 74, -38, 27, 126, -37, 70, 34, 5, 74, 8, 61, 1, -10, 54, 9, -20, -30, -99, -60, 119, -122, 50, -93, -56, -47, 22, 26, -57, 43, -98, -91, 76, 75, 104, -81, -103, -126, 15, -65, 40, -41, 30, 100, 50, 120, -25, -30, -108, 59, 115, -22, -92, -53, 15, -48, -124, 124, 84, 20, 49, 80, -107, -21, 75, -37, -114, 19, 106, 96, 92, 115, -18, 90, -6, 26, 119, 25, -57, 113, 26, -116, 20, 41, -60, 42, 105, 63, -51, -22, 95, -103, 14, -81, -97};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.353882263103);
    msg.setSource(54449U);
    msg.setSourceEntity(136U);
    msg.setDestination(19209U);
    msg.setDestinationEntity(8U);
    msg.req_id = 56660U;
    msg.type = 65U;
    msg.status = 120U;
    msg.info.assign("GUEDOHYHAUSPZNEDZWWILRHOMSVNEYVGKYJNTHKILYWDBHNRKLDSMGOFPOSBQKRZVWUABUXWJOSWBZALAIWTBVFFNEVZTBRDHNJPCVOGOFLVAUTBJSPITVHVGXBRXVXIIFQTTMKSJXCUMGJLGLKNISJOWYSEXPQIRQYKPZHFNNACYQBFYQPPNDCQCPEKZQFMOWHRAZDKIUTJPFEDXXAXCAJDB");
    msg.range = 0.0467249294945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.412069915839);
    msg.setSource(57748U);
    msg.setSourceEntity(42U);
    msg.setDestination(53144U);
    msg.setDestinationEntity(130U);
    msg.req_id = 25340U;
    msg.type = 6U;
    msg.status = 52U;
    msg.info.assign("BYRELUCULHTGQQONNBIVFGFBVBOPLVRRNIDQAPZUDXDJFAXSPZCWALCASZAYQFAGAFPPTXEXQGKITLYSQFSEVZHPOXFTQZYNFJKCSWHMCUEYLSXDVTDKBBQMFMZZDSHNBINPHXIGLOYZIHPWTRFWBMNJURUTZJIBJDJHEHRLYPEKWWNMRMEOBRJVDSCQOTEHOQJUNGVPNGTTWHKYYWOVJYKCXVDLCAAAOGCGVIKMXSMIXKUJUMMZDCRGWWLKE");
    msg.range = 0.407433860938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.35007793265);
    msg.setSource(22237U);
    msg.setSourceEntity(86U);
    msg.setDestination(49904U);
    msg.setDestinationEntity(148U);
    msg.req_id = 43713U;
    msg.type = 146U;
    msg.status = 220U;
    msg.info.assign("ICYGISPWZGAOWTUGFPHKUAMNUYWUPNFJYGUTWHSYKCIWMHPISVKGQZJTDOLIPHJAAEEMOOUWTVALZEXGWOZIXOXDNVRXPTZUGROSPFOGHMXVCVFZGFLRHXDQHCZNBKMLBBETSSMLON");
    msg.range = 0.416094547094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.872130736194);
    msg.setSource(37549U);
    msg.setSourceEntity(239U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(168U);
    msg.value = -28713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.302224805699);
    msg.setSource(55997U);
    msg.setSourceEntity(2U);
    msg.setDestination(13157U);
    msg.setDestinationEntity(127U);
    msg.value = 24368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.836802990571);
    msg.setSource(26170U);
    msg.setSourceEntity(68U);
    msg.setDestination(55230U);
    msg.setDestinationEntity(31U);
    msg.value = -16495;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.776946488956);
    msg.setSource(52226U);
    msg.setSourceEntity(23U);
    msg.setDestination(49383U);
    msg.setDestinationEntity(132U);
    msg.value = 0.0667268261394;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.524980589419);
    msg.setSource(14029U);
    msg.setSourceEntity(112U);
    msg.setDestination(60397U);
    msg.setDestinationEntity(70U);
    msg.value = 0.637821603763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.934557768524);
    msg.setSource(33162U);
    msg.setSourceEntity(117U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(169U);
    msg.value = 0.639633392695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.129245212013);
    msg.setSource(48064U);
    msg.setSourceEntity(44U);
    msg.setDestination(51047U);
    msg.setDestinationEntity(190U);
    msg.value = 0.720075802292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.190572965735);
    msg.setSource(1703U);
    msg.setSourceEntity(125U);
    msg.setDestination(16532U);
    msg.setDestinationEntity(100U);
    msg.value = 0.279846074274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.504130442956);
    msg.setSource(19948U);
    msg.setSourceEntity(192U);
    msg.setDestination(3280U);
    msg.setDestinationEntity(160U);
    msg.value = 0.512590903776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.278773118756);
    msg.setSource(34545U);
    msg.setSourceEntity(187U);
    msg.setDestination(27201U);
    msg.setDestinationEntity(9U);
    msg.validity = 63107U;
    msg.type = 210U;
    msg.utc_year = 63743U;
    msg.utc_month = 171U;
    msg.utc_day = 127U;
    msg.utc_time = 0.454004338348;
    msg.lat = 0.925935823374;
    msg.lon = 0.299527050445;
    msg.height = 0.133376396146;
    msg.satellites = 253U;
    msg.cog = 0.886840384828;
    msg.sog = 0.953131446481;
    msg.hdop = 0.680324003821;
    msg.vdop = 0.48129063112;
    msg.hacc = 0.86540714813;
    msg.vacc = 0.659975371071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.823044709101);
    msg.setSource(13890U);
    msg.setSourceEntity(85U);
    msg.setDestination(12729U);
    msg.setDestinationEntity(190U);
    msg.validity = 24536U;
    msg.type = 211U;
    msg.utc_year = 40887U;
    msg.utc_month = 170U;
    msg.utc_day = 12U;
    msg.utc_time = 0.357025266333;
    msg.lat = 0.335182600958;
    msg.lon = 0.755920182507;
    msg.height = 0.67324573749;
    msg.satellites = 237U;
    msg.cog = 0.849545362781;
    msg.sog = 0.10813560237;
    msg.hdop = 0.728635550104;
    msg.vdop = 0.967896147383;
    msg.hacc = 0.327600872213;
    msg.vacc = 0.735326304491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.0388781721466);
    msg.setSource(41099U);
    msg.setSourceEntity(144U);
    msg.setDestination(24088U);
    msg.setDestinationEntity(221U);
    msg.validity = 18929U;
    msg.type = 102U;
    msg.utc_year = 4990U;
    msg.utc_month = 57U;
    msg.utc_day = 105U;
    msg.utc_time = 0.803802046393;
    msg.lat = 0.456074290232;
    msg.lon = 0.0513516447631;
    msg.height = 0.450413335207;
    msg.satellites = 162U;
    msg.cog = 0.404607228728;
    msg.sog = 0.566779026397;
    msg.hdop = 0.349246296067;
    msg.vdop = 0.0061175124713;
    msg.hacc = 0.553691627431;
    msg.vacc = 0.0516939702072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.947391054727);
    msg.setSource(46570U);
    msg.setSourceEntity(46U);
    msg.setDestination(62964U);
    msg.setDestinationEntity(210U);
    msg.time = 0.780587319796;
    msg.phi = 0.501229122712;
    msg.theta = 0.541902973295;
    msg.psi = 0.258791442349;
    msg.psi_magnetic = 0.220008813591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.0892807487375);
    msg.setSource(37183U);
    msg.setSourceEntity(216U);
    msg.setDestination(15739U);
    msg.setDestinationEntity(118U);
    msg.time = 0.579144458558;
    msg.phi = 0.843130461674;
    msg.theta = 0.94999865893;
    msg.psi = 0.280577279873;
    msg.psi_magnetic = 0.0915419387935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.545930668558);
    msg.setSource(37316U);
    msg.setSourceEntity(206U);
    msg.setDestination(43786U);
    msg.setDestinationEntity(51U);
    msg.time = 0.847650948731;
    msg.phi = 0.45982190792;
    msg.theta = 0.334442764392;
    msg.psi = 0.630500961021;
    msg.psi_magnetic = 0.150101849436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.00333226559542);
    msg.setSource(23494U);
    msg.setSourceEntity(145U);
    msg.setDestination(54670U);
    msg.setDestinationEntity(190U);
    msg.time = 0.659028935224;
    msg.x = 0.746569319573;
    msg.y = 0.961511888719;
    msg.z = 0.357428336077;
    msg.timestep = 0.963568896383;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.677411729623);
    msg.setSource(48288U);
    msg.setSourceEntity(186U);
    msg.setDestination(56334U);
    msg.setDestinationEntity(238U);
    msg.time = 0.668738134715;
    msg.x = 0.709202490998;
    msg.y = 0.365963736906;
    msg.z = 0.273499048553;
    msg.timestep = 0.964956607555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.514806118026);
    msg.setSource(26519U);
    msg.setSourceEntity(26U);
    msg.setDestination(27823U);
    msg.setDestinationEntity(72U);
    msg.time = 0.68380260266;
    msg.x = 0.296839463613;
    msg.y = 0.385543714598;
    msg.z = 0.677354066767;
    msg.timestep = 0.0524117161413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.759636407027);
    msg.setSource(14053U);
    msg.setSourceEntity(135U);
    msg.setDestination(28976U);
    msg.setDestinationEntity(100U);
    msg.time = 0.371090238807;
    msg.x = 0.257028243506;
    msg.y = 0.682186900038;
    msg.z = 0.955848904687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.5807538392);
    msg.setSource(28378U);
    msg.setSourceEntity(143U);
    msg.setDestination(2139U);
    msg.setDestinationEntity(18U);
    msg.time = 0.0256446445827;
    msg.x = 0.416781618249;
    msg.y = 0.782315464968;
    msg.z = 0.718123873947;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.794082504377);
    msg.setSource(19194U);
    msg.setSourceEntity(243U);
    msg.setDestination(7124U);
    msg.setDestinationEntity(65U);
    msg.time = 0.421622346214;
    msg.x = 0.0544632552621;
    msg.y = 0.112710303934;
    msg.z = 0.24346413556;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.719029076303);
    msg.setSource(44771U);
    msg.setSourceEntity(142U);
    msg.setDestination(50271U);
    msg.setDestinationEntity(115U);
    msg.time = 0.529440545834;
    msg.x = 0.701796854623;
    msg.y = 0.971051985494;
    msg.z = 0.791073332524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.0666384868242);
    msg.setSource(15342U);
    msg.setSourceEntity(77U);
    msg.setDestination(23376U);
    msg.setDestinationEntity(160U);
    msg.time = 0.272405498236;
    msg.x = 0.279855107722;
    msg.y = 0.700901186435;
    msg.z = 0.915152233176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.773429085468);
    msg.setSource(8532U);
    msg.setSourceEntity(126U);
    msg.setDestination(63476U);
    msg.setDestinationEntity(164U);
    msg.time = 0.432908050625;
    msg.x = 0.511628014279;
    msg.y = 0.644564323335;
    msg.z = 0.194193750954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.855940916582);
    msg.setSource(2223U);
    msg.setSourceEntity(23U);
    msg.setDestination(39953U);
    msg.setDestinationEntity(26U);
    msg.time = 0.885120301171;
    msg.x = 0.33724177031;
    msg.y = 0.994737170973;
    msg.z = 0.908418914533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.308804183932);
    msg.setSource(55733U);
    msg.setSourceEntity(6U);
    msg.setDestination(65136U);
    msg.setDestinationEntity(107U);
    msg.time = 0.714667158625;
    msg.x = 0.88169833734;
    msg.y = 0.368100265235;
    msg.z = 0.988822609509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.00979423012361);
    msg.setSource(39577U);
    msg.setSourceEntity(207U);
    msg.setDestination(59343U);
    msg.setDestinationEntity(28U);
    msg.time = 0.338683533266;
    msg.x = 0.690677963906;
    msg.y = 0.0936137573915;
    msg.z = 0.185004939874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.420575777878);
    msg.setSource(51071U);
    msg.setSourceEntity(25U);
    msg.setDestination(52752U);
    msg.setDestinationEntity(215U);
    msg.validity = 196U;
    msg.x = 0.174712661869;
    msg.y = 0.472510493201;
    msg.z = 0.607415064875;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.692115293936);
    msg.setSource(36936U);
    msg.setSourceEntity(172U);
    msg.setDestination(44797U);
    msg.setDestinationEntity(138U);
    msg.validity = 177U;
    msg.x = 0.888491148036;
    msg.y = 0.175134405857;
    msg.z = 0.696625363038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.427905148169);
    msg.setSource(41860U);
    msg.setSourceEntity(30U);
    msg.setDestination(20454U);
    msg.setDestinationEntity(52U);
    msg.validity = 208U;
    msg.x = 0.146628241976;
    msg.y = 0.886759676312;
    msg.z = 0.176061560357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.593057462655);
    msg.setSource(59840U);
    msg.setSourceEntity(84U);
    msg.setDestination(1254U);
    msg.setDestinationEntity(247U);
    msg.validity = 157U;
    msg.x = 0.911955840067;
    msg.y = 0.984285991641;
    msg.z = 0.658511117319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.106619211495);
    msg.setSource(58340U);
    msg.setSourceEntity(115U);
    msg.setDestination(33191U);
    msg.setDestinationEntity(43U);
    msg.validity = 161U;
    msg.x = 0.259267844479;
    msg.y = 0.0198200723194;
    msg.z = 0.760065032722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.333016647882);
    msg.setSource(34213U);
    msg.setSourceEntity(57U);
    msg.setDestination(5903U);
    msg.setDestinationEntity(46U);
    msg.validity = 65U;
    msg.x = 0.533976578549;
    msg.y = 0.49598598935;
    msg.z = 0.560313567696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.105744190967);
    msg.setSource(40210U);
    msg.setSourceEntity(126U);
    msg.setDestination(39760U);
    msg.setDestinationEntity(73U);
    msg.time = 0.520278737065;
    msg.x = 0.0381409180385;
    msg.y = 0.951154831253;
    msg.z = 0.627812086627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.96026995763);
    msg.setSource(10702U);
    msg.setSourceEntity(23U);
    msg.setDestination(16888U);
    msg.setDestinationEntity(46U);
    msg.time = 0.685152855723;
    msg.x = 0.258312495027;
    msg.y = 0.869278991869;
    msg.z = 0.099378811745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.685150475317);
    msg.setSource(24515U);
    msg.setSourceEntity(219U);
    msg.setDestination(28817U);
    msg.setDestinationEntity(222U);
    msg.time = 0.219417484807;
    msg.x = 0.703377042225;
    msg.y = 0.0435350417035;
    msg.z = 0.834607679993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.765874771172);
    msg.setSource(38177U);
    msg.setSourceEntity(155U);
    msg.setDestination(41838U);
    msg.setDestinationEntity(34U);
    msg.validity = 90U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.308282197792;
    tmp_msg_0.y = 0.916846654014;
    tmp_msg_0.z = 0.331076234145;
    tmp_msg_0.phi = 0.930004663496;
    tmp_msg_0.theta = 0.170975301005;
    tmp_msg_0.psi = 0.999538288498;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.246851075802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.465060051093);
    msg.setSource(61297U);
    msg.setSourceEntity(195U);
    msg.setDestination(13316U);
    msg.setDestinationEntity(244U);
    msg.validity = 63U;
    msg.value = 0.354067265373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.0235263536684);
    msg.setSource(29067U);
    msg.setSourceEntity(44U);
    msg.setDestination(32269U);
    msg.setDestinationEntity(247U);
    msg.validity = 103U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.906345832846;
    tmp_msg_0.beam_height = 0.476295650213;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.745918414891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.905576096587);
    msg.setSource(18756U);
    msg.setSourceEntity(168U);
    msg.setDestination(24410U);
    msg.setDestinationEntity(172U);
    msg.value = 0.93261180168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.772805648578);
    msg.setSource(32747U);
    msg.setSourceEntity(208U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(37U);
    msg.value = 0.344181668555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.543853713649);
    msg.setSource(12056U);
    msg.setSourceEntity(106U);
    msg.setDestination(54228U);
    msg.setDestinationEntity(6U);
    msg.value = 0.65047787566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.711886092768);
    msg.setSource(13903U);
    msg.setSourceEntity(206U);
    msg.setDestination(18325U);
    msg.setDestinationEntity(90U);
    msg.value = 0.762064399614;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.143845957838);
    msg.setSource(28351U);
    msg.setSourceEntity(125U);
    msg.setDestination(50287U);
    msg.setDestinationEntity(109U);
    msg.value = 0.224843647183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.289198143709);
    msg.setSource(4524U);
    msg.setSourceEntity(125U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(11U);
    msg.value = 0.356504853348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.785242728424);
    msg.setSource(44119U);
    msg.setSourceEntity(164U);
    msg.setDestination(1814U);
    msg.setDestinationEntity(133U);
    msg.value = 0.744133918432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.372705461423);
    msg.setSource(42149U);
    msg.setSourceEntity(165U);
    msg.setDestination(40639U);
    msg.setDestinationEntity(196U);
    msg.value = 0.344474596393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.347645378481);
    msg.setSource(31687U);
    msg.setSourceEntity(159U);
    msg.setDestination(51364U);
    msg.setDestinationEntity(88U);
    msg.value = 0.63440404535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.213340214834);
    msg.setSource(25547U);
    msg.setSourceEntity(156U);
    msg.setDestination(31909U);
    msg.setDestinationEntity(233U);
    msg.value = 0.477295643482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.148119801458);
    msg.setSource(42970U);
    msg.setSourceEntity(95U);
    msg.setDestination(7489U);
    msg.setDestinationEntity(41U);
    msg.value = 0.0993695854646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.301500590136);
    msg.setSource(35375U);
    msg.setSourceEntity(81U);
    msg.setDestination(29467U);
    msg.setDestinationEntity(209U);
    msg.value = 0.552426736482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.928584118723);
    msg.setSource(11037U);
    msg.setSourceEntity(77U);
    msg.setDestination(18405U);
    msg.setDestinationEntity(232U);
    msg.value = 0.797031954299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.564316822025);
    msg.setSource(19057U);
    msg.setSourceEntity(96U);
    msg.setDestination(50848U);
    msg.setDestinationEntity(212U);
    msg.value = 0.738802177984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.00927319853578);
    msg.setSource(10216U);
    msg.setSourceEntity(152U);
    msg.setDestination(13280U);
    msg.setDestinationEntity(221U);
    msg.value = 0.770386082289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.990521871231);
    msg.setSource(30635U);
    msg.setSourceEntity(1U);
    msg.setDestination(59922U);
    msg.setDestinationEntity(103U);
    msg.value = 0.686037930496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.235734440109);
    msg.setSource(21039U);
    msg.setSourceEntity(90U);
    msg.setDestination(1848U);
    msg.setDestinationEntity(219U);
    msg.value = 0.458691701349;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.653496973581);
    msg.setSource(62034U);
    msg.setSourceEntity(226U);
    msg.setDestination(6039U);
    msg.setDestinationEntity(84U);
    msg.value = 0.456499715509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.156739419086);
    msg.setSource(27238U);
    msg.setSourceEntity(127U);
    msg.setDestination(1744U);
    msg.setDestinationEntity(62U);
    msg.value = 0.821497815486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.0806328593595);
    msg.setSource(33217U);
    msg.setSourceEntity(170U);
    msg.setDestination(59635U);
    msg.setDestinationEntity(184U);
    msg.value = 0.843499648238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.0134076465162);
    msg.setSource(3427U);
    msg.setSourceEntity(77U);
    msg.setDestination(10846U);
    msg.setDestinationEntity(110U);
    msg.value = 0.436108202738;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.611053337407);
    msg.setSource(9016U);
    msg.setSourceEntity(78U);
    msg.setDestination(38182U);
    msg.setDestinationEntity(171U);
    msg.value = 0.399849958369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.426931084324);
    msg.setSource(56336U);
    msg.setSourceEntity(229U);
    msg.setDestination(62270U);
    msg.setDestinationEntity(55U);
    msg.value = 0.721298491714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.561685643537);
    msg.setSource(49110U);
    msg.setSourceEntity(163U);
    msg.setDestination(37036U);
    msg.setDestinationEntity(2U);
    msg.value = 0.922051007937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.297776993699);
    msg.setSource(41798U);
    msg.setSourceEntity(148U);
    msg.setDestination(62633U);
    msg.setDestinationEntity(139U);
    msg.direction = 0.5129814069;
    msg.speed = 0.0261866990998;
    msg.turbulence = 0.776972929739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.126928394776);
    msg.setSource(62763U);
    msg.setSourceEntity(228U);
    msg.setDestination(12402U);
    msg.setDestinationEntity(179U);
    msg.direction = 0.438295095799;
    msg.speed = 0.424465961049;
    msg.turbulence = 0.0310171362095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.391875033282);
    msg.setSource(50580U);
    msg.setSourceEntity(1U);
    msg.setDestination(47287U);
    msg.setDestinationEntity(22U);
    msg.direction = 0.384419293572;
    msg.speed = 0.0508762172496;
    msg.turbulence = 0.152751455803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.21478232823);
    msg.setSource(22520U);
    msg.setSourceEntity(118U);
    msg.setDestination(61934U);
    msg.setDestinationEntity(148U);
    msg.value = 0.229761872982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.202212852594);
    msg.setSource(5153U);
    msg.setSourceEntity(126U);
    msg.setDestination(61033U);
    msg.setDestinationEntity(221U);
    msg.value = 0.682078044864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.934217332197);
    msg.setSource(39821U);
    msg.setSourceEntity(35U);
    msg.setDestination(24897U);
    msg.setDestinationEntity(112U);
    msg.value = 0.795995667995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.765032965403);
    msg.setSource(40019U);
    msg.setSourceEntity(207U);
    msg.setDestination(58946U);
    msg.setDestinationEntity(49U);
    msg.value.assign("HCEUJBMHFLJFUDZIBQOBAPMWBINTXJXQLTDISOQSNSTIFZMZSXUYGKIWTUZXHQPYJQFKUWSPHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.889471004556);
    msg.setSource(62181U);
    msg.setSourceEntity(55U);
    msg.setDestination(5362U);
    msg.setDestinationEntity(252U);
    msg.value.assign("YUDERGRTDKSJGBULIFXTQWXCSIBNGXMBVRHQOPSTCHRMPPXKLCMJLXYIWSPSTBYHIIFQTAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.160926874585);
    msg.setSource(56100U);
    msg.setSourceEntity(217U);
    msg.setDestination(58720U);
    msg.setDestinationEntity(199U);
    msg.value.assign("ABRILOBVMOKJIPKBISRBABGWCPSVVTUMNRRVWUPGXLHBFJZXERZXNDXDUKMKYOXLLMHGTDNYPALBTOJPNUNYFRNFFZQPDAOQPWXYOLBRAESRKCDVWVTQQJHDDHWTEKMCQCUOVJMUZJENLAMFUPLGQAJEKTQFMTNISP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.682371339075);
    msg.setSource(14887U);
    msg.setSourceEntity(97U);
    msg.setDestination(14782U);
    msg.setDestinationEntity(63U);
    const char tmp_msg_0[] = {23, -72, -16, -5, 74, -126, -25, -32, 112, -95, -59, -85, 78, -25, -81, 112, 123, -16, -19, -92, -25, 14, 28, 19, 43, -83};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.0897034190328);
    msg.setSource(49174U);
    msg.setSourceEntity(55U);
    msg.setDestination(34583U);
    msg.setDestinationEntity(179U);
    const char tmp_msg_0[] = {102, 113, 73, 34, 1, 9, 121, 114, -90, 30, 2, 99, 48, -100, -33, 38, -71, -52, 109, -89, 85, 16, 62, -63, -44, -5, 51, 2, 8, -14, -32, 57, 58, -116, 71, 69, 113, 22, -46, -17, 70, 120, -48, 81, -93, 12, 90, -105, -122, 60, -30, 98, 80, -111, 81, 51, -55, -3, -116, 5, 52, -113, -108, -13, -64, -11, -46, 123, -45, 20, -87, 23, -66, 3, -20, -12, 74, 122, 9, 72, 30, 65, -104, 117, -91, 100, -57, -119, -112, -57, -102, -31, 120, 120, 35, 117, 17, 6, -109, 2, -112, 58, -35, -109, 55, 84, 57, 33, 16, 19, -94, 103, -33, 100, -14, 62, -115, -103, -31, 34, 85, -101, -69, -102, -80, -112, -58, 111, -57, -15, 31, -56, -88, -46, 55, 15, 12, 119, 115, -14, -28, 118, 92, -69, -100, 13, 62, 88, 52, -105, -43, -20, 26, -13, 97, -39, -4, -106, 29, -35, -44, 65, 27, 35, -125, -37, 54, -48, 126, 48, -71, 108, -32, -100, 116, -89, -115, 126, -103, -9, 38, -76, 25, -77, -86, -115, -119, 85, -16, 25, -46, 14, -14, 24, -109, -4, -88, 78, -22, -79};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.542028559611);
    msg.setSource(29845U);
    msg.setSourceEntity(217U);
    msg.setDestination(31169U);
    msg.setDestinationEntity(52U);
    const char tmp_msg_0[] = {-67, 2, -16, 85, -1, -19, 103, 17, -14, -6, -42, 20, 25, -70, -102, 71, 3, 117, -86, -122, 73, -21, -102, 107, -55, -45, 114, -25, 30, -48, 75, 12, 94, 74, -128, -39, -91, 100, 115, -54, 76, -24, -6, -83, 24, -101, -83, 104, 86, -43, 109, -11, -120, -53, -39, -84, 54, -90, -107, -26, -55, 11, 75, -1, 83, -105, 33, -118, -43, 58, -89, 103, 0, 115, -109, 99, 126, 33, -31, -18, -46, -32, 6, -85, 20, 77};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.962556715949);
    msg.setSource(13520U);
    msg.setSourceEntity(182U);
    msg.setDestination(9326U);
    msg.setDestinationEntity(189U);
    msg.value = 0.920333621668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.00837466790792);
    msg.setSource(3113U);
    msg.setSourceEntity(183U);
    msg.setDestination(27336U);
    msg.setDestinationEntity(71U);
    msg.value = 0.935440698012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.349853663397);
    msg.setSource(10592U);
    msg.setSourceEntity(225U);
    msg.setDestination(64866U);
    msg.setDestinationEntity(158U);
    msg.value = 0.0619308905491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.350482122389);
    msg.setSource(59322U);
    msg.setSourceEntity(57U);
    msg.setDestination(55415U);
    msg.setDestinationEntity(113U);
    msg.type = 235U;
    msg.frequency = 2570528616U;
    msg.min_range = 1411U;
    msg.max_range = 44789U;
    msg.bits_per_point = 148U;
    msg.scale_factor = 0.993062733408;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.209700984919;
    tmp_msg_0.beam_height = 0.106597733498;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-100, -64, -105, -65, -62, 6, 16, -96, -73, 65, -38, 118, 12, -64, -41, 126, 101, 40, -29, -45, -43, 88, -96, 91, 68, 111, 4, 96, -72, 114, -14, -15, 45, -128, 89, -53, -117, -116, 66};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.713682892987);
    msg.setSource(30909U);
    msg.setSourceEntity(64U);
    msg.setDestination(671U);
    msg.setDestinationEntity(101U);
    msg.type = 59U;
    msg.frequency = 4112253391U;
    msg.min_range = 45926U;
    msg.max_range = 22888U;
    msg.bits_per_point = 156U;
    msg.scale_factor = 0.53581572154;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.33892626144;
    tmp_msg_0.beam_height = 0.556982790463;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-94, -37, -20, 12, -66, -50, -84, 16, -5, 81, 114, -114, 17, -1, -78, 48, -61, 77, 126, -122, -33, 31, -64, -35, 91, 31, 22, 20, 58, -69, 117, 59, -116, 31, -15, -52, -61, 31, -67, 70, 55, 100, -115, -45, -56, -99, 49, -11, 6, -62, 117, -125, 29, -75, 99, 79, 65, 8, -56, -53, 72, 20, -122, -11, -3, 85, 101, -35, 113, 9, -61, -101, -109, -92, 25, -91, 25, -55, 119, -75, 44, -99, 91, 64, -123, 25, -99, 52, 81, -30, -64, 25, 31, -1, 119, -59, -39, -22, 0, -37, 18, 60, -8, 17, 69, -111, -13, -17, 37, 28, -10, -127, -46, 75, 73, 20, 100, -71, -98, 0, -67, 100, 66, 109, -7, 0, 11, -124, 121, 39, 97, -75, 88, -3, -107, 7, -17, 1, -4, -82, -100, -81, 76, -19, 22, 91, -128, -82, 30};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.483943494856);
    msg.setSource(29855U);
    msg.setSourceEntity(132U);
    msg.setDestination(30266U);
    msg.setDestinationEntity(154U);
    msg.type = 40U;
    msg.frequency = 3344508823U;
    msg.min_range = 3367U;
    msg.max_range = 20323U;
    msg.bits_per_point = 10U;
    msg.scale_factor = 0.532349442259;
    const char tmp_msg_0[] = {-44, 36, 58, 62, -26, -9, -20, 106, -1, -113, -15, -14, 77, -24, 9, -80, 33, 46, 13, 98, -95, 46, -39, 27, 19, 109, -111, -94, 65, 74, -25, 65, -39, 92, -27, 41, -117, 110, -60, 72, 68, 74, 110, -125, 62, -110, 124, 3, -21, 62, 68, 117, -82, -83, 3, 112, 101};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.992936701162);
    msg.setSource(11539U);
    msg.setSourceEntity(25U);
    msg.setDestination(43678U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.0313417084619);
    msg.setSource(63906U);
    msg.setSourceEntity(176U);
    msg.setDestination(13185U);
    msg.setDestinationEntity(1U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.19364643796);
    msg.setSource(46110U);
    msg.setSourceEntity(76U);
    msg.setDestination(2743U);
    msg.setDestinationEntity(18U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.755107100692);
    msg.setSource(20113U);
    msg.setSourceEntity(134U);
    msg.setDestination(27241U);
    msg.setDestinationEntity(173U);
    msg.op = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.270059802351);
    msg.setSource(20209U);
    msg.setSourceEntity(89U);
    msg.setDestination(19854U);
    msg.setDestinationEntity(227U);
    msg.op = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.13838806058);
    msg.setSource(41912U);
    msg.setSourceEntity(25U);
    msg.setDestination(10475U);
    msg.setDestinationEntity(7U);
    msg.op = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.632324331419);
    msg.setSource(22407U);
    msg.setSourceEntity(183U);
    msg.setDestination(47251U);
    msg.setDestinationEntity(9U);
    msg.value = 0.597406721399;
    msg.confidence = 0.0228156403722;
    msg.opmodes.assign("NFIKLWSEWLTKPNNTLPADVBYRFSZODGANQRXNOMBQCCMATDERAKIUIRRPPDTFOVPPYPXXZRZUKSGKFKXVGBQXBDBPBZOKKYJEOJNTUMILECGPEGBSJFCDYBVIXSJHRQVZCGKWJYMYBDRTGYHVFUUCAEOWZUNTXNOEZTUWEQHLAMIMXZIRMVLUJAWLHSJEWHYQHGHAPDXMHGQWENCDTOLCCQGYIDSUBLOIJUQLAKMMTFSHXFFAOFCHWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.0742885521059);
    msg.setSource(4435U);
    msg.setSourceEntity(66U);
    msg.setDestination(642U);
    msg.setDestinationEntity(136U);
    msg.value = 0.931390740133;
    msg.confidence = 0.551401462912;
    msg.opmodes.assign("BPIVKJSCLMQZUGJWOQQDYKDXBODWMZDHRKZMPDISCJRJYFLO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.384329929634);
    msg.setSource(56326U);
    msg.setSourceEntity(57U);
    msg.setDestination(25304U);
    msg.setDestinationEntity(88U);
    msg.value = 0.739611253362;
    msg.confidence = 0.757613178517;
    msg.opmodes.assign("TPIKYWSFIRBGQSNUDHOLYKRMRCMKOKPHRYDVLBJJFLMASUCNECP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.800680643985);
    msg.setSource(61372U);
    msg.setSourceEntity(157U);
    msg.setDestination(27724U);
    msg.setDestinationEntity(245U);
    msg.itow = 3100934496U;
    msg.lat = 0.116487797053;
    msg.lon = 0.0117684283551;
    msg.height_ell = 0.502346001894;
    msg.height_sea = 0.669885798232;
    msg.hacc = 0.858826592159;
    msg.vacc = 0.780801197813;
    msg.vel_n = 0.910397743502;
    msg.vel_e = 0.543394884836;
    msg.vel_d = 0.486615715547;
    msg.speed = 0.869181934551;
    msg.gspeed = 0.8758564383;
    msg.heading = 0.836353758896;
    msg.sacc = 0.5384985455;
    msg.cacc = 0.671868686836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.828210933943);
    msg.setSource(23599U);
    msg.setSourceEntity(111U);
    msg.setDestination(42482U);
    msg.setDestinationEntity(61U);
    msg.itow = 775628002U;
    msg.lat = 0.369717066848;
    msg.lon = 0.733226198007;
    msg.height_ell = 0.548825365681;
    msg.height_sea = 0.187949465722;
    msg.hacc = 0.494958702691;
    msg.vacc = 0.994696167245;
    msg.vel_n = 0.224210658306;
    msg.vel_e = 0.625295443838;
    msg.vel_d = 0.582119937892;
    msg.speed = 0.0264180856343;
    msg.gspeed = 0.932616073407;
    msg.heading = 0.289795412985;
    msg.sacc = 0.601980171251;
    msg.cacc = 0.788014422858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.839255876554);
    msg.setSource(39246U);
    msg.setSourceEntity(76U);
    msg.setDestination(63146U);
    msg.setDestinationEntity(230U);
    msg.itow = 2205188598U;
    msg.lat = 0.479754350401;
    msg.lon = 0.0349237349971;
    msg.height_ell = 0.840282578303;
    msg.height_sea = 0.394754189839;
    msg.hacc = 0.509450757584;
    msg.vacc = 0.235653218159;
    msg.vel_n = 0.249784857781;
    msg.vel_e = 0.861617038031;
    msg.vel_d = 0.052334433985;
    msg.speed = 0.746708491987;
    msg.gspeed = 0.175862121102;
    msg.heading = 0.0559064371078;
    msg.sacc = 0.547245523054;
    msg.cacc = 0.783531476465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.429791049416);
    msg.setSource(27024U);
    msg.setSourceEntity(192U);
    msg.setDestination(59105U);
    msg.setDestinationEntity(120U);
    msg.id = 78U;
    msg.value = 0.110745704304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.711276346656);
    msg.setSource(40077U);
    msg.setSourceEntity(95U);
    msg.setDestination(32733U);
    msg.setDestinationEntity(19U);
    msg.id = 80U;
    msg.value = 0.681603933273;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.94439509872);
    msg.setSource(58291U);
    msg.setSourceEntity(237U);
    msg.setDestination(53845U);
    msg.setDestinationEntity(92U);
    msg.id = 186U;
    msg.value = 0.514906571266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.412849200685);
    msg.setSource(7667U);
    msg.setSourceEntity(21U);
    msg.setDestination(17798U);
    msg.setDestinationEntity(64U);
    msg.x = 0.987253131439;
    msg.y = 0.631359850907;
    msg.z = 0.800048861408;
    msg.phi = 0.0503365221085;
    msg.theta = 0.867503122292;
    msg.psi = 0.799319427193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.303314496232);
    msg.setSource(10266U);
    msg.setSourceEntity(23U);
    msg.setDestination(753U);
    msg.setDestinationEntity(133U);
    msg.x = 0.035721247081;
    msg.y = 0.293137376019;
    msg.z = 0.661956396834;
    msg.phi = 0.573951484632;
    msg.theta = 0.267717535971;
    msg.psi = 0.286432562382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.0791637889912);
    msg.setSource(22161U);
    msg.setSourceEntity(6U);
    msg.setDestination(49634U);
    msg.setDestinationEntity(24U);
    msg.x = 0.840330931402;
    msg.y = 0.740750764162;
    msg.z = 0.455313705036;
    msg.phi = 0.0588357566691;
    msg.theta = 0.0469814583209;
    msg.psi = 0.196574668308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.338817398281);
    msg.setSource(52912U);
    msg.setSourceEntity(160U);
    msg.setDestination(28787U);
    msg.setDestinationEntity(228U);
    msg.beam_width = 0.767222445334;
    msg.beam_height = 0.243192948142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.0328682098075);
    msg.setSource(40593U);
    msg.setSourceEntity(76U);
    msg.setDestination(15851U);
    msg.setDestinationEntity(30U);
    msg.beam_width = 0.618143967505;
    msg.beam_height = 0.0929456973951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.234736379659);
    msg.setSource(414U);
    msg.setSourceEntity(91U);
    msg.setDestination(54581U);
    msg.setDestinationEntity(14U);
    msg.beam_width = 0.942097178821;
    msg.beam_height = 0.936690962641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.904175684973);
    msg.setSource(24741U);
    msg.setSourceEntity(120U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(63U);
    msg.sane = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.215940822247);
    msg.setSource(62440U);
    msg.setSourceEntity(186U);
    msg.setDestination(18959U);
    msg.setDestinationEntity(4U);
    msg.sane = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.456530643685);
    msg.setSource(22406U);
    msg.setSourceEntity(232U);
    msg.setDestination(11958U);
    msg.setDestinationEntity(108U);
    msg.sane = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.323273531676);
    msg.setSource(45276U);
    msg.setSourceEntity(114U);
    msg.setDestination(7440U);
    msg.setDestinationEntity(242U);
    msg.value = 0.374156365164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.387738797264);
    msg.setSource(6015U);
    msg.setSourceEntity(123U);
    msg.setDestination(25648U);
    msg.setDestinationEntity(91U);
    msg.value = 0.769281143611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.320055835025);
    msg.setSource(63582U);
    msg.setSourceEntity(149U);
    msg.setDestination(46836U);
    msg.setDestinationEntity(123U);
    msg.value = 0.155884418073;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.563192366861);
    msg.setSource(43483U);
    msg.setSourceEntity(134U);
    msg.setDestination(52762U);
    msg.setDestinationEntity(194U);
    msg.value = 0.642232991069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.261395966007);
    msg.setSource(37085U);
    msg.setSourceEntity(103U);
    msg.setDestination(46923U);
    msg.setDestinationEntity(107U);
    msg.value = 0.895584399549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.994509344577);
    msg.setSource(43221U);
    msg.setSourceEntity(235U);
    msg.setDestination(41542U);
    msg.setDestinationEntity(15U);
    msg.value = 0.759665789364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.581768672395);
    msg.setSource(4744U);
    msg.setSourceEntity(93U);
    msg.setDestination(48916U);
    msg.setDestinationEntity(249U);
    msg.value = 0.0628023399106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.199553147339);
    msg.setSource(40783U);
    msg.setSourceEntity(106U);
    msg.setDestination(40970U);
    msg.setDestinationEntity(226U);
    msg.value = 0.507428754618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.674690111499);
    msg.setSource(17610U);
    msg.setSourceEntity(172U);
    msg.setDestination(42060U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0755301804158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.227916978686);
    msg.setSource(6441U);
    msg.setSourceEntity(44U);
    msg.setDestination(39017U);
    msg.setDestinationEntity(49U);
    msg.value = 0.371632619995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.876980332344);
    msg.setSource(43887U);
    msg.setSourceEntity(198U);
    msg.setDestination(61491U);
    msg.setDestinationEntity(73U);
    msg.value = 0.190280356983;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.183113132193);
    msg.setSource(18992U);
    msg.setSourceEntity(238U);
    msg.setDestination(45886U);
    msg.setDestinationEntity(236U);
    msg.value = 0.624556600699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.911667493962);
    msg.setSource(40736U);
    msg.setSourceEntity(74U);
    msg.setDestination(35311U);
    msg.setDestinationEntity(122U);
    msg.value = 0.112411810836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.23778925047);
    msg.setSource(22449U);
    msg.setSourceEntity(73U);
    msg.setDestination(50659U);
    msg.setDestinationEntity(172U);
    msg.value = 0.834644849373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.0851874550234);
    msg.setSource(12558U);
    msg.setSourceEntity(2U);
    msg.setDestination(44685U);
    msg.setDestinationEntity(241U);
    msg.value = 0.448679961084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.898878388994);
    msg.setSource(17567U);
    msg.setSourceEntity(25U);
    msg.setDestination(32978U);
    msg.setDestinationEntity(252U);
    msg.value = 0.181471967637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.0258247937995);
    msg.setSource(32589U);
    msg.setSourceEntity(39U);
    msg.setDestination(60827U);
    msg.setDestinationEntity(219U);
    msg.value = 0.927793745347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.251118027323);
    msg.setSource(19609U);
    msg.setSourceEntity(219U);
    msg.setDestination(53943U);
    msg.setDestinationEntity(212U);
    msg.value = 0.7612047864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.837713318524);
    msg.setSource(59464U);
    msg.setSourceEntity(131U);
    msg.setDestination(31723U);
    msg.setDestinationEntity(115U);
    msg.value = 0.514145608755;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.122148742684);
    msg.setSource(64632U);
    msg.setSourceEntity(119U);
    msg.setDestination(31868U);
    msg.setDestinationEntity(9U);
    msg.value = 0.682961913912;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.72605000954);
    msg.setSource(63243U);
    msg.setSourceEntity(107U);
    msg.setDestination(5263U);
    msg.setDestinationEntity(218U);
    msg.value = 0.840204546761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.0726024730776);
    msg.setSource(21133U);
    msg.setSourceEntity(175U);
    msg.setDestination(64445U);
    msg.setDestinationEntity(61U);
    msg.value = 0.38306954179;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.412372356386);
    msg.setSource(31387U);
    msg.setSourceEntity(214U);
    msg.setDestination(1382U);
    msg.setDestinationEntity(210U);
    msg.value = 0.0195419387275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.984075483653);
    msg.setSource(47761U);
    msg.setSourceEntity(161U);
    msg.setDestination(11092U);
    msg.setDestinationEntity(216U);
    msg.value = 0.521968483199;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.293861909443);
    msg.setSource(62450U);
    msg.setSourceEntity(147U);
    msg.setDestination(42721U);
    msg.setDestinationEntity(225U);
    msg.validity = 29788U;
    msg.type = 230U;
    msg.tow = 2884243831U;
    msg.base_lat = 0.458407127439;
    msg.base_lon = 0.275793988512;
    msg.base_height = 0.521020916225;
    msg.n = 0.761393916436;
    msg.e = 0.426312795548;
    msg.d = 0.551132812697;
    msg.v_n = 0.126017921398;
    msg.v_e = 0.54694253543;
    msg.v_d = 0.337404747231;
    msg.satellites = 117U;
    msg.iar_hyp = 49879U;
    msg.iar_ratio = 0.841604357441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.00175321480827);
    msg.setSource(5491U);
    msg.setSourceEntity(52U);
    msg.setDestination(24846U);
    msg.setDestinationEntity(85U);
    msg.validity = 45478U;
    msg.type = 49U;
    msg.tow = 3753396769U;
    msg.base_lat = 0.280233951627;
    msg.base_lon = 0.399096867893;
    msg.base_height = 0.292584728152;
    msg.n = 0.593401698727;
    msg.e = 0.0821173086252;
    msg.d = 0.516727841556;
    msg.v_n = 0.614400385353;
    msg.v_e = 0.516977554372;
    msg.v_d = 0.853280379403;
    msg.satellites = 11U;
    msg.iar_hyp = 12162U;
    msg.iar_ratio = 0.798791912392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.061843255211);
    msg.setSource(23367U);
    msg.setSourceEntity(87U);
    msg.setDestination(28767U);
    msg.setDestinationEntity(131U);
    msg.validity = 26083U;
    msg.type = 174U;
    msg.tow = 1066488004U;
    msg.base_lat = 0.867474165431;
    msg.base_lon = 0.0307878481021;
    msg.base_height = 0.595415756061;
    msg.n = 0.526792866179;
    msg.e = 0.970178475582;
    msg.d = 0.196787596899;
    msg.v_n = 0.291648278364;
    msg.v_e = 0.329157076654;
    msg.v_d = 0.310120100769;
    msg.satellites = 21U;
    msg.iar_hyp = 28597U;
    msg.iar_ratio = 0.204876358828;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.172277782229);
    msg.setSource(49634U);
    msg.setSourceEntity(42U);
    msg.setDestination(5328U);
    msg.setDestinationEntity(230U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.103050056642;
    tmp_msg_0.lon = 0.505632807292;
    tmp_msg_0.height = 0.734937518706;
    tmp_msg_0.x = 0.404963677147;
    tmp_msg_0.y = 0.125251314711;
    tmp_msg_0.z = 0.0916443916908;
    tmp_msg_0.phi = 0.557879142429;
    tmp_msg_0.theta = 0.057258904593;
    tmp_msg_0.psi = 0.949265067193;
    tmp_msg_0.u = 0.71326618403;
    tmp_msg_0.v = 0.508198168606;
    tmp_msg_0.w = 0.491923487783;
    tmp_msg_0.vx = 0.310025544162;
    tmp_msg_0.vy = 0.710628793301;
    tmp_msg_0.vz = 0.593230400308;
    tmp_msg_0.p = 0.611118233022;
    tmp_msg_0.q = 0.809388018113;
    tmp_msg_0.r = 0.547794477268;
    tmp_msg_0.depth = 0.957315887269;
    tmp_msg_0.alt = 0.439641671702;
    msg.state.set(tmp_msg_0);
    msg.type = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.874983165555);
    msg.setSource(14790U);
    msg.setSourceEntity(198U);
    msg.setDestination(10053U);
    msg.setDestinationEntity(200U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.821866881794;
    tmp_msg_0.lon = 0.061304941193;
    tmp_msg_0.height = 0.697751749556;
    tmp_msg_0.x = 0.349464142011;
    tmp_msg_0.y = 0.908596167676;
    tmp_msg_0.z = 0.268160423391;
    tmp_msg_0.phi = 0.895966627533;
    tmp_msg_0.theta = 0.036175542944;
    tmp_msg_0.psi = 0.907437024721;
    tmp_msg_0.u = 0.784987733009;
    tmp_msg_0.v = 0.98059230031;
    tmp_msg_0.w = 0.336576992224;
    tmp_msg_0.vx = 0.245265891811;
    tmp_msg_0.vy = 0.137197023767;
    tmp_msg_0.vz = 0.250847993089;
    tmp_msg_0.p = 0.816516350345;
    tmp_msg_0.q = 0.0682702225194;
    tmp_msg_0.r = 0.109005782867;
    tmp_msg_0.depth = 0.518598925777;
    tmp_msg_0.alt = 0.941605740238;
    msg.state.set(tmp_msg_0);
    msg.type = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.73643699778);
    msg.setSource(6552U);
    msg.setSourceEntity(114U);
    msg.setDestination(40335U);
    msg.setDestinationEntity(204U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.59433058916;
    tmp_msg_0.lon = 0.867727308243;
    tmp_msg_0.height = 0.302935372659;
    tmp_msg_0.x = 0.0649766577477;
    tmp_msg_0.y = 0.906799608461;
    tmp_msg_0.z = 0.850147988462;
    tmp_msg_0.phi = 0.567688470974;
    tmp_msg_0.theta = 0.049745997611;
    tmp_msg_0.psi = 0.973407659438;
    tmp_msg_0.u = 0.0682678823684;
    tmp_msg_0.v = 0.507316976123;
    tmp_msg_0.w = 0.765061387532;
    tmp_msg_0.vx = 0.23157119215;
    tmp_msg_0.vy = 0.226708274184;
    tmp_msg_0.vz = 0.854323117999;
    tmp_msg_0.p = 0.945684505716;
    tmp_msg_0.q = 0.780448469082;
    tmp_msg_0.r = 0.910560114106;
    tmp_msg_0.depth = 0.272581161161;
    tmp_msg_0.alt = 0.866431939166;
    msg.state.set(tmp_msg_0);
    msg.type = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.526541985241);
    msg.setSource(63066U);
    msg.setSourceEntity(17U);
    msg.setDestination(29597U);
    msg.setDestinationEntity(233U);
    msg.value = 0.503031343041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.103405456742);
    msg.setSource(14359U);
    msg.setSourceEntity(88U);
    msg.setDestination(27892U);
    msg.setDestinationEntity(164U);
    msg.value = 0.390470555774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.00686856734896);
    msg.setSource(48856U);
    msg.setSourceEntity(217U);
    msg.setDestination(22295U);
    msg.setDestinationEntity(245U);
    msg.value = 0.371434460523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.230266323428);
    msg.setSource(63269U);
    msg.setSourceEntity(239U);
    msg.setDestination(16990U);
    msg.setDestinationEntity(46U);
    msg.value = 0.615955143354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.517966117735);
    msg.setSource(59366U);
    msg.setSourceEntity(167U);
    msg.setDestination(58611U);
    msg.setDestinationEntity(119U);
    msg.value = 0.165554442653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.480109954522);
    msg.setSource(38475U);
    msg.setSourceEntity(230U);
    msg.setDestination(31028U);
    msg.setDestinationEntity(92U);
    msg.value = 0.365483945838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.961873387682);
    msg.setSource(51018U);
    msg.setSourceEntity(225U);
    msg.setDestination(39927U);
    msg.setDestinationEntity(0U);
    msg.value = 0.273192123106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.432624237768);
    msg.setSource(43921U);
    msg.setSourceEntity(134U);
    msg.setDestination(10836U);
    msg.setDestinationEntity(76U);
    msg.value = 0.705190845814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.286159018258);
    msg.setSource(33667U);
    msg.setSourceEntity(141U);
    msg.setDestination(22107U);
    msg.setDestinationEntity(178U);
    msg.value = 0.888974190142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.28575903815);
    msg.setSource(28163U);
    msg.setSourceEntity(39U);
    msg.setDestination(51620U);
    msg.setDestinationEntity(83U);
    msg.value = 0.418976699348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.816210077271);
    msg.setSource(38394U);
    msg.setSourceEntity(244U);
    msg.setDestination(17733U);
    msg.setDestinationEntity(139U);
    msg.value = 0.253523607989;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.470381017204);
    msg.setSource(33567U);
    msg.setSourceEntity(76U);
    msg.setDestination(58111U);
    msg.setDestinationEntity(34U);
    msg.value = 0.795857526465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.623823420152);
    msg.setSource(14444U);
    msg.setSourceEntity(58U);
    msg.setDestination(26399U);
    msg.setDestinationEntity(95U);
    msg.value = 0.441265256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.0140189834365);
    msg.setSource(36623U);
    msg.setSourceEntity(45U);
    msg.setDestination(52018U);
    msg.setDestinationEntity(200U);
    msg.value = 0.381803901864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.663502265264);
    msg.setSource(34809U);
    msg.setSourceEntity(61U);
    msg.setDestination(40779U);
    msg.setDestinationEntity(93U);
    msg.value = 0.432048477622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.989652191032);
    msg.setSource(38854U);
    msg.setSourceEntity(247U);
    msg.setDestination(48701U);
    msg.setDestinationEntity(44U);
    msg.id = 121U;
    msg.zoom = 191U;
    msg.action = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.039165418427);
    msg.setSource(50499U);
    msg.setSourceEntity(191U);
    msg.setDestination(17343U);
    msg.setDestinationEntity(142U);
    msg.id = 148U;
    msg.zoom = 44U;
    msg.action = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.534436276666);
    msg.setSource(8602U);
    msg.setSourceEntity(200U);
    msg.setDestination(6618U);
    msg.setDestinationEntity(63U);
    msg.id = 220U;
    msg.zoom = 171U;
    msg.action = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.718299935099);
    msg.setSource(24165U);
    msg.setSourceEntity(254U);
    msg.setDestination(63354U);
    msg.setDestinationEntity(157U);
    msg.id = 239U;
    msg.value = 0.210120795095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.40765127175);
    msg.setSource(48401U);
    msg.setSourceEntity(186U);
    msg.setDestination(1392U);
    msg.setDestinationEntity(173U);
    msg.id = 181U;
    msg.value = 0.555759427376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.397669310767);
    msg.setSource(33784U);
    msg.setSourceEntity(114U);
    msg.setDestination(11402U);
    msg.setDestinationEntity(117U);
    msg.id = 156U;
    msg.value = 0.274024834537;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.127210417633);
    msg.setSource(7157U);
    msg.setSourceEntity(50U);
    msg.setDestination(14737U);
    msg.setDestinationEntity(108U);
    msg.id = 65U;
    msg.value = 0.689328445795;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.669232353116);
    msg.setSource(29492U);
    msg.setSourceEntity(40U);
    msg.setDestination(50722U);
    msg.setDestinationEntity(134U);
    msg.id = 151U;
    msg.value = 0.117559678007;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.816447829569);
    msg.setSource(39574U);
    msg.setSourceEntity(241U);
    msg.setDestination(41088U);
    msg.setDestinationEntity(77U);
    msg.id = 203U;
    msg.value = 0.516528668136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.526295020093);
    msg.setSource(54658U);
    msg.setSourceEntity(57U);
    msg.setDestination(29533U);
    msg.setDestinationEntity(103U);
    msg.id = 85U;
    msg.angle = 0.702176889645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.365639673727);
    msg.setSource(63029U);
    msg.setSourceEntity(242U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(91U);
    msg.id = 82U;
    msg.angle = 0.663783687649;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.362293564482);
    msg.setSource(19303U);
    msg.setSourceEntity(25U);
    msg.setDestination(62413U);
    msg.setDestinationEntity(155U);
    msg.id = 13U;
    msg.angle = 0.543857773764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0232140436612);
    msg.setSource(12759U);
    msg.setSourceEntity(19U);
    msg.setDestination(64443U);
    msg.setDestinationEntity(170U);
    msg.op = 194U;
    msg.actions.assign("TGQELMHHBTOTNWNFTYNDRVWKDPJCRRGQQRLBBOBKCDVQKZJIIFXYEZPVKHJCAVSJCOUYZCUVXSFDUUUNLXTCUQHSGVEAGWEJSABWGBWCMOSVHIDJIWXDHWNNMLZEXOVOMKAYKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0348369902108);
    msg.setSource(49528U);
    msg.setSourceEntity(252U);
    msg.setDestination(26037U);
    msg.setDestinationEntity(150U);
    msg.op = 214U;
    msg.actions.assign("RHSIMAEIWTLXWGBJMUGWBULUNJXJUEHLFYSLCKVHXKVARFIQFFYOPQNBDIQDINMEEABIGZPZQSDDPGLMXJJDFPSAGCOHUBVOPOHFKDEVYCETIZTHVGAYGGPTFQOAWYNJYWMKKAMUKZOHOSMFWAVVLLCATBAIRFXOUESZLKXREXTVZRCNCUMDKZPRTW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.466233890387);
    msg.setSource(65178U);
    msg.setSourceEntity(169U);
    msg.setDestination(4981U);
    msg.setDestinationEntity(153U);
    msg.op = 178U;
    msg.actions.assign("ESCFCNTWDEFZBXBFKSIJTFRKECQIOCYHXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.271032872912);
    msg.setSource(33040U);
    msg.setSourceEntity(168U);
    msg.setDestination(36360U);
    msg.setDestinationEntity(15U);
    msg.actions.assign("OTSEJZMZJISAINTDRJNIEPCQGQUCRYYIPEQBXWUPFGLEUDZKFZHMZTKSEEKHYFLOMIBNWITJJLPLRDWOKTVHLCVZHHKNRSJUDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.109172414531);
    msg.setSource(62511U);
    msg.setSourceEntity(173U);
    msg.setDestination(45664U);
    msg.setDestinationEntity(181U);
    msg.actions.assign("GIXJTJOXQKWILRUNWEURHYJHORELSOTUJQTRPJANCNHDWXISRNKKCHHUEFPIZSXIVVMUGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0973068395927);
    msg.setSource(2827U);
    msg.setSourceEntity(43U);
    msg.setDestination(10098U);
    msg.setDestinationEntity(211U);
    msg.actions.assign("GQEXTDXBBSQLMAGEADADCFMUIONQGYWZQHWMYMIBRFXIFGLYEOTSPYSVJRYZPFPNKXVIQXWAMHJEVVYJYKANEMZRZKRLDBURUJTBBDGZQXLRLMZSPVOGHUWEZTAGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.787923592598);
    msg.setSource(57009U);
    msg.setSourceEntity(122U);
    msg.setDestination(23438U);
    msg.setDestinationEntity(193U);
    msg.button = 13U;
    msg.value = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.243558137484);
    msg.setSource(4879U);
    msg.setSourceEntity(81U);
    msg.setDestination(40018U);
    msg.setDestinationEntity(106U);
    msg.button = 117U;
    msg.value = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.726252512759);
    msg.setSource(55137U);
    msg.setSourceEntity(216U);
    msg.setDestination(44985U);
    msg.setDestinationEntity(31U);
    msg.button = 72U;
    msg.value = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.735449629128);
    msg.setSource(39662U);
    msg.setSourceEntity(14U);
    msg.setDestination(5795U);
    msg.setDestinationEntity(30U);
    msg.op = 174U;
    msg.text.assign("NGRRQSCBTMDRJUYGMDKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.909202278105);
    msg.setSource(44810U);
    msg.setSourceEntity(211U);
    msg.setDestination(546U);
    msg.setDestinationEntity(34U);
    msg.op = 90U;
    msg.text.assign("VJAMZWMNIBPGGYTKBQKBXIOHEPTWTSOMIXPOUOEEOIFJRPPXTLSTXDSCCZIUCJXOICZHHSGUGFCBFAVORJFEUWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.295926696535);
    msg.setSource(64931U);
    msg.setSourceEntity(178U);
    msg.setDestination(52086U);
    msg.setDestinationEntity(8U);
    msg.op = 251U;
    msg.text.assign("ZBYTYBZKUAMNUCOGLVWCVQJENPPFTQKZHFTPVFFGGLAJORQZREEERQXVFWNIQJQTNJINXRIBOPWYSQTOLZWWSKJPYHSHIPOGVAJOPWCFHKLLXCKVWEBFWIIZGSTVMGHCGXAWBNCMXXZTVGHQAUEKRUXZSAXJHTYXYARLSHDULDDUOEPDCIDJKGZECMIAIBQVNMNBDMDILXRARWGYUNQMFNTSJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.903112629719);
    msg.setSource(42382U);
    msg.setSourceEntity(175U);
    msg.setDestination(22961U);
    msg.setDestinationEntity(28U);
    msg.op = 67U;
    msg.time_remain = 0.613303706707;
    msg.sched_time = 0.859003022774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.880677459156);
    msg.setSource(49408U);
    msg.setSourceEntity(87U);
    msg.setDestination(56042U);
    msg.setDestinationEntity(118U);
    msg.op = 219U;
    msg.time_remain = 0.808635392477;
    msg.sched_time = 0.216136341717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.30003780123);
    msg.setSource(8519U);
    msg.setSourceEntity(245U);
    msg.setDestination(35309U);
    msg.setDestinationEntity(69U);
    msg.op = 125U;
    msg.time_remain = 0.798641585577;
    msg.sched_time = 0.627891992169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.844033845065);
    msg.setSource(33738U);
    msg.setSourceEntity(79U);
    msg.setDestination(40318U);
    msg.setDestinationEntity(94U);
    msg.name.assign("XUYLGMCXSXMHWCXUMCDLMFWAVJLHKUGXTRTFULFXXQWACCULLSMZDRGFXRKAIKTZLYTHJOYEINKPPVHYKMIIVOTZRDKUSOAVVNFWIQMQ");
    msg.op = 99U;
    msg.sched_time = 0.141864984062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.485596261598);
    msg.setSource(18670U);
    msg.setSourceEntity(14U);
    msg.setDestination(11296U);
    msg.setDestinationEntity(146U);
    msg.name.assign("XFIXKPEOHNZYTJIRTLYIVOSNFDANDGBXHXBEQYUMUYALSNMZOJAGSTICRUKDHMZQSUIHQNDNOMKZRAGXWHCFCVJFCBJUTSSNQNLETYSRFIWCKRKYLUJWSCMGTJDKU");
    msg.op = 198U;
    msg.sched_time = 0.110830434873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.948305761538);
    msg.setSource(59424U);
    msg.setSourceEntity(138U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(131U);
    msg.name.assign("SQUZAXOYJIWRUPNPKYUEDURYGQEXRRTFKICWZHWFBVGPJBLRQZHOGETKYMFEZFJLOIRMZTBVCXMFOJEGNHIPPLSNBJCYRIKDZVNHLVPWUVELXGNSMZOBBMNZMPJIYEAHEFLPAQQODAXILVUDIPYKCHOQKKRJGQUSGQNFCYTVSWWXGZXRFYJQANSHWHUNUAJ");
    msg.op = 247U;
    msg.sched_time = 0.848996286844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.00928643811287);
    msg.setSource(55586U);
    msg.setSourceEntity(83U);
    msg.setDestination(59533U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.612192168481);
    msg.setSource(20357U);
    msg.setSourceEntity(0U);
    msg.setDestination(37899U);
    msg.setDestinationEntity(110U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.655091758007);
    msg.setSource(29403U);
    msg.setSourceEntity(107U);
    msg.setDestination(36148U);
    msg.setDestinationEntity(71U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.350537273135);
    msg.setSource(10062U);
    msg.setSourceEntity(171U);
    msg.setDestination(36565U);
    msg.setDestinationEntity(157U);
    msg.name.assign("NYOAMBNQSYKKWRPMVUMYDHCWKLEJWLZQRWUEQLUCXLFKRGVCVDHUCFEGIEMYTUZHHTFKJYWNGHXFGTGFMFBEANPTPRMAMOCJCTYBEPIKRVKZNBETOJRCSLXVWDSDLBDALVWXSUHWCZGZBIXRHPBDQXAMJBHAEYCEGJUXDXJPUJQZDOVUSDMONINSTGTKPTZDQYRFTAJRFZKGFJASNXHZSEKLVYGOPMSHONOCVAQIZWIPLQOLW");
    msg.state = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.20943747834);
    msg.setSource(369U);
    msg.setSourceEntity(138U);
    msg.setDestination(40831U);
    msg.setDestinationEntity(183U);
    msg.name.assign("AULMCJAYJJKJBNMZPOXGRYXYZKOOGFCBHNMQPWDKYRJFGMGFWHVXNWVPDBQMQTFUOUZTEBRHUXWSIOVZRKRTHEPLAENZTTQZDCJLTQLTUKWBWSZKGIQOECBLCSDRUYGBMIWWKIJPUKMEGVQOX");
    msg.state = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.942264027463);
    msg.setSource(39543U);
    msg.setSourceEntity(137U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(136U);
    msg.name.assign("GQWZHDGSAFKULSKRGFPHATMVPREDEXFZLBLZLGCSNHMDFBYTFMUGQVOWHCLVLZTDZMDUDBNHXSWVTBASJCVYWDEVNESFIZEYLDHKBAYRXXOBLMWEPOOHUCFBHWJPZVITKPKCVEHGFRUUWGJYATKTOZJKQGPIVIKSXLHVLAOSUNQNYXUPRARYKAIEJRJ");
    msg.state = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.031878368371);
    msg.setSource(49137U);
    msg.setSourceEntity(139U);
    msg.setDestination(17663U);
    msg.setDestinationEntity(77U);
    msg.name.assign("GINKGAQCZGYSRHHNOHMVYQEISATXFYNFERFBLNBUFMFFULLGYBVWNOSUBLIQYLBQBODDQDKVQEXAHWSCMDXZRCJRZTFJDBXKTEMZOSGBGTKZJRYSIUVLEWMQYOQGULYPECXAQKCUYBSZTNGTJOXNCPCOUEHMHIFNOWCWSUDMPHCJZGQPTMWVREEFJVWXAUJSJTLAKAZWKTOOAKIIVXVAFJPNZNPPIIHDMWDR");
    msg.value = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.718501782805);
    msg.setSource(17885U);
    msg.setSourceEntity(25U);
    msg.setDestination(26829U);
    msg.setDestinationEntity(193U);
    msg.name.assign("PCDBKQKQOLKAQSZGPJIVCNSKDWXYVSJAFWQCVFWNTPHPAEMGPICITHGJAMHSZGGCOOUZQRPMTIFYHXYLTAUNYKNZELMFJHNERIPFNTXNAKINQEBOJSIYFBXDCJMKRXGUYDYUVBVGVXTLETYUAXDBUSLGQMBYRPWCZJAEMAVAOELRXHVQWWMCCSDPKJOTS");
    msg.value = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.891855620129);
    msg.setSource(58319U);
    msg.setSourceEntity(91U);
    msg.setDestination(9972U);
    msg.setDestinationEntity(236U);
    msg.name.assign("UUBIDSOGRMIIVIHJEGVJWFWIEVCPALAUFSPQUYRSPTWJTKXPNDZTORELNEVXDFKIWUSDP");
    msg.value = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.477886384171);
    msg.setSource(55915U);
    msg.setSourceEntity(107U);
    msg.setDestination(5684U);
    msg.setDestinationEntity(119U);
    msg.name.assign("YPWOLMMPTBVRUJZFARNMYDEVPTNYHHEGWOBJFRSDNUEETNYJXRAXDVCPBQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.525720474352);
    msg.setSource(59729U);
    msg.setSourceEntity(181U);
    msg.setDestination(39673U);
    msg.setDestinationEntity(69U);
    msg.name.assign("ECIHNBAWHNRQBJVFZSPVWOXRYPLUOLMHVUHVQYIKQDPGKYAZMEYNGFUOMBGCFVIPLPADXWPWAYOGJWLIOBTCQNXXYDQUZSWRIFLULAKCMRZEMDPZDFTTPWTANXGJSJTYRCHQGDLUNPFRHKHCANGCUDPXSGKRVYMFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.928945535998);
    msg.setSource(47455U);
    msg.setSourceEntity(168U);
    msg.setDestination(53084U);
    msg.setDestinationEntity(215U);
    msg.name.assign("SSTHVDDZCMCCMIKAVPZITTWXFCJJJIRZVQYCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.594557382921);
    msg.setSource(52184U);
    msg.setSourceEntity(236U);
    msg.setDestination(47084U);
    msg.setDestinationEntity(181U);
    msg.name.assign("ZKTWIIBADVOXRKSKLWCJNBWXSPQCIWQMJCLEXWMNODGUVAIDZWJPLEGNYPCBEQVFTYUGJBRGGYLOEYBATHVEGEJMKBRDFSYZCIHZNMDCGMITLTSIYKGGOZEIUFBQLFQPPLOQFBVFSJXEDRHEXRVSCMTZHNQGSVYFUWPYWOOXHMAAZHUNYBJZVRFXN");
    msg.value = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.167778129227);
    msg.setSource(22368U);
    msg.setSourceEntity(54U);
    msg.setDestination(62381U);
    msg.setDestinationEntity(54U);
    msg.name.assign("XKIHMMDOWLRTIDRMECBWJSRYUDCVHOPCSSYTQXFFCWXHGEHKITUHXOWVEHPMCGQTMCRWVNHPYZPAKPPOIUKBZQVNQDJJBGUOCVDLTLBLDBFQVNAGLKIFKIUGUPZWWVVGQDFXASRFOGJSWAPIXWTBOZOKMYINMSIKBGCRNHUYRPEQYTMZFRXDJCFRUTUKLAJVSZRFBTKFLDULAEZZYBZJLCJNJOYXJQAGSBEDYTAEXNAEHQYOHAVIESMSGMXNZ");
    msg.value = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.325497597168);
    msg.setSource(17159U);
    msg.setSourceEntity(7U);
    msg.setDestination(25178U);
    msg.setDestinationEntity(49U);
    msg.name.assign("DLUSPPVPWUGZTKKOGOUJMCBWCXMKBAQDZOHTFFDDSKHIQOZMTOFQECUASFQWRBVMQGMZLAAPEXYCUDVYTOFLZCGETJELYIWNSZDYVDJNKIAOXCN");
    msg.value = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.678832836494);
    msg.setSource(23522U);
    msg.setSourceEntity(150U);
    msg.setDestination(11903U);
    msg.setDestinationEntity(128U);
    msg.id = 184U;
    msg.period = 2772326507U;
    msg.duty_cycle = 3249602549U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.00768448469634);
    msg.setSource(39945U);
    msg.setSourceEntity(84U);
    msg.setDestination(44724U);
    msg.setDestinationEntity(146U);
    msg.id = 36U;
    msg.period = 15792673U;
    msg.duty_cycle = 3246335586U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.641263730235);
    msg.setSource(16744U);
    msg.setSourceEntity(29U);
    msg.setDestination(11157U);
    msg.setDestinationEntity(233U);
    msg.id = 144U;
    msg.period = 2731954943U;
    msg.duty_cycle = 1521636121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.887985123507);
    msg.setSource(11845U);
    msg.setSourceEntity(51U);
    msg.setDestination(29102U);
    msg.setDestinationEntity(216U);
    msg.id = 140U;
    msg.period = 1507324284U;
    msg.duty_cycle = 3165783234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.366017223462);
    msg.setSource(62892U);
    msg.setSourceEntity(177U);
    msg.setDestination(59702U);
    msg.setDestinationEntity(189U);
    msg.id = 246U;
    msg.period = 630402796U;
    msg.duty_cycle = 2873250272U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.114565482763);
    msg.setSource(57818U);
    msg.setSourceEntity(58U);
    msg.setDestination(7029U);
    msg.setDestinationEntity(65U);
    msg.id = 139U;
    msg.period = 6736259U;
    msg.duty_cycle = 3273623420U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.29277931497);
    msg.setSource(31635U);
    msg.setSourceEntity(144U);
    msg.setDestination(49978U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.394558559878;
    msg.lon = 0.0267577122835;
    msg.height = 0.476235759939;
    msg.x = 0.0137804106514;
    msg.y = 0.508051120004;
    msg.z = 0.0803405895221;
    msg.phi = 0.693633568544;
    msg.theta = 0.303059730734;
    msg.psi = 0.397318287243;
    msg.u = 0.379403103203;
    msg.v = 0.768219453027;
    msg.w = 0.531431679984;
    msg.vx = 0.160047297255;
    msg.vy = 0.52627578028;
    msg.vz = 0.278577788227;
    msg.p = 0.00332887981638;
    msg.q = 0.264494027095;
    msg.r = 0.574467602569;
    msg.depth = 0.944148237718;
    msg.alt = 0.564511179224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.00693004188971);
    msg.setSource(36160U);
    msg.setSourceEntity(99U);
    msg.setDestination(46976U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.407310856404;
    msg.lon = 0.341745181224;
    msg.height = 0.85457453691;
    msg.x = 0.582618585201;
    msg.y = 0.0772355756614;
    msg.z = 0.854683246154;
    msg.phi = 0.566255160011;
    msg.theta = 0.00787258855215;
    msg.psi = 0.694661268631;
    msg.u = 0.266833344299;
    msg.v = 0.884618384214;
    msg.w = 0.266226257302;
    msg.vx = 0.682659627635;
    msg.vy = 0.893572177226;
    msg.vz = 0.147826412498;
    msg.p = 0.530695517562;
    msg.q = 0.158977307058;
    msg.r = 0.741318191429;
    msg.depth = 0.688606650541;
    msg.alt = 0.585855867419;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.460647546088);
    msg.setSource(12357U);
    msg.setSourceEntity(54U);
    msg.setDestination(14375U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.0275954789137;
    msg.lon = 0.76131826929;
    msg.height = 0.390185906769;
    msg.x = 0.295600328711;
    msg.y = 0.166996104461;
    msg.z = 0.0400719418983;
    msg.phi = 0.0779043940446;
    msg.theta = 0.0231797195251;
    msg.psi = 0.337730420774;
    msg.u = 0.421091360099;
    msg.v = 0.032820218383;
    msg.w = 0.313859672917;
    msg.vx = 0.659777550632;
    msg.vy = 0.892252609104;
    msg.vz = 0.687197231869;
    msg.p = 0.731244862346;
    msg.q = 0.710073581958;
    msg.r = 0.131256632829;
    msg.depth = 0.498947425462;
    msg.alt = 0.761335998774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.062378737286);
    msg.setSource(43365U);
    msg.setSourceEntity(169U);
    msg.setDestination(8975U);
    msg.setDestinationEntity(160U);
    msg.x = 0.351947310359;
    msg.y = 0.826121835518;
    msg.z = 0.263952343211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.494033694429);
    msg.setSource(57233U);
    msg.setSourceEntity(82U);
    msg.setDestination(46002U);
    msg.setDestinationEntity(204U);
    msg.x = 0.936734704005;
    msg.y = 0.528921014703;
    msg.z = 0.944444213744;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.0341690376044);
    msg.setSource(26673U);
    msg.setSourceEntity(242U);
    msg.setDestination(59884U);
    msg.setDestinationEntity(147U);
    msg.x = 0.595788797562;
    msg.y = 0.773910256444;
    msg.z = 0.294483185108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.688876728069);
    msg.setSource(57967U);
    msg.setSourceEntity(242U);
    msg.setDestination(46208U);
    msg.setDestinationEntity(5U);
    msg.value = 0.714388783965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.809783801308);
    msg.setSource(50855U);
    msg.setSourceEntity(43U);
    msg.setDestination(35248U);
    msg.setDestinationEntity(135U);
    msg.value = 0.90022550499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.62927809925);
    msg.setSource(45893U);
    msg.setSourceEntity(249U);
    msg.setDestination(9370U);
    msg.setDestinationEntity(120U);
    msg.value = 0.546568136334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.588025225813);
    msg.setSource(15129U);
    msg.setSourceEntity(97U);
    msg.setDestination(19107U);
    msg.setDestinationEntity(250U);
    msg.value = 0.964027183092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.24311224006);
    msg.setSource(25359U);
    msg.setSourceEntity(197U);
    msg.setDestination(24960U);
    msg.setDestinationEntity(114U);
    msg.value = 0.694901976167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.46709653318);
    msg.setSource(5292U);
    msg.setSourceEntity(32U);
    msg.setDestination(55620U);
    msg.setDestinationEntity(179U);
    msg.value = 0.59091984949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.35986361925);
    msg.setSource(43487U);
    msg.setSourceEntity(123U);
    msg.setDestination(55029U);
    msg.setDestinationEntity(160U);
    msg.x = 0.81339679707;
    msg.y = 0.127343808869;
    msg.z = 0.902652907036;
    msg.phi = 0.578900567611;
    msg.theta = 0.774947462694;
    msg.psi = 0.770036541041;
    msg.p = 0.925959734239;
    msg.q = 0.405558848054;
    msg.r = 0.849721736656;
    msg.u = 0.289558841338;
    msg.v = 0.0554072349519;
    msg.w = 0.395625265104;
    msg.bias_psi = 0.845494549837;
    msg.bias_r = 0.522763683787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.982370227518);
    msg.setSource(31352U);
    msg.setSourceEntity(32U);
    msg.setDestination(40506U);
    msg.setDestinationEntity(13U);
    msg.x = 0.0532663431769;
    msg.y = 0.657095751369;
    msg.z = 0.0844773373664;
    msg.phi = 0.865188320971;
    msg.theta = 0.984905768414;
    msg.psi = 0.439167255689;
    msg.p = 0.400543932521;
    msg.q = 0.410480865118;
    msg.r = 0.466066023047;
    msg.u = 0.245284307405;
    msg.v = 0.602592322402;
    msg.w = 0.483021694136;
    msg.bias_psi = 0.780894374299;
    msg.bias_r = 0.0668437166848;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.011928945782);
    msg.setSource(53717U);
    msg.setSourceEntity(102U);
    msg.setDestination(25845U);
    msg.setDestinationEntity(100U);
    msg.x = 0.768610932135;
    msg.y = 0.343462347339;
    msg.z = 0.0685473397265;
    msg.phi = 0.169511702135;
    msg.theta = 0.633176651928;
    msg.psi = 0.667409806676;
    msg.p = 0.41051333371;
    msg.q = 0.128175932843;
    msg.r = 0.263387559345;
    msg.u = 0.413465900358;
    msg.v = 0.307703863813;
    msg.w = 0.905233709722;
    msg.bias_psi = 0.867054659619;
    msg.bias_r = 0.210896323656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.413800662736);
    msg.setSource(60445U);
    msg.setSourceEntity(18U);
    msg.setDestination(50176U);
    msg.setDestinationEntity(156U);
    msg.bias_psi = 0.462915590666;
    msg.bias_r = 0.278889218101;
    msg.cog = 0.103682093317;
    msg.cyaw = 0.222917894824;
    msg.lbl_rej_level = 0.0646016219648;
    msg.gps_rej_level = 0.466770741257;
    msg.custom_x = 0.761497248478;
    msg.custom_y = 0.0960014958284;
    msg.custom_z = 0.344714030113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.268605309469);
    msg.setSource(20538U);
    msg.setSourceEntity(50U);
    msg.setDestination(29262U);
    msg.setDestinationEntity(129U);
    msg.bias_psi = 0.125308899672;
    msg.bias_r = 0.907259109705;
    msg.cog = 0.930375365698;
    msg.cyaw = 0.474278781068;
    msg.lbl_rej_level = 0.964843699437;
    msg.gps_rej_level = 0.187004725564;
    msg.custom_x = 0.735610509291;
    msg.custom_y = 0.0635789479959;
    msg.custom_z = 0.379821576607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.150758598143);
    msg.setSource(25169U);
    msg.setSourceEntity(64U);
    msg.setDestination(20770U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.495444431023;
    msg.bias_r = 0.837767619538;
    msg.cog = 0.139308890041;
    msg.cyaw = 0.791799106009;
    msg.lbl_rej_level = 0.374060234001;
    msg.gps_rej_level = 0.344790910169;
    msg.custom_x = 0.663287075027;
    msg.custom_y = 0.172646691011;
    msg.custom_z = 0.932128776872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.693773730796);
    msg.setSource(34410U);
    msg.setSourceEntity(141U);
    msg.setDestination(21589U);
    msg.setDestinationEntity(162U);
    msg.utc_time = 0.155642523051;
    msg.reason = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.412755848168);
    msg.setSource(64258U);
    msg.setSourceEntity(131U);
    msg.setDestination(5989U);
    msg.setDestinationEntity(205U);
    msg.utc_time = 0.24130201059;
    msg.reason = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.341528268142);
    msg.setSource(59312U);
    msg.setSourceEntity(89U);
    msg.setDestination(49527U);
    msg.setDestinationEntity(247U);
    msg.utc_time = 0.565176214082;
    msg.reason = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.174057161154);
    msg.setSource(44539U);
    msg.setSourceEntity(51U);
    msg.setDestination(40586U);
    msg.setDestinationEntity(214U);
    msg.id = 105U;
    msg.range = 0.992160912879;
    msg.acceptance = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.216244454747);
    msg.setSource(55409U);
    msg.setSourceEntity(163U);
    msg.setDestination(48648U);
    msg.setDestinationEntity(235U);
    msg.id = 22U;
    msg.range = 0.633018498915;
    msg.acceptance = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.970499777456);
    msg.setSource(49459U);
    msg.setSourceEntity(41U);
    msg.setDestination(56128U);
    msg.setDestinationEntity(248U);
    msg.id = 142U;
    msg.range = 0.0285708029885;
    msg.acceptance = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.623169705096);
    msg.setSource(32054U);
    msg.setSourceEntity(6U);
    msg.setDestination(63128U);
    msg.setDestinationEntity(70U);
    msg.type = 191U;
    msg.reason = 244U;
    msg.value = 0.458667780773;
    msg.timestep = 0.0294310190798;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.617273153139);
    msg.setSource(22081U);
    msg.setSourceEntity(23U);
    msg.setDestination(27002U);
    msg.setDestinationEntity(163U);
    msg.type = 111U;
    msg.reason = 37U;
    msg.value = 0.429034176872;
    msg.timestep = 0.770328947171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.579756789391);
    msg.setSource(33078U);
    msg.setSourceEntity(144U);
    msg.setDestination(14686U);
    msg.setDestinationEntity(131U);
    msg.type = 124U;
    msg.reason = 235U;
    msg.value = 0.0114648986338;
    msg.timestep = 0.348427160617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.704636732831);
    msg.setSource(4352U);
    msg.setSourceEntity(55U);
    msg.setDestination(21339U);
    msg.setDestinationEntity(6U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DOFSOOPWKNUIIMBBNFNFSQRRSSJEYXZCAJTTLZGDBXNHCPMUVLELLLBEUPVZLPLNHEMYIWDOQFHYWRMSKZDDFKT");
    tmp_msg_0.lat = 0.96181839562;
    tmp_msg_0.lon = 0.575132955916;
    tmp_msg_0.depth = 0.431224413859;
    tmp_msg_0.query_channel = 125U;
    tmp_msg_0.reply_channel = 175U;
    tmp_msg_0.transponder_delay = 250U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.140144339736;
    msg.y = 0.611819281763;
    msg.var_x = 0.0971421424683;
    msg.var_y = 0.666801027908;
    msg.distance = 0.250565317116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.81517196262);
    msg.setSource(19561U);
    msg.setSourceEntity(191U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(143U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ENOTLTOAQJMNVHXSQRVEWJEGEICXCFDHLYFMKNLYPBJQOFDPRIPTSPEFGFWEORHAMUXUOVBWMXTENBHFQVZXLCHLSBRDVQWVZSOUHKEFJMCZZHJLDMXAKMIJIBZXSHQSBYDOOYVRCCFBYDGUIEUDEIFJUGNTAWPKKJLMBLCPDSWVAQHWIJPJMYPYCUGITXTSKDBPXSCNAFNTRGMWTZZONYVNPYAATZAWA");
    tmp_msg_0.lat = 0.670574686402;
    tmp_msg_0.lon = 0.706833005519;
    tmp_msg_0.depth = 0.582415650629;
    tmp_msg_0.query_channel = 216U;
    tmp_msg_0.reply_channel = 42U;
    tmp_msg_0.transponder_delay = 248U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.840539579383;
    msg.y = 0.554714576872;
    msg.var_x = 0.159636240607;
    msg.var_y = 0.588022942329;
    msg.distance = 0.219880489901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.340283722129);
    msg.setSource(6879U);
    msg.setSourceEntity(206U);
    msg.setDestination(52354U);
    msg.setDestinationEntity(228U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JXNBKBTNVYRGABLMDIUNFOEVUUEYGLEHGPTZWAZFQHUNUOWXENKJJBRQHMKSMVQSIGBWABDPFDQLMBOHMTPIBGTJHPFOLTSOKJSRVPLYX");
    tmp_msg_0.lat = 0.376266218992;
    tmp_msg_0.lon = 0.859622334916;
    tmp_msg_0.depth = 0.206498251019;
    tmp_msg_0.query_channel = 97U;
    tmp_msg_0.reply_channel = 196U;
    tmp_msg_0.transponder_delay = 52U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0717806396197;
    msg.y = 0.952332405189;
    msg.var_x = 0.515306272499;
    msg.var_y = 0.959808491134;
    msg.distance = 0.248843490031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.868848798415);
    msg.setSource(22902U);
    msg.setSourceEntity(199U);
    msg.setDestination(33892U);
    msg.setDestinationEntity(146U);
    msg.state = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.277507526979);
    msg.setSource(5766U);
    msg.setSourceEntity(71U);
    msg.setDestination(16964U);
    msg.setDestinationEntity(139U);
    msg.state = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.213448928564);
    msg.setSource(48335U);
    msg.setSourceEntity(246U);
    msg.setDestination(10539U);
    msg.setDestinationEntity(216U);
    msg.state = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.747229439539);
    msg.setSource(9479U);
    msg.setSourceEntity(217U);
    msg.setDestination(35713U);
    msg.setDestinationEntity(172U);
    msg.x = 0.931938105859;
    msg.y = 0.186250160311;
    msg.z = 0.605176387735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.338219046961);
    msg.setSource(29762U);
    msg.setSourceEntity(28U);
    msg.setDestination(24345U);
    msg.setDestinationEntity(110U);
    msg.x = 0.291244703732;
    msg.y = 0.246884008946;
    msg.z = 0.340709547278;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.0527129827342);
    msg.setSource(14917U);
    msg.setSourceEntity(94U);
    msg.setDestination(28995U);
    msg.setDestinationEntity(110U);
    msg.x = 0.0730889238321;
    msg.y = 0.25244424804;
    msg.z = 0.814384074053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.872934814185);
    msg.setSource(52651U);
    msg.setSourceEntity(243U);
    msg.setDestination(14577U);
    msg.setDestinationEntity(115U);
    msg.va = 0.429605670476;
    msg.aoa = 0.0499772937333;
    msg.ssa = 0.712461863695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.339110098406);
    msg.setSource(55967U);
    msg.setSourceEntity(19U);
    msg.setDestination(12406U);
    msg.setDestinationEntity(226U);
    msg.va = 0.678999435439;
    msg.aoa = 0.163285347305;
    msg.ssa = 0.129919696716;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.806590815997);
    msg.setSource(40514U);
    msg.setSourceEntity(123U);
    msg.setDestination(9714U);
    msg.setDestinationEntity(136U);
    msg.va = 0.867567612;
    msg.aoa = 0.181273552003;
    msg.ssa = 0.111485896157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.50039586102);
    msg.setSource(29236U);
    msg.setSourceEntity(105U);
    msg.setDestination(12029U);
    msg.setDestinationEntity(234U);
    msg.value = 0.266118352267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.298971393288);
    msg.setSource(11529U);
    msg.setSourceEntity(50U);
    msg.setDestination(8633U);
    msg.setDestinationEntity(74U);
    msg.value = 0.92667284898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.916614520412);
    msg.setSource(58144U);
    msg.setSourceEntity(214U);
    msg.setDestination(14293U);
    msg.setDestinationEntity(91U);
    msg.value = 0.496910731662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.375301960522);
    msg.setSource(11010U);
    msg.setSourceEntity(136U);
    msg.setDestination(50244U);
    msg.setDestinationEntity(128U);
    msg.value = 0.968077370098;
    msg.z_units = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.203447036203);
    msg.setSource(43910U);
    msg.setSourceEntity(185U);
    msg.setDestination(45693U);
    msg.setDestinationEntity(159U);
    msg.value = 0.392025323461;
    msg.z_units = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.496283092674);
    msg.setSource(2271U);
    msg.setSourceEntity(32U);
    msg.setDestination(37911U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0883937129474;
    msg.z_units = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.764694574083);
    msg.setSource(38163U);
    msg.setSourceEntity(95U);
    msg.setDestination(35674U);
    msg.setDestinationEntity(118U);
    msg.value = 0.639718165792;
    msg.speed_units = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.800924415924);
    msg.setSource(30255U);
    msg.setSourceEntity(28U);
    msg.setDestination(16522U);
    msg.setDestinationEntity(231U);
    msg.value = 0.189727324879;
    msg.speed_units = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.555286573041);
    msg.setSource(872U);
    msg.setSourceEntity(218U);
    msg.setDestination(807U);
    msg.setDestinationEntity(148U);
    msg.value = 0.776895870343;
    msg.speed_units = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.876176248271);
    msg.setSource(15179U);
    msg.setSourceEntity(253U);
    msg.setDestination(27371U);
    msg.setDestinationEntity(54U);
    msg.value = 0.835496301246;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.196906852411);
    msg.setSource(35057U);
    msg.setSourceEntity(153U);
    msg.setDestination(46768U);
    msg.setDestinationEntity(132U);
    msg.value = 0.994167781625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.0110766871401);
    msg.setSource(20559U);
    msg.setSourceEntity(99U);
    msg.setDestination(58733U);
    msg.setDestinationEntity(19U);
    msg.value = 0.434695703298;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.813486021001);
    msg.setSource(16171U);
    msg.setSourceEntity(217U);
    msg.setDestination(7909U);
    msg.setDestinationEntity(205U);
    msg.value = 0.21938798401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.971906356378);
    msg.setSource(12217U);
    msg.setSourceEntity(211U);
    msg.setDestination(13355U);
    msg.setDestinationEntity(158U);
    msg.value = 0.816139813634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.360018985248);
    msg.setSource(12751U);
    msg.setSourceEntity(185U);
    msg.setDestination(65137U);
    msg.setDestinationEntity(209U);
    msg.value = 0.876529255691;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.946402593872);
    msg.setSource(6482U);
    msg.setSourceEntity(37U);
    msg.setDestination(58050U);
    msg.setDestinationEntity(104U);
    msg.value = 0.923895824592;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.347265567707);
    msg.setSource(3413U);
    msg.setSourceEntity(117U);
    msg.setDestination(15250U);
    msg.setDestinationEntity(179U);
    msg.value = 0.387527524076;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.0893119354892);
    msg.setSource(25707U);
    msg.setSourceEntity(150U);
    msg.setDestination(56906U);
    msg.setDestinationEntity(248U);
    msg.value = 0.229989653427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.514300852591);
    msg.setSource(62921U);
    msg.setSourceEntity(197U);
    msg.setDestination(2322U);
    msg.setDestinationEntity(41U);
    msg.path_ref = 761753986U;
    msg.start_lat = 0.0851258928086;
    msg.start_lon = 0.749220259854;
    msg.start_z = 0.099706962232;
    msg.start_z_units = 162U;
    msg.end_lat = 0.132604561771;
    msg.end_lon = 0.886308705412;
    msg.end_z = 0.364566493688;
    msg.end_z_units = 125U;
    msg.speed = 0.64090157734;
    msg.speed_units = 102U;
    msg.lradius = 0.695349557908;
    msg.flags = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.2996938091);
    msg.setSource(31832U);
    msg.setSourceEntity(104U);
    msg.setDestination(7250U);
    msg.setDestinationEntity(77U);
    msg.path_ref = 3372149775U;
    msg.start_lat = 0.500219749139;
    msg.start_lon = 0.467962587887;
    msg.start_z = 0.391258566442;
    msg.start_z_units = 158U;
    msg.end_lat = 0.685038216872;
    msg.end_lon = 0.368633564223;
    msg.end_z = 0.445230067045;
    msg.end_z_units = 90U;
    msg.speed = 0.00905784738602;
    msg.speed_units = 57U;
    msg.lradius = 0.479410503626;
    msg.flags = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.0772091209032);
    msg.setSource(64240U);
    msg.setSourceEntity(0U);
    msg.setDestination(22997U);
    msg.setDestinationEntity(50U);
    msg.path_ref = 2795658794U;
    msg.start_lat = 0.194308610388;
    msg.start_lon = 0.742649484056;
    msg.start_z = 0.500325933407;
    msg.start_z_units = 47U;
    msg.end_lat = 0.872282056403;
    msg.end_lon = 0.118855930759;
    msg.end_z = 0.512220019912;
    msg.end_z_units = 177U;
    msg.speed = 0.683384782315;
    msg.speed_units = 57U;
    msg.lradius = 0.799082514237;
    msg.flags = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.0922667001155);
    msg.setSource(28022U);
    msg.setSourceEntity(125U);
    msg.setDestination(48413U);
    msg.setDestinationEntity(93U);
    msg.x = 0.0390234632387;
    msg.y = 0.933673347909;
    msg.z = 0.477659382147;
    msg.k = 0.905079208999;
    msg.m = 0.387679083513;
    msg.n = 0.703721284986;
    msg.flags = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.37116178757);
    msg.setSource(49111U);
    msg.setSourceEntity(95U);
    msg.setDestination(41429U);
    msg.setDestinationEntity(151U);
    msg.x = 0.459602203127;
    msg.y = 0.981423461936;
    msg.z = 0.209831406491;
    msg.k = 0.0167912989368;
    msg.m = 0.106936184976;
    msg.n = 0.166908963228;
    msg.flags = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.895945583996);
    msg.setSource(55414U);
    msg.setSourceEntity(140U);
    msg.setDestination(38443U);
    msg.setDestinationEntity(244U);
    msg.x = 0.475301371597;
    msg.y = 0.878714357223;
    msg.z = 0.474461968875;
    msg.k = 0.00308085697168;
    msg.m = 0.522076596108;
    msg.n = 0.548683612666;
    msg.flags = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.814734942077);
    msg.setSource(23975U);
    msg.setSourceEntity(17U);
    msg.setDestination(38531U);
    msg.setDestinationEntity(130U);
    msg.value = 0.150287386115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.599538425099);
    msg.setSource(7737U);
    msg.setSourceEntity(219U);
    msg.setDestination(17048U);
    msg.setDestinationEntity(122U);
    msg.value = 0.428057219184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.679395949671);
    msg.setSource(23595U);
    msg.setSourceEntity(161U);
    msg.setDestination(16931U);
    msg.setDestinationEntity(18U);
    msg.value = 0.00287675914964;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.23196620021);
    msg.setSource(49952U);
    msg.setSourceEntity(237U);
    msg.setDestination(16113U);
    msg.setDestinationEntity(42U);
    msg.u = 0.827606827939;
    msg.v = 0.247941354744;
    msg.w = 0.873089038523;
    msg.p = 0.838561461453;
    msg.q = 0.687484534114;
    msg.r = 0.358115132551;
    msg.flags = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.355377250916);
    msg.setSource(39565U);
    msg.setSourceEntity(101U);
    msg.setDestination(62976U);
    msg.setDestinationEntity(145U);
    msg.u = 0.282965671282;
    msg.v = 0.267344764055;
    msg.w = 0.75466583531;
    msg.p = 0.781665086318;
    msg.q = 0.593713616196;
    msg.r = 0.585929722399;
    msg.flags = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.405086770385);
    msg.setSource(39106U);
    msg.setSourceEntity(159U);
    msg.setDestination(48999U);
    msg.setDestinationEntity(180U);
    msg.u = 0.0927459475859;
    msg.v = 0.756307674993;
    msg.w = 0.176957426679;
    msg.p = 0.131370572305;
    msg.q = 0.356759470356;
    msg.r = 0.05631617853;
    msg.flags = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.185654562654);
    msg.setSource(10726U);
    msg.setSourceEntity(50U);
    msg.setDestination(21968U);
    msg.setDestinationEntity(172U);
    msg.path_ref = 4250903439U;
    msg.start_lat = 0.0695176090341;
    msg.start_lon = 0.728961587881;
    msg.start_z = 0.579093715531;
    msg.start_z_units = 203U;
    msg.end_lat = 0.484513633585;
    msg.end_lon = 0.744962692045;
    msg.end_z = 0.360109795344;
    msg.end_z_units = 165U;
    msg.lradius = 0.659570219971;
    msg.flags = 192U;
    msg.x = 0.556145778009;
    msg.y = 0.547307890678;
    msg.z = 0.209096524301;
    msg.vx = 0.274326669691;
    msg.vy = 0.463281606686;
    msg.vz = 0.346980345189;
    msg.course_error = 0.0832942757039;
    msg.eta = 47936U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.562485555699);
    msg.setSource(40878U);
    msg.setSourceEntity(31U);
    msg.setDestination(24134U);
    msg.setDestinationEntity(144U);
    msg.path_ref = 1519492794U;
    msg.start_lat = 0.457829251417;
    msg.start_lon = 0.164014674649;
    msg.start_z = 0.232384620278;
    msg.start_z_units = 91U;
    msg.end_lat = 0.397759269577;
    msg.end_lon = 0.132091294926;
    msg.end_z = 0.328869811975;
    msg.end_z_units = 238U;
    msg.lradius = 0.600828118178;
    msg.flags = 39U;
    msg.x = 0.421775591955;
    msg.y = 0.454865350176;
    msg.z = 0.940438248675;
    msg.vx = 0.45992919802;
    msg.vy = 0.216512025768;
    msg.vz = 0.144348886899;
    msg.course_error = 0.470245545544;
    msg.eta = 49368U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.561621736666);
    msg.setSource(26440U);
    msg.setSourceEntity(140U);
    msg.setDestination(33202U);
    msg.setDestinationEntity(46U);
    msg.path_ref = 635261307U;
    msg.start_lat = 0.446223448422;
    msg.start_lon = 0.846278294986;
    msg.start_z = 0.104862769178;
    msg.start_z_units = 152U;
    msg.end_lat = 0.941162399711;
    msg.end_lon = 0.550234785308;
    msg.end_z = 0.917930462772;
    msg.end_z_units = 103U;
    msg.lradius = 0.692213103441;
    msg.flags = 242U;
    msg.x = 0.176465438653;
    msg.y = 0.596568115002;
    msg.z = 0.716818830617;
    msg.vx = 0.80972927809;
    msg.vy = 0.987717087651;
    msg.vz = 0.927964387355;
    msg.course_error = 0.257040951623;
    msg.eta = 9871U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.0942523449433);
    msg.setSource(40923U);
    msg.setSourceEntity(185U);
    msg.setDestination(45758U);
    msg.setDestinationEntity(65U);
    msg.k = 0.946460174786;
    msg.m = 0.981609201999;
    msg.n = 0.0313029550897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.687334467968);
    msg.setSource(31532U);
    msg.setSourceEntity(254U);
    msg.setDestination(14361U);
    msg.setDestinationEntity(141U);
    msg.k = 0.268931033795;
    msg.m = 0.753107061287;
    msg.n = 0.0367076381623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.706875533828);
    msg.setSource(14579U);
    msg.setSourceEntity(9U);
    msg.setDestination(45751U);
    msg.setDestinationEntity(103U);
    msg.k = 0.68629756219;
    msg.m = 0.371169459426;
    msg.n = 0.732279210027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.952246740253);
    msg.setSource(55932U);
    msg.setSourceEntity(184U);
    msg.setDestination(25795U);
    msg.setDestinationEntity(16U);
    msg.p = 0.907389657924;
    msg.i = 0.291996875422;
    msg.d = 0.716689813096;
    msg.a = 0.254997413863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.665370322577);
    msg.setSource(2053U);
    msg.setSourceEntity(172U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(133U);
    msg.p = 0.0366185724995;
    msg.i = 0.746907731813;
    msg.d = 0.270286238266;
    msg.a = 0.567913694203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.543133894786);
    msg.setSource(20928U);
    msg.setSourceEntity(146U);
    msg.setDestination(38540U);
    msg.setDestinationEntity(191U);
    msg.p = 0.262448507956;
    msg.i = 0.236036310727;
    msg.d = 0.547614319967;
    msg.a = 0.587454236313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.325871167549);
    msg.setSource(8672U);
    msg.setSourceEntity(173U);
    msg.setDestination(60549U);
    msg.setDestinationEntity(126U);
    msg.op = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.862940769281);
    msg.setSource(32067U);
    msg.setSourceEntity(242U);
    msg.setDestination(35524U);
    msg.setDestinationEntity(191U);
    msg.op = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.525056903558);
    msg.setSource(20073U);
    msg.setSourceEntity(122U);
    msg.setDestination(46772U);
    msg.setDestinationEntity(32U);
    msg.op = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.425401991293);
    msg.setSource(33023U);
    msg.setSourceEntity(85U);
    msg.setDestination(21788U);
    msg.setDestinationEntity(212U);
    msg.x = 0.439657296798;
    msg.y = 0.859509937985;
    msg.z = 0.200747718404;
    msg.vx = 0.399183259055;
    msg.vy = 0.674407157231;
    msg.vz = 0.908443533962;
    msg.ax = 0.0192672380656;
    msg.ay = 0.0767174128391;
    msg.az = 0.0121159129486;
    msg.flags = 27641U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.940036353269);
    msg.setSource(1281U);
    msg.setSourceEntity(122U);
    msg.setDestination(50586U);
    msg.setDestinationEntity(217U);
    msg.x = 0.537265450663;
    msg.y = 0.476992017292;
    msg.z = 0.343807052711;
    msg.vx = 0.74005762965;
    msg.vy = 0.78229239806;
    msg.vz = 0.750697193542;
    msg.ax = 0.470218732127;
    msg.ay = 0.767755641585;
    msg.az = 0.7591191672;
    msg.flags = 46140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.194889301777);
    msg.setSource(51789U);
    msg.setSourceEntity(86U);
    msg.setDestination(14404U);
    msg.setDestinationEntity(183U);
    msg.x = 0.690919933566;
    msg.y = 0.423087895982;
    msg.z = 0.0927633957981;
    msg.vx = 0.231274381536;
    msg.vy = 0.675488200651;
    msg.vz = 0.0750031903751;
    msg.ax = 0.874426018436;
    msg.ay = 0.980895099611;
    msg.az = 0.0188263068122;
    msg.flags = 30398U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.592630940541);
    msg.setSource(8488U);
    msg.setSourceEntity(245U);
    msg.setDestination(33474U);
    msg.setDestinationEntity(235U);
    msg.value = 0.203261434761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.0189116424175);
    msg.setSource(33367U);
    msg.setSourceEntity(127U);
    msg.setDestination(33053U);
    msg.setDestinationEntity(153U);
    msg.value = 0.769094779643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.0710982322168);
    msg.setSource(48629U);
    msg.setSourceEntity(200U);
    msg.setDestination(55223U);
    msg.setDestinationEntity(74U);
    msg.value = 0.249717678307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.981520147442);
    msg.setSource(9301U);
    msg.setSourceEntity(205U);
    msg.setDestination(47874U);
    msg.setDestinationEntity(221U);
    msg.timeout = 6446U;
    msg.lat = 0.659922594618;
    msg.lon = 0.420780639494;
    msg.z = 0.715158217845;
    msg.z_units = 235U;
    msg.speed = 0.171019253539;
    msg.speed_units = 80U;
    msg.roll = 0.330279380527;
    msg.pitch = 0.737087429219;
    msg.yaw = 0.822013664329;
    msg.custom.assign("UTIVRTOSKXRUQXOYMCMDQPSNZPELLVVMKJXBXAMBDZQHKUGPPXVXULOQPRILJYFSFAEHJKFRHTOCVDRIUFDJCNXUAWRYZIHBWKCRHP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.883594133543);
    msg.setSource(32750U);
    msg.setSourceEntity(137U);
    msg.setDestination(38820U);
    msg.setDestinationEntity(241U);
    msg.timeout = 60361U;
    msg.lat = 0.735551297701;
    msg.lon = 0.496459523018;
    msg.z = 0.325623739358;
    msg.z_units = 89U;
    msg.speed = 0.342440447473;
    msg.speed_units = 78U;
    msg.roll = 0.198277100294;
    msg.pitch = 0.98679746807;
    msg.yaw = 0.500864589715;
    msg.custom.assign("KGEXGOHTZLDJIAJCCDRUVFPJYPNQUVUJTC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.681869293318);
    msg.setSource(22703U);
    msg.setSourceEntity(132U);
    msg.setDestination(681U);
    msg.setDestinationEntity(155U);
    msg.timeout = 46633U;
    msg.lat = 0.70024300071;
    msg.lon = 0.486311025159;
    msg.z = 0.731633515212;
    msg.z_units = 62U;
    msg.speed = 0.714211451834;
    msg.speed_units = 59U;
    msg.roll = 0.0686473950615;
    msg.pitch = 0.900710557837;
    msg.yaw = 0.546951857586;
    msg.custom.assign("IXJICTOWLKNKDCERSMAUIKIJATMEXWMCQLHHDZKPYYMYXMGKATVORCEQNAPDPQABTBICPCDZVFDLRDOLHAWGZOZYEMSWQNDNBGEKTXCQBQVILBNUTCOTGITEAJXHNZDGJBDVBIQHPAXBHRJPNHPDJNSMHNSYQVOFLMWKTEUPXFZWZGVEUVFERQNZOYVVSLYPCUJIWLHXSOUGBUFIYGWYKJSUZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.235108886014);
    msg.setSource(5811U);
    msg.setSourceEntity(137U);
    msg.setDestination(50452U);
    msg.setDestinationEntity(156U);
    msg.timeout = 21036U;
    msg.lat = 0.935732760869;
    msg.lon = 0.170787710654;
    msg.z = 0.976534875983;
    msg.z_units = 41U;
    msg.speed = 0.928957223059;
    msg.speed_units = 27U;
    msg.duration = 7804U;
    msg.radius = 0.204560811593;
    msg.flags = 154U;
    msg.custom.assign("GNXCSFLVLEDDUBBJJSSEOGGFQRGUOSBYFQBINDWMUIBPUCNYVFZPWZMYSLTCIBFMTWHYDVJRMABTSUTTKVOXEBILXQPYRKMNNZLIPKSLKIKPOLBCFOHEEQPVADQMKGGYMASH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.911800206355);
    msg.setSource(50999U);
    msg.setSourceEntity(197U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(153U);
    msg.timeout = 55378U;
    msg.lat = 0.323890244466;
    msg.lon = 0.293856882735;
    msg.z = 0.705862873786;
    msg.z_units = 53U;
    msg.speed = 0.366404079518;
    msg.speed_units = 146U;
    msg.duration = 14862U;
    msg.radius = 0.602511595181;
    msg.flags = 238U;
    msg.custom.assign("CQJVNCGZNWSXHQEBJJTTMCYVAOHGZQOAAZXYBYCVCUSJXAOTZNFWYMMOAMULNZKMAEHSHEFRQVSKTTTEXFJQVKYPLGQFIWLDEGBJXEUIUMWLPVDRTDDZPGKOURSOIHZQWYSPBTFEOMHPPPLIWFLOHANMSLYEXVQBKDPRNVYHGLRIKNSBCNELRIRDCLNXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.14703826418);
    msg.setSource(5434U);
    msg.setSourceEntity(138U);
    msg.setDestination(33475U);
    msg.setDestinationEntity(105U);
    msg.timeout = 21249U;
    msg.lat = 0.581838966091;
    msg.lon = 0.629391753372;
    msg.z = 0.318982117024;
    msg.z_units = 251U;
    msg.speed = 0.895857836428;
    msg.speed_units = 91U;
    msg.duration = 29138U;
    msg.radius = 0.346643349772;
    msg.flags = 28U;
    msg.custom.assign("SRWHJHMKZUC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.863471320967);
    msg.setSource(54630U);
    msg.setSourceEntity(151U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(113U);
    msg.custom.assign("LFVIKMKSEIHHLWSVUOUDIIKTXPCFSVGYEDCNYGXGEASTJVMUSG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.823839752276);
    msg.setSource(56380U);
    msg.setSourceEntity(53U);
    msg.setDestination(14013U);
    msg.setDestinationEntity(28U);
    msg.custom.assign("XHYMRTYPUJYZEKAWETREZNVXZCYPWVCVZCRGLLGFISCGASJQABHAFOFAWSQRUWOIQHIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.35484014049);
    msg.setSource(2061U);
    msg.setSourceEntity(180U);
    msg.setDestination(38422U);
    msg.setDestinationEntity(4U);
    msg.custom.assign("KBXKKZIWVGPOJGPYPFDSDZPDUFAZXQICLPRBIUYRYKKLHFTHVVDMSICNWVTGHMKAFLPESBTNTOHGDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.0291283817508);
    msg.setSource(31601U);
    msg.setSourceEntity(56U);
    msg.setDestination(28399U);
    msg.setDestinationEntity(15U);
    msg.timeout = 50037U;
    msg.lat = 0.804815444329;
    msg.lon = 0.692475406204;
    msg.z = 0.0671827118461;
    msg.z_units = 203U;
    msg.duration = 26738U;
    msg.speed = 0.684366609043;
    msg.speed_units = 187U;
    msg.type = 222U;
    msg.radius = 0.201965959795;
    msg.length = 0.24861748389;
    msg.bearing = 0.0514016430424;
    msg.direction = 97U;
    msg.custom.assign("WSGELANJWMDTQLDWZANGMLIKXUEXARTGVOOTOPCROXPHMOYTNMFFZEYHULFGOPNVZQBHVCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.249073965098);
    msg.setSource(25020U);
    msg.setSourceEntity(180U);
    msg.setDestination(48146U);
    msg.setDestinationEntity(123U);
    msg.timeout = 45999U;
    msg.lat = 0.562563465414;
    msg.lon = 0.44311496978;
    msg.z = 0.281654563027;
    msg.z_units = 2U;
    msg.duration = 48664U;
    msg.speed = 0.295876741858;
    msg.speed_units = 216U;
    msg.type = 32U;
    msg.radius = 0.941678760015;
    msg.length = 0.209890076444;
    msg.bearing = 0.359884452245;
    msg.direction = 211U;
    msg.custom.assign("NNSMSAKCYKSWCVMUKQEPDODLBOEARAAAYWNLTURRWEYZMDNTFAMQORYCGTABLVAQJSYPGGXKKFCIVLZTSWSPMIMIMYOMZNUBRXDVPGRHVANJXLTFFFPZWQCJBCTCPIJVHELBMDWQMRUCHISYPJLZHEVKEDIUXKGCWQWRVCELTLIYHSKEOYVDZPWHZDSQZFJBOWARZGINTFUENOGIKUSJXBQYOHDOUBEJGXBHXNJBPDFHU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.473487935004);
    msg.setSource(40903U);
    msg.setSourceEntity(232U);
    msg.setDestination(8005U);
    msg.setDestinationEntity(113U);
    msg.timeout = 1097U;
    msg.lat = 0.969260654283;
    msg.lon = 0.198849108714;
    msg.z = 0.701351690322;
    msg.z_units = 212U;
    msg.duration = 43866U;
    msg.speed = 0.0584132538078;
    msg.speed_units = 153U;
    msg.type = 50U;
    msg.radius = 0.482702419968;
    msg.length = 0.666217702034;
    msg.bearing = 0.0270309959308;
    msg.direction = 227U;
    msg.custom.assign("JWOULTOXPPESESFXKNBDJVXAUYTJMEUCIPWIDXOHJKWZSQSZOIPBDWAIQMJSKHHQPFIYVTWFZTKZPRVQGCHZLLNPHFDYGEZRSFYXEYYVLBRANVFQHKJSGDUTWEDBKWILNAGCXQJVHUAEURQBQIACOUOMBCVYSHQMGYTLXUCBXFAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.747068026366);
    msg.setSource(55790U);
    msg.setSourceEntity(119U);
    msg.setDestination(1228U);
    msg.setDestinationEntity(154U);
    msg.duration = 40861U;
    msg.custom.assign("CUUSRSMSFFJRDIWVQADLYXVJBWOBQMSJQNAPLAAPCLKUTUKFYCFOEOLDTHFNRNVKTPCFLPLFBZHFMVNMIXHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.557293768906);
    msg.setSource(12848U);
    msg.setSourceEntity(19U);
    msg.setDestination(18983U);
    msg.setDestinationEntity(182U);
    msg.duration = 56139U;
    msg.custom.assign("FITRGNPJQZJXWGOVGOTRBDODEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.847843135156);
    msg.setSource(38962U);
    msg.setSourceEntity(10U);
    msg.setDestination(42868U);
    msg.setDestinationEntity(161U);
    msg.duration = 39423U;
    msg.custom.assign("KWBBPJCUQLSTIHPGPNBSTJWYUOCGQWSOMDXFSXBLJNJKEDEIBIKCQOAMLLNETGOAWPHLGQZSDZHEGJINDRFARVQPTIJFQMCLDMENSBRVYYWGVBRIXKFDVYNJEWOZSYNYKPYMTHAOUZEAORCVYWGUDXUUUVIKOGRKTQJNLHHUMLPQZVPACEWHAAXZTMCSIHRFHKXQBYQZPVUIGWZTWNZLHGEOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.534422294222);
    msg.setSource(18546U);
    msg.setSourceEntity(193U);
    msg.setDestination(4395U);
    msg.setDestinationEntity(77U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 182565580U;
    tmp_msg_0.start_lat = 0.512498572306;
    tmp_msg_0.start_lon = 0.105918497609;
    tmp_msg_0.start_z = 0.503230218014;
    tmp_msg_0.start_z_units = 85U;
    tmp_msg_0.end_lat = 0.420000534932;
    tmp_msg_0.end_lon = 0.21835396085;
    tmp_msg_0.end_z = 0.153991806943;
    tmp_msg_0.end_z_units = 39U;
    tmp_msg_0.speed = 0.244451897688;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.lradius = 0.828983065772;
    tmp_msg_0.flags = 57U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61152U;
    msg.custom.assign("ECCSVKBCGCVFTOJBBQNTWIIPMLFDOBANFFZIYWKEXMCSPYEBHYVOVQLWHDSOGMABVNAGWTRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.585052335072);
    msg.setSource(42515U);
    msg.setSourceEntity(110U);
    msg.setDestination(62650U);
    msg.setDestinationEntity(152U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.842796983126;
    msg.control.set(tmp_msg_0);
    msg.duration = 9259U;
    msg.custom.assign("FYTXHIIJLWIVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.200512818468);
    msg.setSource(56613U);
    msg.setSourceEntity(180U);
    msg.setDestination(35370U);
    msg.setDestinationEntity(238U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.750943546437;
    tmp_msg_0.z_units = 193U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42636U;
    msg.custom.assign("KSKLSVXKSJVUXQKAVHZBFECJZFBWWFNHJTOGAUJWZATDJRVLMUPHQUSKVGUHMXVBOOMLMBLDTRVRHIEQGYPQQTYYADMFNQMNREGBTQTSLWAIMDIVGXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.218398220711);
    msg.setSource(33413U);
    msg.setSourceEntity(21U);
    msg.setDestination(54555U);
    msg.setDestinationEntity(110U);
    msg.timeout = 19330U;
    msg.lat = 0.921917765874;
    msg.lon = 0.180495280327;
    msg.z = 0.735411558751;
    msg.z_units = 57U;
    msg.speed = 0.745209365521;
    msg.speed_units = 251U;
    msg.bearing = 0.757655860118;
    msg.cross_angle = 0.736504558229;
    msg.width = 0.0790645793519;
    msg.length = 0.923323122397;
    msg.hstep = 0.454870302827;
    msg.coff = 59U;
    msg.alternation = 31U;
    msg.flags = 253U;
    msg.custom.assign("HPHIGWFGSAPCVJXZPNRBUWFAURTSFIGLOUAPVZYRKSTXMCUIRJKZDELJWHFSFVCBWUYLCQABJFSRVAHHEJRVWOACLHNMAKKDULDSCHXIDXVMPRJRDBVXNZKSPLHZNOQDYZZCOXQTSIYMNMGQRYGOTMVEDCKHBJHOEGBQPFYFMUUTBWVWUNDINKBOEMJAGZLGGNWLTIIYJWXXVCOBEKYJXZWQEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.331999359327);
    msg.setSource(18710U);
    msg.setSourceEntity(138U);
    msg.setDestination(30772U);
    msg.setDestinationEntity(237U);
    msg.timeout = 47268U;
    msg.lat = 0.805609197475;
    msg.lon = 0.174307811184;
    msg.z = 0.288243398309;
    msg.z_units = 158U;
    msg.speed = 0.0871781953261;
    msg.speed_units = 23U;
    msg.bearing = 0.292137598354;
    msg.cross_angle = 0.966965150946;
    msg.width = 0.656568955762;
    msg.length = 0.799056435757;
    msg.hstep = 0.77345485872;
    msg.coff = 43U;
    msg.alternation = 11U;
    msg.flags = 170U;
    msg.custom.assign("KPLFDPBKNTQEAGUPSKBMGYFWATZGFDLHYHIZPHNYWAHSOGMEXMXFZQSINKYXUSBSMVAOUIJXXVOPFXGVTVKVCIDLIPJFTUTXQULXRNAMDUKUTQNWVECRAYSLMJQMXLTEFZRDNUYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.72393045845);
    msg.setSource(31507U);
    msg.setSourceEntity(149U);
    msg.setDestination(655U);
    msg.setDestinationEntity(62U);
    msg.timeout = 27257U;
    msg.lat = 0.880943439283;
    msg.lon = 0.0740997296641;
    msg.z = 0.423933687892;
    msg.z_units = 213U;
    msg.speed = 0.848686958269;
    msg.speed_units = 183U;
    msg.bearing = 0.0544982683517;
    msg.cross_angle = 0.622038542976;
    msg.width = 0.822152955185;
    msg.length = 0.884699139993;
    msg.hstep = 0.707672847834;
    msg.coff = 133U;
    msg.alternation = 5U;
    msg.flags = 7U;
    msg.custom.assign("SABTEXMFWIVDGTJAJKHEUQHBVRRWGJHYNPYKHPFDIIIQLVOOGJBWOTEXDJLVNAXWSYLOXRMOYKNSYLPBHYFNEYUMFPRSXZTWZFGEIRFFPSMZCENLKHZHFCXBCZD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.216981665989);
    msg.setSource(51682U);
    msg.setSourceEntity(145U);
    msg.setDestination(63786U);
    msg.setDestinationEntity(13U);
    msg.timeout = 21249U;
    msg.lat = 0.896420296048;
    msg.lon = 0.828784693153;
    msg.z = 0.071395343891;
    msg.z_units = 78U;
    msg.speed = 0.89235483448;
    msg.speed_units = 51U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.829593045795;
    tmp_msg_0.y = 0.312542626834;
    tmp_msg_0.z = 0.702585143793;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FYTFJIIAFOXGRMQDUQONSFZJYKGVWALYEBHLNFZJHVCNMEOYYAWLGEKLCKRYGXPDWMIXSDHITNAITDNPPKHWQDNBWEACHHZOWPBMXWXJMQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.965984552217);
    msg.setSource(17024U);
    msg.setSourceEntity(233U);
    msg.setDestination(16682U);
    msg.setDestinationEntity(10U);
    msg.timeout = 16945U;
    msg.lat = 0.636565797017;
    msg.lon = 0.0268040535509;
    msg.z = 0.0408434556278;
    msg.z_units = 241U;
    msg.speed = 0.256066850413;
    msg.speed_units = 175U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.909650915469;
    tmp_msg_0.y = 0.94048370697;
    tmp_msg_0.z = 0.409119482839;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GSTVXXRORYWEPFLXCLVQFCGFSLJOCYMBLZJIJQITHTKHTHSOYDRNAZBFBPOXOEKOBMRHUNUTEQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.244986859297);
    msg.setSource(30449U);
    msg.setSourceEntity(117U);
    msg.setDestination(59525U);
    msg.setDestinationEntity(146U);
    msg.timeout = 50046U;
    msg.lat = 0.284797454074;
    msg.lon = 0.111377081882;
    msg.z = 0.754809575126;
    msg.z_units = 18U;
    msg.speed = 0.936487491295;
    msg.speed_units = 217U;
    msg.custom.assign("QOTUWUNJGBHXFMLWRKDJKSVTRDBFZOJAKBDRPIVEYUCKGRCOFESOJXCOAVLMTKEOMPXHCATLFQPUBVXWSJRECPDMXUMMYISHGZQZGLYNFSYZYUMSWHLFLJBYSPWDXECTZILGATAOZKYVEUKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.601203966248);
    msg.setSource(4652U);
    msg.setSourceEntity(130U);
    msg.setDestination(45213U);
    msg.setDestinationEntity(8U);
    msg.x = 0.737015459521;
    msg.y = 0.313589225184;
    msg.z = 0.485270442766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.615370754559);
    msg.setSource(39548U);
    msg.setSourceEntity(205U);
    msg.setDestination(14827U);
    msg.setDestinationEntity(66U);
    msg.x = 0.399294901985;
    msg.y = 0.996733916228;
    msg.z = 0.669744783181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.182310051717);
    msg.setSource(11550U);
    msg.setSourceEntity(158U);
    msg.setDestination(50806U);
    msg.setDestinationEntity(213U);
    msg.x = 0.709661416513;
    msg.y = 0.84845985248;
    msg.z = 0.458877065102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.139682710353);
    msg.setSource(41016U);
    msg.setSourceEntity(237U);
    msg.setDestination(46896U);
    msg.setDestinationEntity(46U);
    msg.timeout = 36850U;
    msg.lat = 0.888877216773;
    msg.lon = 0.29903768407;
    msg.z = 0.993485697824;
    msg.z_units = 80U;
    msg.amplitude = 0.464429604072;
    msg.pitch = 0.680347768459;
    msg.speed = 0.00433767634905;
    msg.speed_units = 194U;
    msg.custom.assign("CEOEUJOUSIJINAABRMKALBWZVOYTUMOZHDFOPAZEXPVNMFVOMRKDRSBLJZMIDSREPIJWVHWBENKFNZKGYJVHYMHIWRHYHLTCRKKMQDBTBVSZUXUPWJBTGCGCUDFTTAEYXZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.287829477364);
    msg.setSource(63079U);
    msg.setSourceEntity(65U);
    msg.setDestination(39659U);
    msg.setDestinationEntity(254U);
    msg.timeout = 37657U;
    msg.lat = 0.473943136542;
    msg.lon = 0.74395398593;
    msg.z = 0.721220372488;
    msg.z_units = 233U;
    msg.amplitude = 0.393715558191;
    msg.pitch = 0.322921735185;
    msg.speed = 0.984569882377;
    msg.speed_units = 50U;
    msg.custom.assign("JKVWALCANSUUATFMKSENEEHPXENOIUOYCIFRFCLLGNZQKCIRHOWEMIFZNDGBXQGHYOLTVFAOFXTFOJFPQWKHVXGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.297191005518);
    msg.setSource(27657U);
    msg.setSourceEntity(226U);
    msg.setDestination(36896U);
    msg.setDestinationEntity(203U);
    msg.timeout = 29234U;
    msg.lat = 0.999813664386;
    msg.lon = 0.666300566575;
    msg.z = 0.664182982198;
    msg.z_units = 137U;
    msg.amplitude = 0.969761740478;
    msg.pitch = 0.0652399013098;
    msg.speed = 0.779776854236;
    msg.speed_units = 36U;
    msg.custom.assign("DIITBXKLFCDKSIMMOOUGEIPZKFVNCQRZQDNLYUVPSQMJBCDEZFHBJTBCSHXRNGBNHXLRDMGYDWUWFHAXPORNWSORDYZLLLWBWKKZOBUPXBUQAJJIYWPNYTKTEGRAOUZJIMMKPQJAUELCGROYAGCHOSPNGMTYXIEJMMYIVWFWEGENQGKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.794922091256);
    msg.setSource(6827U);
    msg.setSourceEntity(138U);
    msg.setDestination(39688U);
    msg.setDestinationEntity(193U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.629507335324);
    msg.setSource(52848U);
    msg.setSourceEntity(233U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(127U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.533801829609);
    msg.setSource(23616U);
    msg.setSourceEntity(71U);
    msg.setDestination(2044U);
    msg.setDestinationEntity(174U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.0309420911793);
    msg.setSource(53030U);
    msg.setSourceEntity(88U);
    msg.setDestination(58884U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.526083734357;
    msg.lon = 0.795175834207;
    msg.z = 0.931798137417;
    msg.z_units = 9U;
    msg.radius = 0.214982850554;
    msg.duration = 10269U;
    msg.speed = 0.150352005743;
    msg.speed_units = 159U;
    msg.custom.assign("MHIVNLBKRXUTLVGXHUCTSJUPKMXVSIXNWUJZRFGEZFNSHLQOCESNIUAKQADEDSEKAJGQRPFALDSEBEIJBUCOTFQRNEPUYGVHIOVAFWQYNTYANXYIHJPAYQWFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.925933043732);
    msg.setSource(34297U);
    msg.setSourceEntity(196U);
    msg.setDestination(15067U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.106389998674;
    msg.lon = 0.42026779777;
    msg.z = 0.562557882405;
    msg.z_units = 133U;
    msg.radius = 0.360114257087;
    msg.duration = 35256U;
    msg.speed = 0.104590083263;
    msg.speed_units = 254U;
    msg.custom.assign("GKPWZVXRGYFSZTQQJCRIUXNPXTDZKMQJGNTASYSZXSUCJZVMKQTWVVCYUOHVGHRAHGGWBOJFHCJSBXJETKDDRYVAIAWAIXBMPELXDBCQUFMONUOPGJZILHGZBEYFPAHQWZQXWEPUQDLRSDCJRTJEZFTAHPKNUBDWYUCSICAFSBCLBNOWFIKMRIRYLTQSPMXCELBMMIGYEHEFHRJKZTNNEPBLMNMGNREOXLHLVOUUKTDDYNLWSOIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.144976780807);
    msg.setSource(29570U);
    msg.setSourceEntity(245U);
    msg.setDestination(42869U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.207901698994;
    msg.lon = 0.360790665936;
    msg.z = 0.824803286216;
    msg.z_units = 166U;
    msg.radius = 0.774138538806;
    msg.duration = 18666U;
    msg.speed = 0.99400668873;
    msg.speed_units = 53U;
    msg.custom.assign("CTDHWDFMNYARXAWPZTQXLVSKLRYCGAQYUWESIVIAJRUYIGKEFZIXMQWBBSQYTGQVFPUJZBKEGOOIJMEWPQMSZWCKEZEINJEDBEIFOCKTAKGGJHDXPLTNYWHKHTECDLCRVHQCSNYDKQSBPGRVVPBNUCMRLXSFOJOKAXZQTZPNPSOXYFUUHVTBDDSAZHXWJHCJMHYUFBFUWDWBFXJL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.300370468251);
    msg.setSource(64245U);
    msg.setSourceEntity(242U);
    msg.setDestination(58243U);
    msg.setDestinationEntity(249U);
    msg.timeout = 56935U;
    msg.flags = 247U;
    msg.lat = 0.673868409119;
    msg.lon = 0.299811863575;
    msg.start_z = 0.534002187616;
    msg.start_z_units = 249U;
    msg.end_z = 0.408741759618;
    msg.end_z_units = 214U;
    msg.radius = 0.415554768639;
    msg.speed = 0.782117599405;
    msg.speed_units = 9U;
    msg.custom.assign("STRDGHBHJOCOVRKFHGAQYYXXDJBBOPTPGSVVDORFNCKIJHZTMZGQWALBPGFZCHCQOLLNQKBYOBMERCWTDPNIAWWOOUWTBRCYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.947655201982);
    msg.setSource(30448U);
    msg.setSourceEntity(21U);
    msg.setDestination(43616U);
    msg.setDestinationEntity(22U);
    msg.timeout = 64565U;
    msg.flags = 62U;
    msg.lat = 0.736349357218;
    msg.lon = 0.843940675609;
    msg.start_z = 0.122712296216;
    msg.start_z_units = 250U;
    msg.end_z = 0.0629969438376;
    msg.end_z_units = 158U;
    msg.radius = 0.8003878203;
    msg.speed = 0.779650879688;
    msg.speed_units = 210U;
    msg.custom.assign("ISCKVXYYWJYHGMDWVZFTERWAQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.226747588838);
    msg.setSource(58632U);
    msg.setSourceEntity(225U);
    msg.setDestination(22770U);
    msg.setDestinationEntity(46U);
    msg.timeout = 65083U;
    msg.flags = 120U;
    msg.lat = 0.468976333164;
    msg.lon = 0.381574516998;
    msg.start_z = 0.813705566685;
    msg.start_z_units = 72U;
    msg.end_z = 0.189671815668;
    msg.end_z_units = 230U;
    msg.radius = 0.702944959755;
    msg.speed = 0.235929992395;
    msg.speed_units = 89U;
    msg.custom.assign("IRYWETCFJKJBTRHWXHQCEILPRXSVCYBNXZNDWQQZHAKJRDCMMSNRAEGRICLAUHHEWSTGAUSOGPWOJANGPBFMGCVRRIKVLNICXNOQLWHUDNSAQIUOALMFKXBFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.663982663461);
    msg.setSource(23036U);
    msg.setSourceEntity(114U);
    msg.setDestination(12465U);
    msg.setDestinationEntity(68U);
    msg.timeout = 44018U;
    msg.lat = 0.841278166908;
    msg.lon = 0.229627383741;
    msg.z = 0.647209907962;
    msg.z_units = 41U;
    msg.speed = 0.739856936469;
    msg.speed_units = 91U;
    msg.custom.assign("VPTAXUXSMSLNAFXDCKYISFRQUVHALCGNJAVPMRFKXZXRRYQWLEOZIHJHGNOCDCZHPWIWEIUBAQGELJADWQEOBTMTXYOPVAFFKSUERJQUULIWVYQRKXWKKNOPCFMZICMBNSJRUJYSPCGQJXJQNPIEZFMKBZATDLVTIPHHDLSFYEZSOHBMYEYKHGTNZNXOCWUDFBOKZQTLBEDWFVLXRTUHWTWVGMLBDNKJRIGMGMPQHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.938452034248);
    msg.setSource(65106U);
    msg.setSourceEntity(174U);
    msg.setDestination(1829U);
    msg.setDestinationEntity(148U);
    msg.timeout = 36094U;
    msg.lat = 0.896874178339;
    msg.lon = 0.272015772601;
    msg.z = 0.045441651115;
    msg.z_units = 89U;
    msg.speed = 0.96084327462;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.641894247937;
    tmp_msg_0.y = 0.933166733038;
    tmp_msg_0.z = 0.730224696525;
    tmp_msg_0.t = 0.537589395272;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DQEIMSQBKXIWHZOMWXUVBBKDVTZVYEOQHXCNMKTOWXZTFQGBVFSPYPCLDMHJMHRUZNEBURCZCXCYLVGQKMRZMKQIDGWUUAZYIJTHDEHABSLCINSFIHFUSJDRWFVSUCNZGGMQPBPPEHNXNBRYUTPWYLDAYDXTWLTNEVKAIQWCWKIESXFCAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.0477259753095);
    msg.setSource(35050U);
    msg.setSourceEntity(4U);
    msg.setDestination(20071U);
    msg.setDestinationEntity(212U);
    msg.timeout = 58528U;
    msg.lat = 0.911824640139;
    msg.lon = 0.814450182627;
    msg.z = 0.967715102534;
    msg.z_units = 209U;
    msg.speed = 0.731553717785;
    msg.speed_units = 115U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.157843255848;
    tmp_msg_0.y = 0.71220810835;
    tmp_msg_0.z = 0.792438312101;
    tmp_msg_0.t = 0.4498809387;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MNYELJOBHBJTAORMHWOHSEAFMWRPUGAGMDCDBQSCHVONGFMYPIIOXJPKOEWXRUQTQGMLKAQVELKFKACEGBWJOLIXLNRRVVNESMUFPJCBHHMDQQKBFAXBIKDBGQEIWWEUKASGDOVRTXSAMITJYIRUNLJTDVAHYJPNWZZUXLFNZFIDCHRPYCQHXTLLUSXKXZUIYNPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.827469165413);
    msg.setSource(29152U);
    msg.setSourceEntity(224U);
    msg.setDestination(45542U);
    msg.setDestinationEntity(55U);
    msg.x = 0.679638053162;
    msg.y = 0.757773040601;
    msg.z = 0.522820336015;
    msg.t = 0.573416037793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.0654131289756);
    msg.setSource(46721U);
    msg.setSourceEntity(198U);
    msg.setDestination(7686U);
    msg.setDestinationEntity(196U);
    msg.x = 0.0357240830826;
    msg.y = 0.890060824261;
    msg.z = 0.393523127218;
    msg.t = 0.19204429429;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.300113119914);
    msg.setSource(33489U);
    msg.setSourceEntity(204U);
    msg.setDestination(15467U);
    msg.setDestinationEntity(31U);
    msg.x = 0.10948704031;
    msg.y = 0.128425861426;
    msg.z = 0.797698569786;
    msg.t = 0.0663074880376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.0809101052381);
    msg.setSource(57257U);
    msg.setSourceEntity(69U);
    msg.setDestination(9318U);
    msg.setDestinationEntity(201U);
    msg.timeout = 12799U;
    msg.name.assign("COGJWOHCHMHBSWZTEOLUXQPRNBGELMZNFIPSHLZBGNHYILTGMRJOZHLKUIZQPPVTZAUKAHEOXQWVUUXIEMYEKDFEWJTDEJEARPUOMYFFRHCLSN");
    msg.custom.assign("FRUNOVBRKXDQXLAJJAHBLJBNYNGOYBOFZIDDVBXNDXAKQPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.911490316963);
    msg.setSource(36406U);
    msg.setSourceEntity(67U);
    msg.setDestination(6565U);
    msg.setDestinationEntity(186U);
    msg.timeout = 14314U;
    msg.name.assign("VRQOYEBDJJWIPEQCJSBDZFIKHTMWTVTQTMXZQVJEUDYNUOQUVCXVCFLZWLHYJXDXOAWGGKGSCLKWAQVRNZVLBMYMOGOEXFKIO");
    msg.custom.assign("TTBPEQZDAGOBNKXSQHNVBHEFWJCIHCZJDRPREWNSHFDWZCIYAUA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.987661041974);
    msg.setSource(14014U);
    msg.setSourceEntity(225U);
    msg.setDestination(40503U);
    msg.setDestinationEntity(105U);
    msg.timeout = 60508U;
    msg.name.assign("WWAZYMPQHWTPOXZLSJVAEEGRNELMCWOYQVVGQEVQMKJAZEKSRUHZRCQPDGNXXWVTMHJSFGGBINBIIIKZVGKYWDYOUDAOUNELELPURBBDTKVMCDQFLPCHZAYTJHUADZTNIOPXRXOUBNTIYYTRLOSSYKNDQGWPKNCWIDTXHFITWZRJVVJCUAKEUFMMLEGBVSXAUNBZXBKWPSHYQLFSI");
    msg.custom.assign("NAJFRPGTYSSMAOMZMMZSLSBNOFUKQKDSOYWKVEEGLMUGWNFYXGJRFKAGRRNVRQQF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.0110871398639);
    msg.setSource(44420U);
    msg.setSourceEntity(27U);
    msg.setDestination(9539U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.456605473632;
    msg.lon = 0.429907419747;
    msg.z = 0.102666792849;
    msg.z_units = 184U;
    msg.speed = 0.406122757132;
    msg.speed_units = 58U;
    msg.start_time = 0.67201618829;
    msg.custom.assign("QBOSEDGULSJWCIHYTTGZYYDNXJOBTVRAQRMXFLGAIFKEZFCRUGIXULTHHCYJSSLIMDVAXTQMYINWBWLMIKYOPQNPTWROPSKYKMSPGDRWHWDSZDTVCABCJVMLOQCXZMMPKEYFVUWJBBNNPOXXUZLHNDHTKHFO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.272032160019);
    msg.setSource(64844U);
    msg.setSourceEntity(128U);
    msg.setDestination(57085U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.946698411651;
    msg.lon = 0.763357648146;
    msg.z = 0.721300134501;
    msg.z_units = 198U;
    msg.speed = 0.106451962713;
    msg.speed_units = 252U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53145U;
    tmp_msg_0.off_x = 0.0246142628934;
    tmp_msg_0.off_y = 0.154316059942;
    tmp_msg_0.off_z = 0.964063406312;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0860523851132;
    msg.custom.assign("HLTFXIEHXQDHLRNRYVAKKMKDRQVNYAKUHQEUSPIIZOLRPZRWSKPYNDGUCBBAJWTVCLYADPXMBJQAYPAIQTBINDUKZNBAHGMPEMFGXEMNOMVQXEDWUHHXYZDOLTJFJWFROILTOTWFANXSNTKZZYLGZMOVEYMEDBQEYRWSHUGOSITHQSRGYWETCSSVVLJFBZVPQVLBXKFQMNFZKCASGFXRRJNISMCJUPWDCOXGIZGCPJJWUVJWUULCOAGDCPIHOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.601372384114);
    msg.setSource(44057U);
    msg.setSourceEntity(169U);
    msg.setDestination(19956U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.66367185694;
    msg.lon = 0.412008735511;
    msg.z = 0.468082624413;
    msg.z_units = 232U;
    msg.speed = 0.515194205634;
    msg.speed_units = 31U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.626030804044;
    tmp_msg_0.y = 0.524437295794;
    tmp_msg_0.z = 0.337019647226;
    tmp_msg_0.t = 0.24587401595;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.79272125383;
    msg.custom.assign("KTHUOFYIPKESNDMJBJTDXTWGLRPEGJAAWFKUHZBSOONYOYULDMJUQZQZPAQXNISVLKGQRWHPDVKOHZFRUKMSTHMTYVSKQYCVUIGHQYRTKGMBVJEFVZWCTJBUYUZDYNDLBESMCRWXZPIFMFSZUNCVWNSLMBSAEXXTCEACHVGIBEONBVRNDBCRZRCVOLFDGNJATAYIUPRBWOXAALQIAKFXFDRGQYJLKGOQWPEHTQPMWDXSEIEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.0501287386009);
    msg.setSource(16336U);
    msg.setSourceEntity(99U);
    msg.setDestination(60619U);
    msg.setDestinationEntity(17U);
    msg.vid = 64048U;
    msg.off_x = 0.240526693502;
    msg.off_y = 0.485311987719;
    msg.off_z = 0.908528341439;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.818130919874);
    msg.setSource(57782U);
    msg.setSourceEntity(161U);
    msg.setDestination(39941U);
    msg.setDestinationEntity(233U);
    msg.vid = 57081U;
    msg.off_x = 0.458533059969;
    msg.off_y = 0.445843870138;
    msg.off_z = 0.235434124663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.0592337079359);
    msg.setSource(57419U);
    msg.setSourceEntity(225U);
    msg.setDestination(9169U);
    msg.setDestinationEntity(64U);
    msg.vid = 18662U;
    msg.off_x = 0.551455428271;
    msg.off_y = 0.925966102521;
    msg.off_z = 0.453975463925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.436966973787);
    msg.setSource(64443U);
    msg.setSourceEntity(89U);
    msg.setDestination(14757U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.0141283617576);
    msg.setSource(28687U);
    msg.setSourceEntity(62U);
    msg.setDestination(43609U);
    msg.setDestinationEntity(187U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.143917501798);
    msg.setSource(61974U);
    msg.setSourceEntity(48U);
    msg.setDestination(10849U);
    msg.setDestinationEntity(208U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.572796691137);
    msg.setSource(59554U);
    msg.setSourceEntity(140U);
    msg.setDestination(39192U);
    msg.setDestinationEntity(192U);
    msg.mid = 19712U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.894472100415);
    msg.setSource(31577U);
    msg.setSourceEntity(149U);
    msg.setDestination(35802U);
    msg.setDestinationEntity(35U);
    msg.mid = 52562U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.92594831418);
    msg.setSource(5931U);
    msg.setSourceEntity(129U);
    msg.setDestination(52733U);
    msg.setDestinationEntity(3U);
    msg.mid = 5816U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.249253646212);
    msg.setSource(15054U);
    msg.setSourceEntity(13U);
    msg.setDestination(10919U);
    msg.setDestinationEntity(24U);
    msg.state = 20U;
    msg.eta = 16070U;
    msg.info.assign("SNVVYAGKKEFJMIFGAMNXCWVOIVQOAFCUBIQGWJFEHZJCWLAQXPVRHARNDPYJUYLTXRTZACPLDPZFZLUKSRIEMORGLNAYJWCRDCEYQGBMAITVZWPAMQBYOKYGUMEEVTJSHWPLMVEZJBHUNBCSHTOXUTFPHGZRFKEKIOMJNTDIYZLZLFXHQYCPBYRNSOSBHOFMZUQROPHK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.159075830978);
    msg.setSource(61542U);
    msg.setSourceEntity(143U);
    msg.setDestination(28566U);
    msg.setDestinationEntity(184U);
    msg.state = 136U;
    msg.eta = 2934U;
    msg.info.assign("PKRFKGDTWTKURVUABDYEERDVHPLAHHNTKXELMOGJZLSALZRREAPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.666275937258);
    msg.setSource(35682U);
    msg.setSourceEntity(4U);
    msg.setDestination(35638U);
    msg.setDestinationEntity(28U);
    msg.state = 25U;
    msg.eta = 2316U;
    msg.info.assign("ABFQYXQXGLBKVVLJTQEKXLOEQPCNWCFVDRYVPRHAHBMUCWYAHHEBVGXUCORUATOQJJFMGZMDZBMDTUSASCWRSEUPMOLRKYMWZETDJGLUVVGBVLQIDXQFRKGHBNXSHSKBPNKANPTMRAANREJMUOZWXRZLRIDEJUWZJIDXFISJWQYYLHDKOYDPGVITQKISCFEVCW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.182681261084);
    msg.setSource(16754U);
    msg.setSourceEntity(45U);
    msg.setDestination(58899U);
    msg.setDestinationEntity(209U);
    msg.system = 59622U;
    msg.duration = 18918U;
    msg.speed = 0.632780878997;
    msg.speed_units = 161U;
    msg.x = 0.364726355516;
    msg.y = 0.770683826598;
    msg.z = 0.684069662133;
    msg.z_units = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.594428517725);
    msg.setSource(48958U);
    msg.setSourceEntity(53U);
    msg.setDestination(13401U);
    msg.setDestinationEntity(85U);
    msg.system = 19269U;
    msg.duration = 52464U;
    msg.speed = 0.663038757881;
    msg.speed_units = 173U;
    msg.x = 0.0411897554584;
    msg.y = 0.71145071628;
    msg.z = 0.247636390258;
    msg.z_units = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.825559655202);
    msg.setSource(57279U);
    msg.setSourceEntity(151U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(14U);
    msg.system = 5487U;
    msg.duration = 62359U;
    msg.speed = 0.838824519168;
    msg.speed_units = 56U;
    msg.x = 0.455345308957;
    msg.y = 0.0456831174164;
    msg.z = 0.349790352861;
    msg.z_units = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.898276144841);
    msg.setSource(9415U);
    msg.setSourceEntity(230U);
    msg.setDestination(58659U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.343713025167;
    msg.lon = 0.431521926724;
    msg.speed = 0.543903390988;
    msg.speed_units = 147U;
    msg.duration = 1376U;
    msg.sys_a = 53744U;
    msg.sys_b = 60245U;
    msg.move_threshold = 0.689954655849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.765286811347);
    msg.setSource(20213U);
    msg.setSourceEntity(22U);
    msg.setDestination(28123U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.465592148483;
    msg.lon = 0.608095724305;
    msg.speed = 0.734410125377;
    msg.speed_units = 111U;
    msg.duration = 32690U;
    msg.sys_a = 54326U;
    msg.sys_b = 48302U;
    msg.move_threshold = 0.0907769560546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.797656296318);
    msg.setSource(10795U);
    msg.setSourceEntity(209U);
    msg.setDestination(60428U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.562990773877;
    msg.lon = 0.188370238624;
    msg.speed = 0.855478032959;
    msg.speed_units = 248U;
    msg.duration = 40685U;
    msg.sys_a = 24162U;
    msg.sys_b = 26328U;
    msg.move_threshold = 0.755858070045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.40035974312);
    msg.setSource(50530U);
    msg.setSourceEntity(97U);
    msg.setDestination(31255U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.214196625809;
    msg.lon = 0.954464166574;
    msg.z = 0.249146820327;
    msg.z_units = 176U;
    msg.speed = 0.777762775049;
    msg.speed_units = 23U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.178767824631;
    tmp_msg_0.lon = 0.142814037031;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QJXXJWCJAWRSDELWVOQXVMQSFYNTNSGRZGVIVMDQKYGTOQUATCLJQSUIFGAPQFTXZRIIRBMVAJGNGZWIPBMEHYEQSNLAWLLZNPHAHHVDEHEMCCKFKZAVNCKKROOXGXTIUIYTKKDGSLSTFJKBXLIDJFDUMTJBNIXRDUFUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.987413127905);
    msg.setSource(45458U);
    msg.setSourceEntity(59U);
    msg.setDestination(29900U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.236478092409;
    msg.lon = 0.997301259428;
    msg.z = 0.565537959986;
    msg.z_units = 121U;
    msg.speed = 0.531717190969;
    msg.speed_units = 203U;
    msg.custom.assign("JWCYUYYRWVBFOGJGQZLGPQABZQEOFYDNSCTVILKHPKINRVSCFBSGJKGMUPDHODJMVMEAZINWYAQXKMNPTDOKCZGDFHAEXUWGOBZWJSFZERHRXNUAHPUMYPEPIILRDEUKVMFOHJRABSJTVZNJBUNRHCHLDIFYHWBQAVELTWXLPMTESZQOMQNIIWQLJLECOGRSNMPAIWWBVBHDXZXOUFCYCULQXXFRAKMTKGZJDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.843197226742);
    msg.setSource(63690U);
    msg.setSourceEntity(115U);
    msg.setDestination(8482U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.169163175259;
    msg.lon = 0.117814644443;
    msg.z = 0.695448238126;
    msg.z_units = 228U;
    msg.speed = 0.745441487211;
    msg.speed_units = 185U;
    msg.custom.assign("ZAJYBDLKVPYBSROTPMNFKNQWWJQMRJKZCXEGPFVXVDWMUTKZLELWMTNHDACBVTDGMREULESBYFWAUWPWSDSHXGBQTMWZKOJOTGJRLKQZOIHBVSBXVIQZEXIDUAPCGRVIZTHBKZXPXKOFCEOADECETJUGGMTFDNFQZQAWSXLDCRGCOHNYJQEIBMONPIFIVHTHSUMYEKYNFXGGIBUXNNCAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.543770295614);
    msg.setSource(59995U);
    msg.setSourceEntity(36U);
    msg.setDestination(24429U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.572703564398;
    msg.lon = 0.703234353677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.295311876606);
    msg.setSource(12013U);
    msg.setSourceEntity(252U);
    msg.setDestination(41716U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.403020758869;
    msg.lon = 0.857368764986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.502668090902);
    msg.setSource(11218U);
    msg.setSourceEntity(214U);
    msg.setDestination(29435U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.359679045145;
    msg.lon = 0.455632848297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.694136002571);
    msg.setSource(49265U);
    msg.setSourceEntity(224U);
    msg.setDestination(15780U);
    msg.setDestinationEntity(146U);
    msg.timeout = 13069U;
    msg.lat = 0.189632113721;
    msg.lon = 0.135113673976;
    msg.z = 0.78717417706;
    msg.z_units = 226U;
    msg.pitch = 0.960333882874;
    msg.amplitude = 0.966512591405;
    msg.duration = 23614U;
    msg.speed = 0.262657116666;
    msg.speed_units = 182U;
    msg.radius = 0.387293530539;
    msg.direction = 120U;
    msg.custom.assign("CUWKABPSFPWISRTIIKBUGLFLUXKINAZYAXEUHDCGTSGOSGVWJSJCLXAMIZZEINJFSPDMUOTCYFRDHGMTIDRYRMKGNFVXCRPJBXDERNNSPHWUBWHJKOEDVASXBXAXWGTLXFZNQYBEJUYYIZFMTTJQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.476459763347);
    msg.setSource(59825U);
    msg.setSourceEntity(64U);
    msg.setDestination(61960U);
    msg.setDestinationEntity(30U);
    msg.timeout = 1981U;
    msg.lat = 0.660759577903;
    msg.lon = 0.25062651552;
    msg.z = 0.996756598201;
    msg.z_units = 163U;
    msg.pitch = 0.611631184535;
    msg.amplitude = 0.0026539844129;
    msg.duration = 5054U;
    msg.speed = 0.250725666306;
    msg.speed_units = 173U;
    msg.radius = 0.214962012344;
    msg.direction = 38U;
    msg.custom.assign("ROAMZWUXFIZOBBOSSQITXMNLQDVRCQWUTLFMLZVNRPWRQJGIPCNXLADCMCSUPYVCJSWSQBYETSHKMMFGKFKLZBYQIXBDZXBAUHGHUBYBYUTDHMHDPEVOJSLRPMGSRXWVFIQTLAPEWQCBLKPNWFRNAJYJZSUKFAJOIZFROOWEGNPHVNEZIOVWNDQTONYVYUICXJYPXQZGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.742486164745);
    msg.setSource(60107U);
    msg.setSourceEntity(134U);
    msg.setDestination(35599U);
    msg.setDestinationEntity(118U);
    msg.timeout = 34149U;
    msg.lat = 0.759319391062;
    msg.lon = 0.876694807385;
    msg.z = 0.92267561657;
    msg.z_units = 227U;
    msg.pitch = 0.769087634492;
    msg.amplitude = 0.487929765018;
    msg.duration = 54977U;
    msg.speed = 0.394904414986;
    msg.speed_units = 169U;
    msg.radius = 0.477527762274;
    msg.direction = 26U;
    msg.custom.assign("LJWRLHTVYZQZGQUSOLTSZMMCIOJMURLILPJWGIXDERDRBJAGYKXHKANOIPQNFZDVHMTUSTHQWGDIBDGWBTSEINEDGPUXUSAMFIXNSBQPUJWPOKVTDWXWFPEXSYZBJCPHGCZZPDYLNUQCRTFXVPETKKVMQNFXVRINKCUBRKKWFEOFBCAOHUMJNGEMHILUAWLEOSBAJYHVMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.561672204825);
    msg.setSource(57821U);
    msg.setSourceEntity(32U);
    msg.setDestination(36370U);
    msg.setDestinationEntity(64U);
    msg.formation_name.assign("DQIBQNCELDUOSWTKNVFJIKYJSWHUWNEDMZOUFXGHRBIDXQLUPSSBNUAVTZPIWZPJYRBXQGWWMQP");
    msg.reference_frame = 146U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36215U;
    tmp_msg_0.off_x = 0.141671527242;
    tmp_msg_0.off_y = 0.125559798734;
    tmp_msg_0.off_z = 0.737804853258;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YUCQIQKHQJZCDEWPDJFFUCYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.299605127493);
    msg.setSource(39698U);
    msg.setSourceEntity(92U);
    msg.setDestination(38002U);
    msg.setDestinationEntity(87U);
    msg.formation_name.assign("MWWSFDTLVAA");
    msg.reference_frame = 212U;
    msg.custom.assign("KOBMDUAAVGKABCMOOZHLTIFFLCQVNDLUISPHEFHKMRFDRWPPTYXIBFJSMFXQFVAIESUAKAAEWYHGNTUZWMNTQOCDXCWQHFXWJZVSQYLTUYOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.922859091857);
    msg.setSource(21968U);
    msg.setSourceEntity(209U);
    msg.setDestination(43504U);
    msg.setDestinationEntity(143U);
    msg.formation_name.assign("PKLSXOVGUSUEAYACMVHXVJGLWAPP");
    msg.reference_frame = 120U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62174U;
    tmp_msg_0.off_x = 0.0107587314564;
    tmp_msg_0.off_y = 0.0841096939379;
    tmp_msg_0.off_z = 0.994433872858;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PUGOHOSGIUXJMPTBNVAWCXVJQEZYWVAKPREONHJYDTBCGZIIRVQCUBHMLKQOZMEROSQOUOMTDKNFJNHZSJZGVULAUJDBVQMYNXCZCWFCWSUXRCGDTDFGWHFRWMPWWJFWQQHUCVHKKLBJZMHJAAFBLDBCLXNIKSTIYBDHYTIXLICQSRTXYXZOMANVYOKPFPKERXLGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.449984276008);
    msg.setSource(17104U);
    msg.setSourceEntity(181U);
    msg.setDestination(19173U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("UJURSCJLRKBOFKPPDOPBGIPKVNHGOKPICEXBWSUGLFKKWZKIHBRIYA");
    msg.formation_name.assign("GMCHFCGTMETACVLPVTZRADXGPDM");
    msg.plan_id.assign("WLKTDOBMLCTJZNKFZFLMYYOFIVSGVODKTHJIVSYUHZZDSGCBHXPTTYPMLKYDXRFAFQIJHABNDXZRJXLUMMAEBKSXGBUUPSCOGVTXCPHICTRWTAQVAAOPBSWIVOPQJLBTHMUQEMIOQLMNREVQFUWKYFVWZDBCJJYHMPJGNRNOHYEBIPXPEXKCLTQXWFNUBRRYYDNOWASKUCNGMUCLEVSDEHNRDAVAKCEPDFQGJAK");
    msg.description.assign("QBBCLFYWQCZUJXELUGHHSRLOVLTMFKTWLDOKHCODKNMUCKKZYJSXHFTJESPMECVVTGUYYPCHHRKFOHQJITLOSWDABRTVUFNAVIPSXIXAOARHW");
    msg.leader_speed = 0.818938266937;
    msg.leader_bank_lim = 0.959335120232;
    msg.pos_sim_err_lim = 0.566643681798;
    msg.pos_sim_err_wrn = 0.175573089963;
    msg.pos_sim_err_timeout = 37255U;
    msg.converg_max = 0.546319275664;
    msg.converg_timeout = 26317U;
    msg.comms_timeout = 15369U;
    msg.turb_lim = 0.445800671862;
    msg.custom.assign("NJADRNXBLCFQQRFWXHJTTHLJDKWVUJKAMRMASLBNEVVROFEEITWMOTYIGOAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.786466215624);
    msg.setSource(44521U);
    msg.setSourceEntity(199U);
    msg.setDestination(23958U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("FIAGFFOTEDJRJIRRPCYWKHKLPCOUESJSWNIMKEGVUEWIDVXYLWUUDXROUJPXHBGRFONQKBRAPAMRZDNYECVDDXUUSZRSYEGXQVBAYQRFFAHYFHOIOFAMGDFQGVNJHVSTVBLPJIZEB");
    msg.formation_name.assign("LUMRUFWLCUHVHJASPEOAUOTSWCTMZQXMNBRIJKGIWDDCJJMIJWAGGLWRNQVPNAOETYHGEOFADBXVUKYTVKBNBXVELBFKNCIFZFVNXSQPFWHFPOYHUBJKOPCWESQCZKAWGMYLQVZQYLZYHQMCWISVUOIDBDVHCXDEE");
    msg.plan_id.assign("WTKDSJEFBJBHEBWHXMSOHRNUJMYXXWAQPFDFIRSAUHXIFJFLGCVBYAWOJXBAZVZMJZZGGHSXMEPEAIXBGYZCNYNDYSWVIGVROORUDDZTGEHLOTDJLBYVFRTTIKGJBYNSCWWVTHCCKZLWJDZPVRKXDAYQSLGAORHUUUUYMTGIOOCMUISEPEQMYUQWSZCVAUKCKPLPOTLIRLNQERQE");
    msg.description.assign("BOGAKXYBFMWPKSNOXEMRHLWWUCIZSRZWQJTACTCRQSMJTKPVYJGDHNPAQGMBBLPDEUAJLRYZUOIXHUDNLSFHRDEFMGAMEEJTORVAKMYFCQESQUXSWDWTKMGIZRSZDIVUFHIXKDYMLWMZJQXKVPVJPYDKGBWUNJLEXHNBTCIQYUOHGYTLYGJLPABWBQDHEP");
    msg.leader_speed = 0.649846990837;
    msg.leader_bank_lim = 0.987151014089;
    msg.pos_sim_err_lim = 0.0696706315765;
    msg.pos_sim_err_wrn = 0.807240317985;
    msg.pos_sim_err_timeout = 60000U;
    msg.converg_max = 0.686464537423;
    msg.converg_timeout = 42511U;
    msg.comms_timeout = 33355U;
    msg.turb_lim = 0.690579495294;
    msg.custom.assign("NDPSAOFJLXVICJNMEKUZOQDBFURBDTWHGXKWYKZSRHDEOPETAYXMDNQYGKENEYWKJAYPRXDSLBIVQAULOOQEVSMOAVTHVCVIJJJHFSAUCPBWPUGNBQDJZKMISWJVYWLNXISYGYDHZAORJTWFCQXNOGEHVTLQTFHZHZJZXKCDGZQFDRECLPPBPHUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.148558955659);
    msg.setSource(1685U);
    msg.setSourceEntity(141U);
    msg.setDestination(33455U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("TYTDSMIHOAWLDYHETSCKZFVKFBRCUGFPPJQTWVYPVSHYOUNZWPSEXHYNRAJXHVPXLMCONKKLQAQBKXMOROBQREMWDIRAWVPBIJSMGJTKQOZCSBYYJHOHBMGFLYGIRUFWUEQAKAEE");
    msg.formation_name.assign("IQZPOSKSRMRIMMSJOXZTUPWKWVNRYIJKNLPMCSQPAUTZQDAKNMAVIJBJGGCRHYTFQZOSFTQOEUQBDQMWAAFVFKGYTQMMNVYQEZDWPGXDXFOHZLHBRAHRLPRHBSJC");
    msg.plan_id.assign("PTMHULXPWQAJRDJYRIOBOMNMZYFHSCBX");
    msg.description.assign("KRYRGPBOGFYWVNLKAYNWYMJZOQWQLJTZEDXZMYCGKPVAXYBQGLIMEHOZITHOPSFZJKENCZTXUGCLVXNNLJKUQSWYXPMCIFCHLEIZJKVEAWXGOJFNFCJROHFVIFSTTBBQMGHBHED");
    msg.leader_speed = 0.667227089306;
    msg.leader_bank_lim = 0.553453791347;
    msg.pos_sim_err_lim = 0.209984929955;
    msg.pos_sim_err_wrn = 0.0559439324197;
    msg.pos_sim_err_timeout = 54791U;
    msg.converg_max = 0.735518158435;
    msg.converg_timeout = 48685U;
    msg.comms_timeout = 46572U;
    msg.turb_lim = 0.792146865462;
    msg.custom.assign("VKUXZCNSYCWTWENIDXSWTXDXJVYDJJLRRGBQGENFMCBVKDHQLXWWHPUCFYEDZAJJWUXHKVLWIZBNERNFSPOVXHFDECOZBEAROYROQYMMUCISUZKRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.490442232282);
    msg.setSource(2494U);
    msg.setSourceEntity(144U);
    msg.setDestination(41331U);
    msg.setDestinationEntity(180U);
    msg.control_src = 23617U;
    msg.control_ent = 189U;
    msg.timeout = 0.651292204347;
    msg.loiter_radius = 0.703084861132;
    msg.altitude_interval = 0.893355947506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.303495706876);
    msg.setSource(24787U);
    msg.setSourceEntity(37U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(192U);
    msg.control_src = 61425U;
    msg.control_ent = 214U;
    msg.timeout = 0.899658000058;
    msg.loiter_radius = 0.538024393411;
    msg.altitude_interval = 0.0103593578453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.958299850577);
    msg.setSource(47138U);
    msg.setSourceEntity(91U);
    msg.setDestination(46816U);
    msg.setDestinationEntity(149U);
    msg.control_src = 21463U;
    msg.control_ent = 126U;
    msg.timeout = 0.979451591502;
    msg.loiter_radius = 0.864284252788;
    msg.altitude_interval = 0.219282524061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.326321456237);
    msg.setSource(55027U);
    msg.setSourceEntity(234U);
    msg.setDestination(62313U);
    msg.setDestinationEntity(148U);
    msg.flags = 95U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.740598376371;
    tmp_msg_0.speed_units = 150U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.711929161343;
    tmp_msg_1.z_units = 58U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.97698610107;
    msg.lon = 0.82619458392;
    msg.radius = 0.0292728747743;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.712360640238);
    msg.setSource(21077U);
    msg.setSourceEntity(27U);
    msg.setDestination(24717U);
    msg.setDestinationEntity(155U);
    msg.flags = 117U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.268290464126;
    tmp_msg_0.speed_units = 74U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.284978615903;
    tmp_msg_1.z_units = 40U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.872216856715;
    msg.lon = 0.17577860892;
    msg.radius = 0.061491995244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.988527334156);
    msg.setSource(35173U);
    msg.setSourceEntity(201U);
    msg.setDestination(7275U);
    msg.setDestinationEntity(5U);
    msg.flags = 3U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.587807336648;
    tmp_msg_0.speed_units = 161U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.174810414463;
    tmp_msg_1.z_units = 201U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.708378946994;
    msg.lon = 0.266155316606;
    msg.radius = 0.293411141369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.271343604542);
    msg.setSource(2838U);
    msg.setSourceEntity(167U);
    msg.setDestination(30199U);
    msg.setDestinationEntity(113U);
    msg.control_src = 28296U;
    msg.control_ent = 121U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 209U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.578027785434;
    tmp_tmp_msg_0_0.speed_units = 141U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.626534239447;
    tmp_tmp_msg_0_1.z_units = 212U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.15649680217;
    tmp_msg_0.lon = 0.702479615952;
    tmp_msg_0.radius = 0.67370100887;
    msg.reference.set(tmp_msg_0);
    msg.state = 232U;
    msg.proximity = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.812784301755);
    msg.setSource(26252U);
    msg.setSourceEntity(78U);
    msg.setDestination(63871U);
    msg.setDestinationEntity(114U);
    msg.control_src = 31176U;
    msg.control_ent = 49U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 12U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.719780358279;
    tmp_tmp_msg_0_0.speed_units = 59U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.83630183075;
    tmp_tmp_msg_0_1.z_units = 201U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.671967360662;
    tmp_msg_0.lon = 0.865881031774;
    tmp_msg_0.radius = 0.877514187433;
    msg.reference.set(tmp_msg_0);
    msg.state = 118U;
    msg.proximity = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.901744583309);
    msg.setSource(56508U);
    msg.setSourceEntity(123U);
    msg.setDestination(12265U);
    msg.setDestinationEntity(51U);
    msg.control_src = 3537U;
    msg.control_ent = 215U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 97U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.73916508201;
    tmp_tmp_msg_0_0.speed_units = 220U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.511647518745;
    tmp_tmp_msg_0_1.z_units = 95U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0774771710494;
    tmp_msg_0.lon = 0.824142842667;
    tmp_msg_0.radius = 0.812479393447;
    msg.reference.set(tmp_msg_0);
    msg.state = 5U;
    msg.proximity = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.0141427506602);
    msg.setSource(33039U);
    msg.setSourceEntity(87U);
    msg.setDestination(10809U);
    msg.setDestinationEntity(178U);
    msg.ax_cmd = 0.197522888053;
    msg.ay_cmd = 0.347006484821;
    msg.az_cmd = 0.453724821627;
    msg.ax_des = 0.857353045179;
    msg.ay_des = 0.574838956562;
    msg.az_des = 0.50726530138;
    msg.virt_err_x = 0.48192304784;
    msg.virt_err_y = 0.0169998956391;
    msg.virt_err_z = 0.129876976079;
    msg.surf_fdbk_x = 0.887520519465;
    msg.surf_fdbk_y = 0.832043966416;
    msg.surf_fdbk_z = 0.871514336046;
    msg.surf_unkn_x = 0.836684365923;
    msg.surf_unkn_y = 0.955513469605;
    msg.surf_unkn_z = 0.912236326258;
    msg.ss_x = 0.524234246868;
    msg.ss_y = 0.960014054604;
    msg.ss_z = 0.234417912132;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JJMDCHFVLCBFBIQULCLNFDGCSAIWNGDHVGAKDLTSVEMIHWHWKJUJZYJQTFSMGTSNQQAHWMDUAWXOZP");
    tmp_msg_0.dist = 0.281786530232;
    tmp_msg_0.err = 0.39068907074;
    tmp_msg_0.ctrl_imp = 0.712053663517;
    tmp_msg_0.rel_dir_x = 0.530653223793;
    tmp_msg_0.rel_dir_y = 0.652517759919;
    tmp_msg_0.rel_dir_z = 0.806299266033;
    tmp_msg_0.err_x = 0.628619323569;
    tmp_msg_0.err_y = 0.617388405864;
    tmp_msg_0.err_z = 0.152285499699;
    tmp_msg_0.rf_err_x = 0.319911090067;
    tmp_msg_0.rf_err_y = 0.510956171746;
    tmp_msg_0.rf_err_z = 0.632370478219;
    tmp_msg_0.rf_err_vx = 0.0793353631656;
    tmp_msg_0.rf_err_vy = 0.720561080439;
    tmp_msg_0.rf_err_vz = 0.811921103616;
    tmp_msg_0.ss_x = 0.617661137186;
    tmp_msg_0.ss_y = 0.57601452844;
    tmp_msg_0.ss_z = 0.697154326423;
    tmp_msg_0.virt_err_x = 0.892351072147;
    tmp_msg_0.virt_err_y = 0.81226344906;
    tmp_msg_0.virt_err_z = 0.708377159386;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.575887278877);
    msg.setSource(58985U);
    msg.setSourceEntity(246U);
    msg.setDestination(32624U);
    msg.setDestinationEntity(152U);
    msg.ax_cmd = 0.0446036086546;
    msg.ay_cmd = 0.880165256007;
    msg.az_cmd = 0.791963168545;
    msg.ax_des = 0.739969306108;
    msg.ay_des = 0.603599059827;
    msg.az_des = 0.926073427959;
    msg.virt_err_x = 0.303455980954;
    msg.virt_err_y = 0.0953478457905;
    msg.virt_err_z = 0.14750511445;
    msg.surf_fdbk_x = 0.344704030407;
    msg.surf_fdbk_y = 0.727979096508;
    msg.surf_fdbk_z = 0.267114494255;
    msg.surf_unkn_x = 0.618822215271;
    msg.surf_unkn_y = 0.25392431754;
    msg.surf_unkn_z = 0.741148190827;
    msg.ss_x = 0.490829767331;
    msg.ss_y = 0.648138631226;
    msg.ss_z = 0.50014671144;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ECMMGUMPDQJOTQBOWNBJCVBWHCTPPCBZDFTXYFSWBFMEPDTLYAKSVXHTOXWCCLHVISNXEYHRTSMXKKVVIXWYUBRGQECFULNPFOHQSYAKIIVFPKBDVWVJQCZPZUPJPLJ");
    tmp_msg_0.dist = 0.708577543796;
    tmp_msg_0.err = 0.00494639622668;
    tmp_msg_0.ctrl_imp = 0.91954079372;
    tmp_msg_0.rel_dir_x = 0.257634716409;
    tmp_msg_0.rel_dir_y = 0.269696272147;
    tmp_msg_0.rel_dir_z = 0.0780818789205;
    tmp_msg_0.err_x = 0.528588443142;
    tmp_msg_0.err_y = 0.196268122087;
    tmp_msg_0.err_z = 0.0452215617216;
    tmp_msg_0.rf_err_x = 0.897006783269;
    tmp_msg_0.rf_err_y = 0.0887935014142;
    tmp_msg_0.rf_err_z = 0.511542093729;
    tmp_msg_0.rf_err_vx = 0.992826105087;
    tmp_msg_0.rf_err_vy = 0.0374285095605;
    tmp_msg_0.rf_err_vz = 0.4045411695;
    tmp_msg_0.ss_x = 0.761964258;
    tmp_msg_0.ss_y = 0.0572484373052;
    tmp_msg_0.ss_z = 0.596974471021;
    tmp_msg_0.virt_err_x = 0.132829316693;
    tmp_msg_0.virt_err_y = 0.756243094044;
    tmp_msg_0.virt_err_z = 0.533615978426;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.239662894748);
    msg.setSource(36306U);
    msg.setSourceEntity(197U);
    msg.setDestination(5141U);
    msg.setDestinationEntity(56U);
    msg.ax_cmd = 0.176656729368;
    msg.ay_cmd = 0.719390289555;
    msg.az_cmd = 0.744516772544;
    msg.ax_des = 0.588570242242;
    msg.ay_des = 0.486307257784;
    msg.az_des = 0.441561348748;
    msg.virt_err_x = 0.306590565358;
    msg.virt_err_y = 0.219814537695;
    msg.virt_err_z = 0.0786918167986;
    msg.surf_fdbk_x = 0.25066108943;
    msg.surf_fdbk_y = 0.429512421438;
    msg.surf_fdbk_z = 0.89190197644;
    msg.surf_unkn_x = 0.984683845122;
    msg.surf_unkn_y = 0.628271731447;
    msg.surf_unkn_z = 0.167962271427;
    msg.ss_x = 0.389558258852;
    msg.ss_y = 0.567853675644;
    msg.ss_z = 0.600972625454;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NJPPCRMBWGDIEYUWQJZBQVEKYXYYXBLA");
    tmp_msg_0.dist = 0.32110753601;
    tmp_msg_0.err = 0.821082548311;
    tmp_msg_0.ctrl_imp = 0.964746267819;
    tmp_msg_0.rel_dir_x = 0.801553195763;
    tmp_msg_0.rel_dir_y = 0.797424859982;
    tmp_msg_0.rel_dir_z = 0.66380390294;
    tmp_msg_0.err_x = 0.984126979115;
    tmp_msg_0.err_y = 0.399082342925;
    tmp_msg_0.err_z = 0.216075063317;
    tmp_msg_0.rf_err_x = 0.761304962218;
    tmp_msg_0.rf_err_y = 0.722364825689;
    tmp_msg_0.rf_err_z = 0.628107682184;
    tmp_msg_0.rf_err_vx = 0.543511517116;
    tmp_msg_0.rf_err_vy = 0.411243583361;
    tmp_msg_0.rf_err_vz = 0.475190385613;
    tmp_msg_0.ss_x = 0.685813696501;
    tmp_msg_0.ss_y = 0.301091792592;
    tmp_msg_0.ss_z = 0.11632230677;
    tmp_msg_0.virt_err_x = 0.32849935618;
    tmp_msg_0.virt_err_y = 0.059726672268;
    tmp_msg_0.virt_err_z = 0.641817918563;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.794169687886);
    msg.setSource(40151U);
    msg.setSourceEntity(44U);
    msg.setDestination(55451U);
    msg.setDestinationEntity(232U);
    msg.s_id.assign("UATNYXBNLGPMLXNZOXUKHZOZNESRHFJHOPPHUIEXNROLKHAEZECWDZIQBOJYIKWCEPUVGYKLBKATJWLQAPLLJSXMFPMLJGLFTCSCIWNDEVKCDAXQQCVWSVGBJRFTXQTMGUHA");
    msg.dist = 0.630260874742;
    msg.err = 0.2676671932;
    msg.ctrl_imp = 0.0380609821964;
    msg.rel_dir_x = 0.230664293632;
    msg.rel_dir_y = 0.339077761805;
    msg.rel_dir_z = 0.265254864363;
    msg.err_x = 0.65011238923;
    msg.err_y = 0.866137844549;
    msg.err_z = 0.371664275423;
    msg.rf_err_x = 0.0149934597115;
    msg.rf_err_y = 0.920826996641;
    msg.rf_err_z = 0.808745070627;
    msg.rf_err_vx = 0.362179995756;
    msg.rf_err_vy = 0.0148019810762;
    msg.rf_err_vz = 0.806662821443;
    msg.ss_x = 0.202680694614;
    msg.ss_y = 0.35863950182;
    msg.ss_z = 0.379738975835;
    msg.virt_err_x = 0.957102205716;
    msg.virt_err_y = 0.30894542527;
    msg.virt_err_z = 0.568282179419;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.873496918668);
    msg.setSource(24028U);
    msg.setSourceEntity(131U);
    msg.setDestination(45320U);
    msg.setDestinationEntity(243U);
    msg.s_id.assign("JDHGMBFNTIJCJWWWEPFEFQVEHSHEAOWLVSLNFMYWNPJDNFOYPRMSGNXYPTRDUTCTKLOUURJACXLKOHGDSVKGYDVSXRTIGWCZREPRIRZBZQANBDOIPITKHSZWQQYAONXRPGTSOYYSWGPATUGFSXHFDHBCSULUBNUYELFNQZEJONGKVMDCBIEKBXRKZCJ");
    msg.dist = 0.0472450121133;
    msg.err = 0.578955962588;
    msg.ctrl_imp = 0.502828193289;
    msg.rel_dir_x = 0.494225052546;
    msg.rel_dir_y = 0.85893088052;
    msg.rel_dir_z = 0.969392929136;
    msg.err_x = 0.411186140659;
    msg.err_y = 0.245656005552;
    msg.err_z = 0.724193551358;
    msg.rf_err_x = 0.181863173958;
    msg.rf_err_y = 0.40030155387;
    msg.rf_err_z = 0.488458389809;
    msg.rf_err_vx = 0.0274375805017;
    msg.rf_err_vy = 0.697180047137;
    msg.rf_err_vz = 0.926983620802;
    msg.ss_x = 0.136606122744;
    msg.ss_y = 0.875438332243;
    msg.ss_z = 0.67442262179;
    msg.virt_err_x = 0.425272240581;
    msg.virt_err_y = 0.882590663033;
    msg.virt_err_z = 0.562043299011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.0724896929053);
    msg.setSource(23819U);
    msg.setSourceEntity(209U);
    msg.setDestination(25599U);
    msg.setDestinationEntity(95U);
    msg.s_id.assign("ZJNBXHXBKDXFMRESLYFUYENRGJNKWTSDOHUJKLNZZUXHJWOWMAZBR");
    msg.dist = 0.199784157833;
    msg.err = 0.733731315686;
    msg.ctrl_imp = 0.499287307771;
    msg.rel_dir_x = 0.421989224363;
    msg.rel_dir_y = 0.409822173181;
    msg.rel_dir_z = 0.439517436721;
    msg.err_x = 0.997526254403;
    msg.err_y = 0.815105881378;
    msg.err_z = 0.528552100066;
    msg.rf_err_x = 0.568586210202;
    msg.rf_err_y = 0.808652273308;
    msg.rf_err_z = 0.890001647483;
    msg.rf_err_vx = 0.505235757012;
    msg.rf_err_vy = 0.887508060296;
    msg.rf_err_vz = 0.77015369324;
    msg.ss_x = 0.680130730018;
    msg.ss_y = 0.0206365172477;
    msg.ss_z = 0.775709078672;
    msg.virt_err_x = 0.973791527695;
    msg.virt_err_y = 0.668147494741;
    msg.virt_err_z = 0.696007036757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.550322901015);
    msg.setSource(62647U);
    msg.setSourceEntity(2U);
    msg.setDestination(58808U);
    msg.setDestinationEntity(156U);
    msg.timeout = 1466U;
    msg.rpm = 0.0396079130905;
    msg.direction = 92U;
    msg.custom.assign("NFSAUCEWCWCVRFZCJKLVFLRKVPOPDBEURDXEVTOAZPLXUDOWEHBGNGYZGMVHDGYNVAAPGOYTVZZDXWEOXWRETOAHOLLOTNNZJMQBUBHVLHQMLKFYZXMIATPRWLJNGQKGISALEBSRMUFCFO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.489791058946);
    msg.setSource(13883U);
    msg.setSourceEntity(68U);
    msg.setDestination(41123U);
    msg.setDestinationEntity(232U);
    msg.timeout = 41670U;
    msg.rpm = 0.626215979432;
    msg.direction = 67U;
    msg.custom.assign("SQHSGJMJMHWDBAEIFANZAWFEJCJAOUSMHDXTXSTRGUUIZTNNGVZNGZMSQBOOUKAPCTVQDPBQCJSVSKINQXRGWRXUROPYZJPHFANJYBKIMOVOUZNLBPLWETN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.968770778978);
    msg.setSource(24814U);
    msg.setSourceEntity(54U);
    msg.setDestination(9229U);
    msg.setDestinationEntity(26U);
    msg.timeout = 54563U;
    msg.rpm = 0.438728931668;
    msg.direction = 251U;
    msg.custom.assign("MYUNIKRBSEXUDPEDOVWPFSMDNPAABBILBVYZLCWGABMKQJRHGACHQQOTAKKRVCQYHXKZGRPKAHKAUIIQCOHBTZEDDENMFIOSNXHSGMPTNTUXJOETBQOIYCWYCGXSYHHRICOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.0658196942776);
    msg.setSource(60334U);
    msg.setSourceEntity(249U);
    msg.setDestination(53472U);
    msg.setDestinationEntity(185U);
    msg.formation_name.assign("ROHOOKHWMPDFGOISUFGTUSVQRKMGKPDENVDNKTZZKSCSBFYWAVYLHLDZ");
    msg.type = 190U;
    msg.op = 61U;
    msg.group_name.assign("BGSPBVKMFTIBLKCBXOJLARXSOFOTRQIWWHYPGYWQQOVFWVBZQNEDZMITHELUSMEHTFNXKQZPDEDUGPZQYSJCSZJTXZPLABPIAUPAZWDKWNDRHNUNCXKTFDRYHVCGLSGVEHHJRIDGDKKYSCBCBUIMGVJDCUNXZJEOILPMUOEXKEUZASFOGDMXCWTAUMRIPHQJWTNIKCRYOQXAONRJRVQVJHVWTNFRYCFINYLGFYLEPQKSWUL");
    msg.plan_id.assign("UAYQJVXSHITKZHCLIEOPVMFAITBOTJEKPLHHWRPBGRQIXKSQAKEMDFZDTCJYOMEQMPBZGSJQCGKGMCNZYNLPACJUKHWRQYWRWXOLETXDPPKXFZ");
    msg.description.assign("YKQDITBEBHCSAWONXFXONJPHIGMFGTXYEBFZKPZNOMVAQFYTDDUWABGGNKOZHIEFZJYAWIWJIWSELOMKXRKPBYUGGPHXGOSFZHJULTLHIPMUDRGAAIQRJNYDEKXRLQFCCRXLQKBHPVCIVVYSERVDCLCYYWMAUZONUABTMCECJVBTMYIGMORSDTSZNXQWEUEVXSFCNS");
    msg.reference_frame = 174U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58496U;
    tmp_msg_0.off_x = 0.279541713521;
    tmp_msg_0.off_y = 0.530284521568;
    tmp_msg_0.off_z = 0.951299445004;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.917865876636;
    msg.leader_speed_min = 0.981530017359;
    msg.leader_speed_max = 0.0031281414133;
    msg.leader_alt_min = 0.607129723021;
    msg.leader_alt_max = 0.0524737456736;
    msg.pos_sim_err_lim = 0.246745531161;
    msg.pos_sim_err_wrn = 0.701253315054;
    msg.pos_sim_err_timeout = 63625U;
    msg.converg_max = 0.0816560587692;
    msg.converg_timeout = 3814U;
    msg.comms_timeout = 19880U;
    msg.turb_lim = 0.548953016825;
    msg.custom.assign("SGGGRIVXYJVMCOYWOJPJGNBYRZQAQIEQHJBBAWUZOKLSELXGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.347057468891);
    msg.setSource(57076U);
    msg.setSourceEntity(40U);
    msg.setDestination(6720U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("JNCRDMSPUUWAEXXOODFZYXTZHAYVOQCJTLCQLDVIAXCRQTIVAENYZZLHENAZKFQZBLKOPDYNLDUDC");
    msg.type = 149U;
    msg.op = 54U;
    msg.group_name.assign("ICJETXIQDOFOQUZAJWMVETIXEHMKXYUARJDZLNLM");
    msg.plan_id.assign("FJXJNGGADOPEABEESGNHURVXFBJQLVMNLNHCXAMWARNUUWOETRLMVXPKDIYJDOHLRGBVVREWYTWFPTRYQIJAYIVXUBPOJ");
    msg.description.assign("UDTBWHUSTPHGYQMLWBNLKEIADHBFTDUHPTOVIKREBOPXOBCZEXZOJXUDZZUVGHAOJFBUGBCUCYXZMJLNWHYNKGCEGDUOOKRACWVMTKTOYCFWARIQZXADEJWEAKPIILTNRQRQNVDAIMGKISYSADZFQKNFCPYTSSLJYBCJYMWPQVMVOSNI");
    msg.reference_frame = 74U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45030U;
    tmp_msg_0.off_x = 0.499146685192;
    tmp_msg_0.off_y = 0.0233401068636;
    tmp_msg_0.off_z = 0.22732823697;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.528966382348;
    msg.leader_speed_min = 0.291928422789;
    msg.leader_speed_max = 0.463938607687;
    msg.leader_alt_min = 0.739581080994;
    msg.leader_alt_max = 0.739433193747;
    msg.pos_sim_err_lim = 0.00435106038481;
    msg.pos_sim_err_wrn = 0.872370989041;
    msg.pos_sim_err_timeout = 17455U;
    msg.converg_max = 0.907036314546;
    msg.converg_timeout = 63419U;
    msg.comms_timeout = 45724U;
    msg.turb_lim = 0.233393810748;
    msg.custom.assign("SCZHMOIUALTDRXIWCKTHXPJCDYUGFLQFBHLIQPVMNDMXYNKTOBRRHOLZEDMYSRACNECIPUGDBVJESWVJGDJPJKBCZYBFMTZZEWYBXVFDLMEJNHNNZXIKKESQQSUZTGLUDASUHMVWHJAWKWVGCAIUAVEYYXZRGACNRZRANAOYROFWEQVQEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.766649952783);
    msg.setSource(6124U);
    msg.setSourceEntity(142U);
    msg.setDestination(59692U);
    msg.setDestinationEntity(52U);
    msg.formation_name.assign("UHFTWUIIHJATIKSPKYMUIMJTHCJOSAUHQSDUMTBKYHOOLCXDAVGKCLEXQQKCLVNOCPWDHLPWGIBAGAGMXSIONRNGVCLSAQYUTQWDDTOXWRBXIGZOPMEGROZUZFLSYIXNBHEYBZVACGHVUCEZRNPFGNFPDWEPPUYEWJFVSEQHTFNVK");
    msg.type = 0U;
    msg.op = 168U;
    msg.group_name.assign("DPWWUUFVMMLGORBCGRVWNLINKIXFYTCJFIMJCYOJVLOEUBLMSQAEXHQROYBWLJJYXUHENRXOHDGBTIHWDKZSOJNTATPSUXXVQKFJPTPEEHLPZUWOHRWYXCXTFZPLYCRSYZRFKNGBNVGNQIHCIEQQLAIQRUI");
    msg.plan_id.assign("EVTBJBNTPLSEXOGCHUBSUASMSOIUQWSDN");
    msg.description.assign("KLVJGXFFFFMBRYMNBSVWGKYWSOPLLMVIVLPASTXZXKCDNBKWKVRYRXTTKYDWIOUNNESKWOBCTGIPDNLOFFSIJRTVAUGZMQJGTBZOJIZHWKKRECMTWYYYLLEUVNEMCJWPUZSCSUQVVLBEMUFTCSRLYMZCHBAUGWAYSOFOAUXXNLQTGJPHDDCRJPCBQDQXPJHZNIQMIQDQAIQXPKREHZIRAHAEONYPUUOAMFTHENWRVSJOHBQGFDDGAZDEEX");
    msg.reference_frame = 31U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11890U;
    tmp_msg_0.off_x = 0.656409294677;
    tmp_msg_0.off_y = 0.660835006358;
    tmp_msg_0.off_z = 0.936211836321;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.405422145573;
    msg.leader_speed_min = 0.864165457092;
    msg.leader_speed_max = 0.968972318099;
    msg.leader_alt_min = 0.584837805149;
    msg.leader_alt_max = 0.710523511448;
    msg.pos_sim_err_lim = 0.910802447676;
    msg.pos_sim_err_wrn = 0.0902214063812;
    msg.pos_sim_err_timeout = 58667U;
    msg.converg_max = 0.438891505761;
    msg.converg_timeout = 62486U;
    msg.comms_timeout = 10727U;
    msg.turb_lim = 0.689473813045;
    msg.custom.assign("MSWIRONCTUTRDWIBKXZUD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.939883729455);
    msg.setSource(21200U);
    msg.setSourceEntity(153U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(220U);
    msg.timeout = 14132U;
    msg.lat = 0.633844091287;
    msg.lon = 0.40870543962;
    msg.z = 0.401298881832;
    msg.z_units = 45U;
    msg.speed = 0.900084043099;
    msg.speed_units = 151U;
    msg.custom.assign("LAXXEGVDEMKEXMDVGYBLITGDCNXNBCRKEZGSUFYOMVDTLAZCRPOBNNYSERYQEZOWMJKFAZAKHURPIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.746106831927);
    msg.setSource(40821U);
    msg.setSourceEntity(209U);
    msg.setDestination(42784U);
    msg.setDestinationEntity(18U);
    msg.timeout = 26002U;
    msg.lat = 0.972931288473;
    msg.lon = 0.792020466821;
    msg.z = 0.830806990918;
    msg.z_units = 5U;
    msg.speed = 0.141895944707;
    msg.speed_units = 64U;
    msg.custom.assign("RJNSBFGJVXHPQMHGCZWXRYBTQFUWEALMFARSGVXIKLFNCFOMTVBEAAWUJXRTNGUJBKKOJPYZNALCFLNEHYHDSAENEUIPNRXWYVSCZJLRLZPFOAPHHMWCHJCEXDDIJZYWGQFDAETGZYWMVTLQJOVDZPBFDNIYSORFWCHQXDKITIMBQMGEVCZBIDKRWUYQSIQMSOUKBUMEGQPTPBSVTLHOLVPUOZGKZYLDYDXIKKCNQKHWIXVNUSEJMPART");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.890110271394);
    msg.setSource(32351U);
    msg.setSourceEntity(38U);
    msg.setDestination(20639U);
    msg.setDestinationEntity(72U);
    msg.timeout = 22737U;
    msg.lat = 0.309476191299;
    msg.lon = 0.0573223831141;
    msg.z = 0.18172701248;
    msg.z_units = 252U;
    msg.speed = 0.722792325459;
    msg.speed_units = 81U;
    msg.custom.assign("YSURKKOMCJPREZMWUSEOXANIRWWLDRFMDIQIXYDIHMLAEXVHIFKIHGHQPSWPVKMCZRYLKHPAEUNRWBWGJGMQMJYNXCCCITDWOSJTAJHUUVFERZJZRTMCDTQAUGPAZKNTSP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.918281443675);
    msg.setSource(56324U);
    msg.setSourceEntity(134U);
    msg.setDestination(63260U);
    msg.setDestinationEntity(183U);
    msg.timeout = 28294U;
    msg.lat = 0.666337524302;
    msg.lon = 0.0888187310991;
    msg.z = 0.0353673063944;
    msg.z_units = 248U;
    msg.speed = 0.357809578604;
    msg.speed_units = 237U;
    msg.custom.assign("BQKFQRRHFQLGCSWGVOFJKAOQQILXWNFUXCNWMHLZLPGRVHMOKXCNZXHIVRYRAEHJDOBKXDUMOCATIDVCQKEGTZBAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.255369518814);
    msg.setSource(53661U);
    msg.setSourceEntity(41U);
    msg.setDestination(61534U);
    msg.setDestinationEntity(58U);
    msg.timeout = 20704U;
    msg.lat = 0.230299090855;
    msg.lon = 0.344687485767;
    msg.z = 0.576499875411;
    msg.z_units = 211U;
    msg.speed = 0.448362149907;
    msg.speed_units = 168U;
    msg.custom.assign("XJSWVRVHEISGABGBGHKBLQLDYZPLJVYYLKKPVXGHUUEMAOBOUPSGIRFHXOXGWAKQZCULGYNPMPSAQLJYBOWPGUHEZFGHPERPNCTJIAYFIMMCCEJJUJTFAZPJAMAUULWDEBKBARYRAVXJNSRNMSVWRSFQCBTVJWXIECEEFOOQOXRNETOZLZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.50865284867);
    msg.setSource(49876U);
    msg.setSourceEntity(210U);
    msg.setDestination(3013U);
    msg.setDestinationEntity(162U);
    msg.timeout = 1362U;
    msg.lat = 0.751730780827;
    msg.lon = 0.240595316999;
    msg.z = 0.148703357695;
    msg.z_units = 96U;
    msg.speed = 0.493526619715;
    msg.speed_units = 122U;
    msg.custom.assign("DGJFEWZXSCIVMTEZLQHSACVPDZOLSMENMVGGIAKKNVUZXZUDJTNXCPDGNTQYLGIARODOQHPLUHQFMDARROXPVGCFJHRGBUHBHFJJTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.84344159795);
    msg.setSource(32280U);
    msg.setSourceEntity(143U);
    msg.setDestination(14806U);
    msg.setDestinationEntity(56U);
    msg.arrival_time = 0.84650669812;
    msg.lat = 0.965373679881;
    msg.lon = 0.798308733996;
    msg.z = 0.0449755603214;
    msg.z_units = 248U;
    msg.travel_z = 0.884183689464;
    msg.travel_z_units = 246U;
    msg.delayed = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.145874496538);
    msg.setSource(10160U);
    msg.setSourceEntity(106U);
    msg.setDestination(51967U);
    msg.setDestinationEntity(84U);
    msg.arrival_time = 0.563233207075;
    msg.lat = 0.982481895802;
    msg.lon = 0.616818284113;
    msg.z = 0.459372173247;
    msg.z_units = 9U;
    msg.travel_z = 0.167065222601;
    msg.travel_z_units = 188U;
    msg.delayed = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.963482528386);
    msg.setSource(27294U);
    msg.setSourceEntity(97U);
    msg.setDestination(42796U);
    msg.setDestinationEntity(227U);
    msg.arrival_time = 0.811893107064;
    msg.lat = 0.185343674045;
    msg.lon = 0.9623945879;
    msg.z = 0.912306664326;
    msg.z_units = 191U;
    msg.travel_z = 0.638104138659;
    msg.travel_z_units = 197U;
    msg.delayed = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.974552529966);
    msg.setSource(56268U);
    msg.setSourceEntity(160U);
    msg.setDestination(17001U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.602752345417;
    msg.lon = 0.162300095076;
    msg.z = 0.253381935293;
    msg.z_units = 51U;
    msg.speed = 0.587674265872;
    msg.speed_units = 21U;
    msg.bearing = 0.968467712742;
    msg.cross_angle = 0.401928858548;
    msg.width = 0.588103144396;
    msg.length = 0.0183761492211;
    msg.coff = 89U;
    msg.angaperture = 0.166355410213;
    msg.range = 47801U;
    msg.overlap = 72U;
    msg.flags = 248U;
    msg.custom.assign("MAYRAFUOBLLHFKNTVKPACFEZDGTUSIKRGQURMXMSEPPMDYXYVCFPYQWJXZLTYOJNZSZWMHDVOGUXZPKDDUWNPRSHUYABGWAJIWCIFVFBIXDKCFOBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.538410980559);
    msg.setSource(4373U);
    msg.setSourceEntity(97U);
    msg.setDestination(4182U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.567290484134;
    msg.lon = 0.343283011379;
    msg.z = 0.775217368548;
    msg.z_units = 40U;
    msg.speed = 0.602181643653;
    msg.speed_units = 36U;
    msg.bearing = 0.492477070734;
    msg.cross_angle = 0.617821287745;
    msg.width = 0.32888925454;
    msg.length = 0.677900414712;
    msg.coff = 162U;
    msg.angaperture = 0.102342807853;
    msg.range = 16043U;
    msg.overlap = 63U;
    msg.flags = 124U;
    msg.custom.assign("RKYLUBIRSBXSCWUHEJIXBVMVYUESEKTKQZDHTVXALYQEOBHDUPRMXZWOEDNCIGWTHZBWKXFNIBDYPFGJBJXTRXLROIXHVOTRCDNCYPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.128757083575);
    msg.setSource(34268U);
    msg.setSourceEntity(167U);
    msg.setDestination(26350U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.301914650888;
    msg.lon = 0.11481591696;
    msg.z = 0.369119769544;
    msg.z_units = 129U;
    msg.speed = 0.829316285744;
    msg.speed_units = 47U;
    msg.bearing = 0.928933208802;
    msg.cross_angle = 0.30758253722;
    msg.width = 0.668823009531;
    msg.length = 0.401948350163;
    msg.coff = 189U;
    msg.angaperture = 0.399496972278;
    msg.range = 49861U;
    msg.overlap = 115U;
    msg.flags = 206U;
    msg.custom.assign("WCHJJUDGMKE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.177250674123);
    msg.setSource(26208U);
    msg.setSourceEntity(59U);
    msg.setDestination(31828U);
    msg.setDestinationEntity(222U);
    msg.timeout = 25223U;
    msg.lat = 0.740516775651;
    msg.lon = 0.373291257113;
    msg.z = 0.0191663789804;
    msg.z_units = 186U;
    msg.speed = 0.791886819376;
    msg.speed_units = 234U;
    msg.syringe0 = 6U;
    msg.syringe1 = 148U;
    msg.syringe2 = 196U;
    msg.custom.assign("XRZXTJFPYUIKLJTDCOQCLAELEYASRYREXHVBHEUNUSKLMMZCMIIWTONUHLSUQGPRDGNMMVZQUHUBGBSMNXPKPGNHRHWVWSVJPAIRLSGENFMRQVACYJDPSWTLDTJPBJDLQIXWWYGTQFOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.607153683949);
    msg.setSource(54014U);
    msg.setSourceEntity(221U);
    msg.setDestination(25953U);
    msg.setDestinationEntity(29U);
    msg.timeout = 39148U;
    msg.lat = 0.720550607847;
    msg.lon = 0.0776235471269;
    msg.z = 0.571477642324;
    msg.z_units = 45U;
    msg.speed = 0.388988808151;
    msg.speed_units = 148U;
    msg.syringe0 = 156U;
    msg.syringe1 = 158U;
    msg.syringe2 = 40U;
    msg.custom.assign("CPXUFQPXQWZHFLDFFUFCDJLWAEJKTUMACAJAWYKEQXLMKTSYYSYDGCZGAPNSMOHXIKVLSNJQXSOEFXRXYGWNBUQNQFBYUIMEPMBGCIUPGGRORZQEYAATMCRIZFVBNSAMKYPZHLWUTVDBZEJBUTNKVDMIWLPDMGHHVLTEHKOCZVOZZDERL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.951591325733);
    msg.setSource(33197U);
    msg.setSourceEntity(76U);
    msg.setDestination(15107U);
    msg.setDestinationEntity(230U);
    msg.timeout = 56221U;
    msg.lat = 0.860396285245;
    msg.lon = 0.0820839719878;
    msg.z = 0.14371071432;
    msg.z_units = 138U;
    msg.speed = 0.421203137776;
    msg.speed_units = 38U;
    msg.syringe0 = 248U;
    msg.syringe1 = 187U;
    msg.syringe2 = 50U;
    msg.custom.assign("XUPSOJDRCQLBYNIPKGUFGVUAWDPEAJHVFBZFZJVIOGVDYQTMPGQETZZNDQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.090552863739);
    msg.setSource(49076U);
    msg.setSourceEntity(81U);
    msg.setDestination(60918U);
    msg.setDestinationEntity(47U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.00741159767149);
    msg.setSource(55391U);
    msg.setSourceEntity(192U);
    msg.setDestination(48614U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.530839181068);
    msg.setSource(47482U);
    msg.setSourceEntity(12U);
    msg.setDestination(61673U);
    msg.setDestinationEntity(173U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.0360895390485);
    msg.setSource(44642U);
    msg.setSourceEntity(89U);
    msg.setDestination(28462U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.601665628784;
    msg.lon = 0.477895125255;
    msg.z = 0.156594177464;
    msg.z_units = 40U;
    msg.speed = 0.177410486379;
    msg.speed_units = 253U;
    msg.takeoff_pitch = 0.157008927404;
    msg.custom.assign("PWSHUPOHUUCMPAHOWPJSPVQFIKMIVLUWTYUGMWNEZVGYAKCRHLLFMJAOSNFSWKDDKDTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.997506387377);
    msg.setSource(4312U);
    msg.setSourceEntity(175U);
    msg.setDestination(63098U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.0313740069452;
    msg.lon = 0.377658663948;
    msg.z = 0.307668980125;
    msg.z_units = 188U;
    msg.speed = 0.971031478021;
    msg.speed_units = 231U;
    msg.takeoff_pitch = 0.737133437473;
    msg.custom.assign("NPYJGWMXLAEHQNSYHXSYTJPSZUOXWVQTOBYEHOVVTSRUKZJKEUMATEGGDRBWLUFMIITRAJKSHYTXTSGBQVEMWPSMXFVEIJGNBXXWYGSYWNDYPAZRPDDMIXDAFHYSBKJTYZRCPLOQIKIFVRTRCWOZJRPPEORRIPCHWUMNXFJGKWTCEABIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.983533888739);
    msg.setSource(8303U);
    msg.setSourceEntity(83U);
    msg.setDestination(12318U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.741600371328;
    msg.lon = 0.0047458828098;
    msg.z = 0.930374056159;
    msg.z_units = 26U;
    msg.speed = 0.782380237122;
    msg.speed_units = 72U;
    msg.takeoff_pitch = 0.863198898401;
    msg.custom.assign("CQFFMQIKLEOUFSIZJZGNLHFASBULBCFMVOUNSDRTDUNMVUBQTDZAGPWGMQDHDRBXCHARQATBGOYHLRYPXJJHNESCTEJPSBDXWLMEDZNLMZXVVMGGRUUSIZQWXQGEVYPIYFJEHMNFXCKSADCZFSYHSKYONJVTRKIVUKASZRRXTYOOTTGGOKPPKLJBOQQYCYKTXGIUHHWJNKPLPRCRUPWNDLYDLQVEBZWIWWJICEBVAEFOAOVWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.734634696552);
    msg.setSource(47241U);
    msg.setSourceEntity(81U);
    msg.setDestination(40106U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.963309884587;
    msg.lon = 0.1330099032;
    msg.z = 0.562403043821;
    msg.z_units = 185U;
    msg.speed = 0.208926427437;
    msg.speed_units = 195U;
    msg.abort_z = 0.503072599215;
    msg.bearing = 0.009350765502;
    msg.glide_slope = 180U;
    msg.glide_slope_alt = 0.750309299566;
    msg.custom.assign("BYZNHQEDUPBBSQNZAKHUZWEIMLLCITKXWGOZXJPCSNGVMJCDWYRRHZXMMCTWPPVDUXANOEHALHPQNPRUKKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.112774513783);
    msg.setSource(2913U);
    msg.setSourceEntity(22U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.168510029564;
    msg.lon = 0.544986027021;
    msg.z = 0.140844304903;
    msg.z_units = 16U;
    msg.speed = 0.272756703105;
    msg.speed_units = 222U;
    msg.abort_z = 0.776887303842;
    msg.bearing = 0.0185262801033;
    msg.glide_slope = 157U;
    msg.glide_slope_alt = 0.225322701436;
    msg.custom.assign("HMFVUPRDCUGUJWEJKSROHIPNVWDFCNOFBRGPZWNLPVBBKMXFRCPAJKCCLONQQCYNYWTXIJGNNBJWEWTKXTGMENIBCDTSQFMPVRYEEXBFDOEUPDHUOEQDGSAELCXSADBQFMKNYHHVMVLQOYGSBYDARJAUMLKQGLFVKSJTMMUDIFPTFTUZGJUIKHXWJWSZVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.485164920329);
    msg.setSource(4610U);
    msg.setSourceEntity(146U);
    msg.setDestination(63864U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.915973423159;
    msg.lon = 0.413601633047;
    msg.z = 0.587096162735;
    msg.z_units = 4U;
    msg.speed = 0.909966004231;
    msg.speed_units = 183U;
    msg.abort_z = 0.0736569535566;
    msg.bearing = 0.308726059825;
    msg.glide_slope = 122U;
    msg.glide_slope_alt = 0.772199912773;
    msg.custom.assign("XMZLCTACIWSZRQAGZCENYDKYQPEPSXWEJENSWFOVNJTUIHGUAQNYXHBCBILLTTNPZXGRVCJLAWTKRVJRKFVGOKSCLSFAGMCVMFMQHEONTWXUDRGHQRKVEVSXSEUTVHKIZVIOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.523452975117);
    msg.setSource(10786U);
    msg.setSourceEntity(155U);
    msg.setDestination(5818U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.21759052958;
    msg.lon = 0.806967023039;
    msg.speed = 0.711326970432;
    msg.speed_units = 183U;
    msg.limits = 27U;
    msg.max_depth = 0.362299134217;
    msg.min_alt = 0.540445840183;
    msg.time_limit = 0.639562443991;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.67040623311;
    tmp_msg_0.lon = 0.510742877777;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("CFQWUQUCMMHWYOFDVF");
    msg.custom.assign("AVLIAYFHODRRZCUMMXLBLEKMTUMRUIHDUEQWMNXKYXOUMDNISQFFAHDJWIBGJMCKBHPECGXAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.508800814671);
    msg.setSource(35941U);
    msg.setSourceEntity(216U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.0822231372472;
    msg.lon = 0.257413380722;
    msg.speed = 0.321799537288;
    msg.speed_units = 243U;
    msg.limits = 119U;
    msg.max_depth = 0.541729850594;
    msg.min_alt = 0.390220102916;
    msg.time_limit = 0.693511364984;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7326937863;
    tmp_msg_0.lon = 0.247410479183;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("IDHNDNWMZYTHXUHWLGHCSWAMVDAIGVWIKFMCKZFCEKDBQKUTPRWZLQDGGOHOTQKSLSCHEDVPTZCXAARWMTXJLJTEFNBIQMEIQHFYQUSPGMJJWNYJZRQOOPB");
    msg.custom.assign("QILXYZZGFUINCQWVNYQPDFHZFTPHJEMUPSUEZKGCVLSVITMZDUEGPIYHCBRWNJOVSVQCTPATUDPXHSKLFJBYRKVCQCVPZMRQOSDYOXNJEAKKYEJJTEFBSRWLHMKNXARRQEXQTMTSZABNQLDZUNWGDHEUDIFWIKRODQEJBCXFMSLCTODTLIAJUEGHNHODWZLPIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.619960423249);
    msg.setSource(55426U);
    msg.setSourceEntity(130U);
    msg.setDestination(8997U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.889066830646;
    msg.lon = 0.344340377636;
    msg.speed = 0.441399692623;
    msg.speed_units = 192U;
    msg.limits = 219U;
    msg.max_depth = 0.030724037814;
    msg.min_alt = 0.961254434634;
    msg.time_limit = 0.558580894778;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.798696189728;
    tmp_msg_0.lon = 0.0302530959284;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NYSZUEXVMROBFKO");
    msg.custom.assign("FJBILUOYZFFOJINZVBWOPWGJUCW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.790876436611);
    msg.setSource(59498U);
    msg.setSourceEntity(221U);
    msg.setDestination(57849U);
    msg.setDestinationEntity(88U);
    msg.target.assign("BFCQHIPVQSTXOFHGAPMFCLJXNUWXLGFJCGGBLJSXSUQNFVGQOLCWKVMXSYZZHWGZEQOYHYDZRWQWSHKCLYPAUBXDOMCMTKUPNIMYWOTFZEVAPRIDOVPEQMQEABKFWRYDGLEMXYJVDNZQFJYRKUHDWORZTLIJDCXNCPYVSNLSSKVIRAXZXLMONBKWZWEIIUESPOBFUHPUJGREPBFENRBQTDJK");
    msg.max_speed = 0.743799950303;
    msg.speed_units = 254U;
    msg.lat = 0.626824828898;
    msg.lon = 0.428284240862;
    msg.z = 0.665499021494;
    msg.z_units = 130U;
    msg.custom.assign("LYQUUKIXFYXQMVHYHHGRTVVTLSKZHBEPLHQDTWWUHELOJJALNORXYMTUHYITZZJKETZYMBGJNZPLBBWGWXGKLOPNMFWDMIRGAIKQCDVVQSYMHNESBVEXFUQDXAWFHAOCPUDERS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.0440591202309);
    msg.setSource(28882U);
    msg.setSourceEntity(6U);
    msg.setDestination(37942U);
    msg.setDestinationEntity(112U);
    msg.target.assign("YRLJXXXOCWGDLDVCOKDCLBNCTSFLVQJYYEKAELZWQZPDBSMOHXLGQPLGSBZUDJDZBIEQXQZZRWSKEUAOHTLYFNYWFWJRXJJMGORNNVXBBVEWOKDZTITEGQRNOBATXECIQWPGHEUQPCSPIZTYNFMDPWAJHTJHIIFAVHVUAUEVUCYORNUWWAFPIONLSAXTFCRL");
    msg.max_speed = 0.704110938009;
    msg.speed_units = 121U;
    msg.lat = 0.576659554109;
    msg.lon = 0.340789495155;
    msg.z = 0.371688963169;
    msg.z_units = 205U;
    msg.custom.assign("JEHJHGCRRWMWMSVUDBDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.491816987563);
    msg.setSource(38938U);
    msg.setSourceEntity(236U);
    msg.setDestination(21688U);
    msg.setDestinationEntity(158U);
    msg.target.assign("YSOWCJMUMFUIVCVIRFUONNJOQVKFCOMFYPLDEDTIJZZCUYSZPHIWEOUNTEVKFXXTPFKCJABDXFCAPAFAHWYNUHQMJNYXBAPSQOSDLKJCUXLRESRYKKRTFADPWBHVGSTAHRGMZWQVYGEBVMWZDWBEQRNACJNWZUDHVTNULQLRIGEWIZBLPSRAXIGCQOBLJKYGQVHOYHNGXZQXPKS");
    msg.max_speed = 0.235847427108;
    msg.speed_units = 99U;
    msg.lat = 0.645076055783;
    msg.lon = 0.339400594321;
    msg.z = 0.382877423492;
    msg.z_units = 199U;
    msg.custom.assign("ZVWPZIEWDWXLGYDLJCFIPCLUACOJCDQDFUWGYDGTHBLRHAQJNTFFHMAEOGOZYAXFHQMVXYIHGNKXSWDZFEDZUETVNMOPCJAMBMAWTKEWPGSTBOJBBSUIMRIVITZXBZPKQCMFHUDGJOLTBRNGWICSROZDAYBPXYKNCPTHKINGSVWFJRELURYOWUVSYHQNSLVAQUAZHPCHJSVRVNRUJPIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.977126839414);
    msg.setSource(49703U);
    msg.setSourceEntity(118U);
    msg.setDestination(18222U);
    msg.setDestinationEntity(86U);
    msg.timeout = 50999U;
    msg.lat = 0.907237490073;
    msg.lon = 0.841553569098;
    msg.speed = 0.560861013232;
    msg.speed_units = 165U;
    msg.custom.assign("BONPWKGKEYHWKVMLKZHXZXDESZJHUABXFNBPGJIIFYPXSYALARHCXIEMQNFATAXQQYOOUMWWIBCUFQLKDIVHGCDGRJUZCINQNCBCSFIVLHPPTADLZKUTHMCBNFSUEERNRHGDJMSATGELNCRKOAACZPTWBOQYJUQPPJEWXYOVRWYWGTXYVDLGMPDRHIKGABDEZYTFLVFUBNJZKWDSSMQFLIRJMZPTNROOBCTJEYFRJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.602528203822);
    msg.setSource(26802U);
    msg.setSourceEntity(193U);
    msg.setDestination(57785U);
    msg.setDestinationEntity(84U);
    msg.timeout = 17983U;
    msg.lat = 0.156239532571;
    msg.lon = 0.00960256780361;
    msg.speed = 0.961650360304;
    msg.speed_units = 170U;
    msg.custom.assign("NMILZTFZLDXNLXLJGDAQPULKFIEXSMMXLVBQDYRZTEGISQHJFZDIPPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.429046116291);
    msg.setSource(3476U);
    msg.setSourceEntity(146U);
    msg.setDestination(50830U);
    msg.setDestinationEntity(175U);
    msg.timeout = 34769U;
    msg.lat = 0.997695282483;
    msg.lon = 0.200767322588;
    msg.speed = 0.121857988077;
    msg.speed_units = 207U;
    msg.custom.assign("XARPGSRNNKQUEIRCFTXSMMEBGLLSJFXKFKUECRXKWDLFLOALFHMWTNWQMQUXAGLZGBDUDDDYFQPQQFVOVBNBOSWENGMJZILTMALYKVNPCDOHNLOYGFYPZHRZYFZGVRHSYURTPXIWXUCOTIIRJLWDWZSWHCZJMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.615531608701);
    msg.setSource(15122U);
    msg.setSourceEntity(75U);
    msg.setDestination(48505U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.766884277664;
    msg.lon = 0.735851319752;
    msg.z = 0.401283545111;
    msg.z_units = 118U;
    msg.radius = 0.658244165264;
    msg.duration = 65351U;
    msg.speed = 0.817153189595;
    msg.speed_units = 40U;
    msg.popup_period = 32040U;
    msg.popup_duration = 8672U;
    msg.flags = 46U;
    msg.custom.assign("XTVCNTBUMGPYGUOCKASODBIMKGYHNPZKRIJCQCVCSPFBPAQKFFTJWQRCYKEZHYWDDIGSMJONVJUWJHZPWKUDUAIUPROJBVYGJWGQTQCSUIXLVUFOZHDWWFSTANWRLXFKYOQQRYQSNDLYXFQBXRCSNHPHEBSRHTMXHJMAGAIVZONBLOIEZERXZOBMLUXFLSIKPYXQMBCATXIMEDSRRFYTTWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.470399969222);
    msg.setSource(58727U);
    msg.setSourceEntity(147U);
    msg.setDestination(57349U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.870518303409;
    msg.lon = 0.558908853674;
    msg.z = 0.457409009248;
    msg.z_units = 21U;
    msg.radius = 0.640189844792;
    msg.duration = 11255U;
    msg.speed = 0.793171708249;
    msg.speed_units = 49U;
    msg.popup_period = 31152U;
    msg.popup_duration = 44585U;
    msg.flags = 127U;
    msg.custom.assign("OHXFOQHVPRYAFVXXJCVVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.570873364666);
    msg.setSource(54713U);
    msg.setSourceEntity(200U);
    msg.setDestination(21648U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.82318723309;
    msg.lon = 0.0872791133533;
    msg.z = 0.735260664134;
    msg.z_units = 162U;
    msg.radius = 0.886147331498;
    msg.duration = 38059U;
    msg.speed = 0.811807696439;
    msg.speed_units = 153U;
    msg.popup_period = 65471U;
    msg.popup_duration = 30083U;
    msg.flags = 92U;
    msg.custom.assign("UUCIATCXJRZEKFQLHZNOXQOYCUYMADABQGJHSNCECBZATPDVOIPLRQUFYQLPXAMLSYDPPOIXDZWDOVWMEBOJGIKGSBMCPOSBRDLSLYLNZFUXNEPMHYOIIJDZBKXVRVRDHJHEMWKGZNRKZTPJNQFRLAANRIWITYFTVXCHJSYAIVCTWFTDMQBFQUNVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.20460699385);
    msg.setSource(60239U);
    msg.setSourceEntity(205U);
    msg.setDestination(49007U);
    msg.setDestinationEntity(59U);
    msg.timeout = 39848U;
    msg.lat = 0.909320080589;
    msg.lon = 0.419988630571;
    msg.z = 0.376434965383;
    msg.z_units = 45U;
    msg.speed = 0.268399075018;
    msg.speed_units = 147U;
    msg.bearing = 0.256675013207;
    msg.width = 0.208088697669;
    msg.direction = 123U;
    msg.custom.assign("LNIDFEFJPSAJNCAHSNRQCVHTYGDJTUGXLZRGHUCKGNZFEALSWIYPNVFCTHTXORYXUMNXKQWMHFYREMCMKWSPHSJJTUABBQIHFKXYEYODAGVPRZMIENXWROXYVOGUEITDJQWQDHMEWAIHKIDCOAWXPOIRGKXKZSOPBYDHCZPBUTNDPQAKFZCMLEZVZLJEKBOFPWRDFBUKUJGZLJIBDSVNASOMTCYVRLBC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.820271273233);
    msg.setSource(32777U);
    msg.setSourceEntity(79U);
    msg.setDestination(28386U);
    msg.setDestinationEntity(50U);
    msg.timeout = 25416U;
    msg.lat = 0.72737684287;
    msg.lon = 0.559127417611;
    msg.z = 0.0850629967193;
    msg.z_units = 203U;
    msg.speed = 0.949423662809;
    msg.speed_units = 63U;
    msg.bearing = 0.798512035028;
    msg.width = 0.358367690403;
    msg.direction = 15U;
    msg.custom.assign("BMACKODKFQJHGAHNRZYTLFXUMJUKMVPMZUIVLDLYXAREEFLNXTNKJOCDQJDMWMZVHHIOLPJWPSFINEAPPGDMGWUIYGOXCPILIPBRFUVRXERCDGZINBUTTYHFWZTBQTFNGSDYOGHROHFZBBCGIPYGNDRXVHABQARKCSZPQWZGFJXDLKKTYOEETVSHTQQYUSUJSEFLWMJWNXAEYZUATINXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.020451767888);
    msg.setSource(57645U);
    msg.setSourceEntity(134U);
    msg.setDestination(2160U);
    msg.setDestinationEntity(123U);
    msg.timeout = 33406U;
    msg.lat = 0.941536679728;
    msg.lon = 0.51538981388;
    msg.z = 0.384879836809;
    msg.z_units = 72U;
    msg.speed = 0.60104889363;
    msg.speed_units = 119U;
    msg.bearing = 0.96921644497;
    msg.width = 0.307635658093;
    msg.direction = 22U;
    msg.custom.assign("HIFYALEQFDQMUWJBAKNMXWTLOQEGZCHUHVANORPEGMNDYKBCKYBLCLGTTIDXSLYZRJRPJFGKNMXFNSIPJNTWAFDUYVPJZCDKHOSMVQCVSIIWPHESUVDEPREVYYERIMATQWXOMXKERQISEJKQDZQJQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.68870952368);
    msg.setSource(37930U);
    msg.setSourceEntity(163U);
    msg.setDestination(51626U);
    msg.setDestinationEntity(130U);
    msg.op_mode = 108U;
    msg.error_count = 145U;
    msg.error_ents.assign("BTCQEWXCSBQVLXRDYTRQQWJNMALSUWEPWGQNPRNUGENZYVCBOKSAHBMXOVZAIUHMXAIUACRXTLXGSZNDEDOSUIDRNQJWKKSOQHJMOUZLIBBBOKGJHANFJTVRWPCISEZHJMTDYYYSWGFCSBYYPILCHJLIPKDKQSHNPLHVRYZGAEOPHCUPDXTTECMVZDGIGFJYXITOEWZCUPOMKJERUHTALJBRWFXFL");
    msg.maneuver_type = 4892U;
    msg.maneuver_stime = 0.676337583705;
    msg.maneuver_eta = 44870U;
    msg.control_loops = 3302245796U;
    msg.flags = 79U;
    msg.last_error.assign("ESVOKHXQSWDYNQYHKVIPOSJBUONPGEOK");
    msg.last_error_time = 0.370567435108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.880905206506);
    msg.setSource(51701U);
    msg.setSourceEntity(182U);
    msg.setDestination(19523U);
    msg.setDestinationEntity(8U);
    msg.op_mode = 31U;
    msg.error_count = 33U;
    msg.error_ents.assign("ABLBJDKXLDNQWJOPUXSYJWJHSRVKCZKHZPVAQBOSFKORUTIXGLQPPYTPDOKANTIURGAPBCYVDEGYWZWZCKZRMIAQGUCFFWCGNMOOIEDRFINYGCXNJJEAUHFGEGVFLEIGSTLIHHMML");
    msg.maneuver_type = 5908U;
    msg.maneuver_stime = 0.164540122733;
    msg.maneuver_eta = 22332U;
    msg.control_loops = 3195450653U;
    msg.flags = 81U;
    msg.last_error.assign("FAWQCUOAHQZJMPDRTBNIUMNSAYPNPMXHNBKPRTKLMSNBTQWZGGDIXAFTEOQNYWDPSQEUKRAZFXNZBJLGKY");
    msg.last_error_time = 0.907251643484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.943662609746);
    msg.setSource(48750U);
    msg.setSourceEntity(149U);
    msg.setDestination(10281U);
    msg.setDestinationEntity(105U);
    msg.op_mode = 66U;
    msg.error_count = 76U;
    msg.error_ents.assign("GGMMXKJKYTPZLMWSFJOHZRHBPTFKYVPQWKRGFGEONSIPASZNGMMTSXZTVOVSNBXFNEKDXCYJQFMFLIIQDULPUOMTHUDABESFHXWMBFARRDHWYAVVQNUDLLBMRRVIOSNIGRAYCCRQDNWXULVQCJVTCHBDSQANZHDAOKIKNQAWPBGFELPHUSQTPUOWZMTLQZJEASNDUWIOKBYXBAPZIRUVLKJCEJOJCDIYEICUKXTZBLEGREXXHGYZJWVGHYW");
    msg.maneuver_type = 4826U;
    msg.maneuver_stime = 0.38315851149;
    msg.maneuver_eta = 52684U;
    msg.control_loops = 2946621103U;
    msg.flags = 162U;
    msg.last_error.assign("GVBEAPKXZPXBPXHWXNLIYGYWVVMRKNLFZHQIDJJQHZVUELFYBMQFKMGJHQFUQIKJWBOZFAMUFYJNZPQAGNYTLDWPCWGADWQKIPXDWICDXJHPOTSZMOMGTYETRKZHSAXSERRUCGDWFCWEBVCHREMNNTHLBITOOTKORDDLTQANPOURDYXCKQLMVIUONJSKRXDNYVAOTVLGCOCYASBYCLNZITILVPMFFJ");
    msg.last_error_time = 0.883862857016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.760777719581);
    msg.setSource(39328U);
    msg.setSourceEntity(105U);
    msg.setDestination(38706U);
    msg.setDestinationEntity(174U);
    msg.type = 236U;
    msg.request_id = 20934U;
    msg.command = 148U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 9665U;
    tmp_msg_0.lat = 0.0225448502182;
    tmp_msg_0.lon = 0.118802173481;
    tmp_msg_0.z = 0.122059033203;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.speed = 0.015344382442;
    tmp_msg_0.speed_units = 15U;
    tmp_msg_0.syringe0 = 167U;
    tmp_msg_0.syringe1 = 243U;
    tmp_msg_0.syringe2 = 76U;
    tmp_msg_0.custom.assign("TBMODMLCDAHMOCRCF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9106U;
    msg.info.assign("AGZISJHCCLHEFLERSJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.636820190962);
    msg.setSource(57000U);
    msg.setSourceEntity(247U);
    msg.setDestination(61002U);
    msg.setDestinationEntity(10U);
    msg.type = 160U;
    msg.request_id = 20464U;
    msg.command = 208U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.340211199199;
    tmp_msg_0.lon = 0.161904674729;
    tmp_msg_0.z = 0.688915249386;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.speed = 0.326344242882;
    tmp_msg_0.speed_units = 89U;
    tmp_msg_0.takeoff_pitch = 0.327429251117;
    tmp_msg_0.custom.assign("CWSJSTZUOVRRSIANUDRPAQDZLQOYNDTDQXMUKAQQDJREMUCNJQWUPVDDISCNPQHGOMFZNVSKSHIMJUGKA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12802U;
    msg.info.assign("VGYQIKZMPCZXSVNYWIPNMLHMNQCWRILZHDTRETHOEHDQVAVRSNYMNGFMDUWWUGAKVIOPRBDAYCICSGSUXXLFBRUOSWJXQHXJPANKTIYZPBHPSEOBEMAKYOVNSIDQOAFYXMCPEKZLZUHJGXBPHTRKDQBXZRYCUZUIMWGFCZRVLYJAOHSFFBPJMIESJKACXOEKLAGDJGBTUNUBBDQFQPWCFCGRTWETIOVNUOELZYJTJDNMTQLRWLQFGWEDFKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.810726960791);
    msg.setSource(21938U);
    msg.setSourceEntity(181U);
    msg.setDestination(41741U);
    msg.setDestinationEntity(5U);
    msg.type = 183U;
    msg.request_id = 34733U;
    msg.command = 231U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 25573U;
    tmp_msg_0.lat = 0.000328428912748;
    tmp_msg_0.lon = 0.960963557754;
    tmp_msg_0.z = 0.338638811425;
    tmp_msg_0.z_units = 160U;
    tmp_msg_0.pitch = 0.417356939075;
    tmp_msg_0.amplitude = 0.196879337084;
    tmp_msg_0.duration = 64398U;
    tmp_msg_0.speed = 0.992595051125;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.radius = 0.896971026637;
    tmp_msg_0.direction = 146U;
    tmp_msg_0.custom.assign("BUPVFJZJJWVQVPZMFAXIZTMUXTUHADKMIINRGSYFQZHDNKBNGHMJLLKIMXMYPSYLZHDHYYCUBONFOLLJKSXKLMARTTDGWQTLZPTDNWCBGECHXXU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38674U;
    msg.info.assign("YWDDSXHUGMOQMQQXZSNSENCHWFTTUVSMAKAORIWAFQGEPPYKHPUKWGCPTLPGKXICLPZPYEYTZUHDLVQZBCBYOXCGZFLNJKNCLHDNYLZZBSEVDEIQEFRLFJEEBDJUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.0191128914314);
    msg.setSource(11999U);
    msg.setSourceEntity(154U);
    msg.setDestination(799U);
    msg.setDestinationEntity(208U);
    msg.command = 220U;
    msg.entities.assign("PPUWRBHNYOCFIRWPQLZNFTWJPLZSTMYZJTFGSEVDQBCTYXOYAUEXHKHGILZGMFUHLCBRUGGORALRCKNNFDZVLNDMKQOBSNTPPEPUVNKQSMQGHVIRJQOAAADRFKWAETZMCGFOAJIDOMHGNDHFJCDMEKXPDWXYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.472500616805);
    msg.setSource(1917U);
    msg.setSourceEntity(90U);
    msg.setDestination(44795U);
    msg.setDestinationEntity(107U);
    msg.command = 131U;
    msg.entities.assign("HCUVHHLNUHFXQYSLRYBELZAYPNMJGIDGLYAMWPAFFALROKLTTRUZFSTYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.660726712379);
    msg.setSource(41627U);
    msg.setSourceEntity(151U);
    msg.setDestination(30704U);
    msg.setDestinationEntity(157U);
    msg.command = 139U;
    msg.entities.assign("RPEOSAIYSYGKFMXKGFWWTXQSYFBQKMJWRNRTOYCIRKHSBNUKWTLSVPGIBVACBWVWDNAYDGTLHETTNXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.329197736762);
    msg.setSource(15418U);
    msg.setSourceEntity(229U);
    msg.setDestination(26682U);
    msg.setDestinationEntity(59U);
    msg.mcount = 220U;
    msg.mnames.assign("TAXROTQFOSEVYOTCYHOZRWFNQSLFEMRPGGJLSILWHGUKUHNDBIIVIPMJSPUGWQIJNHBOFYXZUASWCKFHRDSLKYLBRVCUZFYLHEPCKGQRTNNBWTYMEAAKQJDLCVNEBWCAPCVNZJKXQUOGMBFWAXZXSOTSBOZUJELNHRBPPDQHWQUZVKXTTJTFE");
    msg.ecount = 2U;
    msg.enames.assign("OJBMCUJBOHIOJXFOXQSVCKWSYOPYJTMCDYVGPXGNADNGVTMAVLAVQMHNAEBXXLNNANTRGSBWFPPDKFQBGOEPLLRCFJGAUHPCZOZWCKRLGDOZIQNTEEVWDJNHFHDUYSVRYMCWPUEMIZVCKTFFIHQQDZIQRAWTSDKAJYUVPERYHMBKHCUKRGOQYDQAABNTULBRMXITEILJPWIJTIYNGFLSOTHQYLUEHFWXSZL");
    msg.ccount = 89U;
    msg.cnames.assign("KRFKBIZOXLZTEECMEPCYHSMRFUJCWPJKAUBZSTNLHMFLHTPELZSRLAJCUGUBIIHWJJSNPZGUPOTTNXBELCYTKVMXJQLINEAYOEBGRZSGWVHWKVOZAHSWQOYQSFZFRXPTKTYLDOPUNNWITIAFVVCKRWADVONDJJZPDKQHBJQXMZSWRVCHDBYVDGQIGBDMIQMLWFDQACXVMBDPMUOGSONCRYOHYRCKKWYQAEEGTGFHUISXNFBRXUAXE");
    msg.last_error.assign("JGYAJCQHSTVSIEDDZZAYEMDKTXWBJREDXPOUGFKFLXATQFWJCKOGWMRPIOESNRYUMCJLQLEGKHAFPZGQFOSVZWYANAERKQTHQJQZOMICPQRKLDETGBBGZHLDBIHEOIUGPICAVTZTBUUSHXOVPXYEICMVCJWLAORNVFBZHJIJJZYYRDBFBTMUSLHYVKAMZWGHUCDWKYIIRPCUDLBAMWWSQHSXFM");
    msg.last_error_time = 0.44687509442;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.0784437959221);
    msg.setSource(34622U);
    msg.setSourceEntity(223U);
    msg.setDestination(26514U);
    msg.setDestinationEntity(236U);
    msg.mcount = 137U;
    msg.mnames.assign("SUNHCGPTJQTVFKICTIBVVDYJVKZCEEXRACKMQFSAHNTXUMWNWGRKUDVUJTNYJYFTCIBZZLBUEDVDOMJFPUFIEIAQQDOWILLMBQEZHYTRAOHKMSULTOKZMONENGZSTYGLRLBPBALUPOWDDNSORGMILTHSAHGQLXKGCAYNUAHHHJWAAHDRLGKJGXVSXSFYXJESEBIWXSZFFEJYBVJ");
    msg.ecount = 168U;
    msg.enames.assign("NNAGDESOYXKJGSGUSICMTMOXVAWCBTZJLUHMNXYGASPCTRPFYLOYVZESRJHUCLQZIWPIYHDWGCVWAVXPOGIPJBGHWJSKNKMEVVNBOUEEZMMBXSSWSZEQFLHVKAUPFDIBERDAJWUTHNXVWJBHOKLDGLQEZBFTRXKTFFDLTYYZYPMNE");
    msg.ccount = 53U;
    msg.cnames.assign("JHQCOTLYRVQNSPJIOEHPZDHTTDWCSFTKXLHIARXVKYJLELBLPGMDUSAMHITBSZNKEXURWPZGKEWVACFM");
    msg.last_error.assign("UVMWMPGYWURPWZXFTGSLASNJUBTQQQOCZNDPKWNPZTTIVZNFJMQEOLKDNYJZKVLHDYTATNZSFGOMJVGAZBHWAADTJCTQCPI");
    msg.last_error_time = 0.923442844124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.926447373036);
    msg.setSource(11217U);
    msg.setSourceEntity(67U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(14U);
    msg.mcount = 31U;
    msg.mnames.assign("EGZKKBXEANZONDQQBKQWVTAYHXCBIOGJLMEDJWUHCGNGGASXXXOWTISLAHOZNEIAAQKEUQBZPPJYWKBNSXOIDTBKOCCMESCUVAD");
    msg.ecount = 66U;
    msg.enames.assign("OIBIHRJIBNATDQPJZSILRQKXEIHIPQEUGYLERWAQCNKNNNVVOADWOMSSJTHWZWFNLGXXVAEYXHBZXTWRHHCQDKFMJXHLCPUOZBDRBPRZRUKGDOFTELVQBGMEWDUBNNYQFULEVYYCJIPVMPOFHIGMCFTUWSKSINLWDGRNSOYMYQZGAUKUFAPZCSPTLLBSXXUTVRBTDEQCFSTALUKDKZOEVWYMAKJC");
    msg.ccount = 174U;
    msg.cnames.assign("BCEYKSAFZRVMQFZBSOWGWHFHRAUPDTAQQOVIIAJQHJNIEJOEGJBPYINGSPNZVTXPLWHGQVDLMGRIBNCIUENNEHJATHTDVXZZPCJLUEQUVGEOXFYRCSPESXAXYBQYBWIHCWCLIMBOTZUQBCCMYSTHGPFDLXLPNSLTLVKREXGNYMXORARUKMKXDWTAENTZWXKRQDHOGYDFUKMHULMTWRNDPJAD");
    msg.last_error.assign("UIJHFHEJLPKDNTBHRQKIMUQUSEJIISEOBQRXHDCHEAGCOKPLVIOVPWAZFZCBKUDHLXXNTIQEKXMVUWNKLQNOVZOKTVOLWFSBYYNWAJQPFNPUVTBHRWRYAOXYPBSCGCXDLJVTVXXSHZYSIBCGKRMFVMSMZLQBCLRVWEBUQAFYJKSRZGGQWCZADZEXHPMHFEGKFY");
    msg.last_error_time = 0.443734189688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.714415118241);
    msg.setSource(30697U);
    msg.setSourceEntity(104U);
    msg.setDestination(59682U);
    msg.setDestinationEntity(211U);
    msg.mask = 197U;
    msg.max_depth = 0.0496582883966;
    msg.min_altitude = 0.894630252919;
    msg.max_altitude = 0.688319095401;
    msg.min_speed = 0.807781035637;
    msg.max_speed = 0.737169792893;
    msg.max_vrate = 0.976552893359;
    msg.lat = 0.233876389914;
    msg.lon = 0.867689158666;
    msg.orientation = 0.0521988737725;
    msg.width = 0.346384282305;
    msg.length = 0.736442904446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.212930190395);
    msg.setSource(2640U);
    msg.setSourceEntity(135U);
    msg.setDestination(45638U);
    msg.setDestinationEntity(203U);
    msg.mask = 22U;
    msg.max_depth = 0.331534017608;
    msg.min_altitude = 0.889878912949;
    msg.max_altitude = 0.0475926484821;
    msg.min_speed = 0.509971226744;
    msg.max_speed = 0.994883349612;
    msg.max_vrate = 0.933182722743;
    msg.lat = 0.354254613848;
    msg.lon = 0.853961081886;
    msg.orientation = 0.361106929997;
    msg.width = 0.447417989617;
    msg.length = 0.974562879768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.363324921717);
    msg.setSource(14987U);
    msg.setSourceEntity(119U);
    msg.setDestination(28740U);
    msg.setDestinationEntity(115U);
    msg.mask = 22U;
    msg.max_depth = 0.368007538285;
    msg.min_altitude = 0.383483630496;
    msg.max_altitude = 0.883276518749;
    msg.min_speed = 0.959902515379;
    msg.max_speed = 0.894310372428;
    msg.max_vrate = 0.789762550846;
    msg.lat = 0.665285403139;
    msg.lon = 0.140112004083;
    msg.orientation = 0.114081369541;
    msg.width = 0.578204522347;
    msg.length = 0.602915847838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.56425967516);
    msg.setSource(17799U);
    msg.setSourceEntity(65U);
    msg.setDestination(31457U);
    msg.setDestinationEntity(87U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.802540373198);
    msg.setSource(17740U);
    msg.setSourceEntity(49U);
    msg.setDestination(38606U);
    msg.setDestinationEntity(243U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.488351150881);
    msg.setSource(58485U);
    msg.setSourceEntity(69U);
    msg.setDestination(5588U);
    msg.setDestinationEntity(10U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.0808838632214);
    msg.setSource(28811U);
    msg.setSourceEntity(46U);
    msg.setDestination(59663U);
    msg.setDestinationEntity(92U);
    msg.duration = 12467U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.374827382545);
    msg.setSource(16605U);
    msg.setSourceEntity(12U);
    msg.setDestination(9650U);
    msg.setDestinationEntity(119U);
    msg.duration = 36820U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.636907534476);
    msg.setSource(51146U);
    msg.setSourceEntity(222U);
    msg.setDestination(34744U);
    msg.setDestinationEntity(158U);
    msg.duration = 62078U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.567454856706);
    msg.setSource(42819U);
    msg.setSourceEntity(91U);
    msg.setDestination(40634U);
    msg.setDestinationEntity(220U);
    msg.enable = 136U;
    msg.mask = 14521671U;
    msg.scope_ref = 1409513635U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.259108431418);
    msg.setSource(45750U);
    msg.setSourceEntity(112U);
    msg.setDestination(59627U);
    msg.setDestinationEntity(49U);
    msg.enable = 252U;
    msg.mask = 3254271642U;
    msg.scope_ref = 3629690492U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.482612440566);
    msg.setSource(9457U);
    msg.setSourceEntity(47U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(158U);
    msg.enable = 201U;
    msg.mask = 485705913U;
    msg.scope_ref = 3037141149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.131312623707);
    msg.setSource(7038U);
    msg.setSourceEntity(185U);
    msg.setDestination(47875U);
    msg.setDestinationEntity(153U);
    msg.medium = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.0645099487514);
    msg.setSource(44532U);
    msg.setSourceEntity(48U);
    msg.setDestination(34458U);
    msg.setDestinationEntity(32U);
    msg.medium = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.954906698878);
    msg.setSource(15151U);
    msg.setSourceEntity(220U);
    msg.setDestination(1538U);
    msg.setDestinationEntity(222U);
    msg.medium = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.766583026542);
    msg.setSource(37239U);
    msg.setSourceEntity(169U);
    msg.setDestination(37259U);
    msg.setDestinationEntity(27U);
    msg.value = 0.818734598929;
    msg.type = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.683038745408);
    msg.setSource(25406U);
    msg.setSourceEntity(4U);
    msg.setDestination(2096U);
    msg.setDestinationEntity(204U);
    msg.value = 0.516669377248;
    msg.type = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.498164853988);
    msg.setSource(22159U);
    msg.setSourceEntity(206U);
    msg.setDestination(28127U);
    msg.setDestinationEntity(10U);
    msg.value = 0.290857030476;
    msg.type = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.46744724837);
    msg.setSource(49216U);
    msg.setSourceEntity(9U);
    msg.setDestination(1463U);
    msg.setDestinationEntity(207U);
    msg.possimerr = 0.490622411274;
    msg.converg = 0.953055538201;
    msg.turbulence = 0.504943384667;
    msg.possimmon = 239U;
    msg.commmon = 242U;
    msg.convergmon = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.707324646863);
    msg.setSource(603U);
    msg.setSourceEntity(163U);
    msg.setDestination(1844U);
    msg.setDestinationEntity(47U);
    msg.possimerr = 0.0538757590903;
    msg.converg = 0.737690512373;
    msg.turbulence = 0.261839207296;
    msg.possimmon = 10U;
    msg.commmon = 227U;
    msg.convergmon = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.702774418105);
    msg.setSource(35782U);
    msg.setSourceEntity(167U);
    msg.setDestination(33896U);
    msg.setDestinationEntity(126U);
    msg.possimerr = 0.304159876546;
    msg.converg = 0.205269562976;
    msg.turbulence = 0.779862522226;
    msg.possimmon = 108U;
    msg.commmon = 43U;
    msg.convergmon = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.0997462375085);
    msg.setSource(27523U);
    msg.setSourceEntity(202U);
    msg.setDestination(16078U);
    msg.setDestinationEntity(1U);
    msg.autonomy = 145U;
    msg.mode.assign("NRDAOCTWEFWHNRSULKKQO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.239905240672);
    msg.setSource(25784U);
    msg.setSourceEntity(168U);
    msg.setDestination(38168U);
    msg.setDestinationEntity(62U);
    msg.autonomy = 71U;
    msg.mode.assign("JRDESDHHTYEOLXVAYSYLCVRJROIKIOLRWQERYEVBUSGFIPAVXXUWOFYUPMPZVYBTWOXOELIFSCQQBPCUCEEZWBVQVLHFYSRNGHUFZGQAMXFDWVBPLWKKICNZJYNZUGGWRUXMIZNLGTBFNBXPDBIFVFWSJES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.0959961701725);
    msg.setSource(63103U);
    msg.setSourceEntity(117U);
    msg.setDestination(57411U);
    msg.setDestinationEntity(37U);
    msg.autonomy = 18U;
    msg.mode.assign("VYSBZOMOGVLXFQDEERTUQRGBCJNHKZFNZWMWCUFYPGKIKHNGAJFTYHZBDOWIUEISJILVTVXANRLTBBUKLYJMCDIANRRJLCBBAGRNVBNHPDDIPCOREJEFMTDDSHYSOYYUVBWUCNMMLJSPMIZIQLWVJNWTKQQREWQXRSDVDZMVAZHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.829393578992);
    msg.setSource(48153U);
    msg.setSourceEntity(88U);
    msg.setDestination(57744U);
    msg.setDestinationEntity(176U);
    msg.type = 121U;
    msg.op = 187U;
    msg.possimerr = 0.451615012748;
    msg.converg = 0.443834834896;
    msg.turbulence = 0.320643733921;
    msg.possimmon = 25U;
    msg.commmon = 49U;
    msg.convergmon = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.969158758846);
    msg.setSource(56110U);
    msg.setSourceEntity(50U);
    msg.setDestination(14784U);
    msg.setDestinationEntity(43U);
    msg.type = 186U;
    msg.op = 226U;
    msg.possimerr = 0.945944632909;
    msg.converg = 0.690507577098;
    msg.turbulence = 0.401048857819;
    msg.possimmon = 147U;
    msg.commmon = 58U;
    msg.convergmon = 196U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.0133608311577);
    msg.setSource(63637U);
    msg.setSourceEntity(133U);
    msg.setDestination(32514U);
    msg.setDestinationEntity(81U);
    msg.type = 170U;
    msg.op = 142U;
    msg.possimerr = 0.553356193891;
    msg.converg = 0.0930462939018;
    msg.turbulence = 0.807412419806;
    msg.possimmon = 32U;
    msg.commmon = 135U;
    msg.convergmon = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.25154840818);
    msg.setSource(11704U);
    msg.setSourceEntity(215U);
    msg.setDestination(36113U);
    msg.setDestinationEntity(66U);
    msg.op = 44U;
    msg.comm_interface = 52U;
    msg.period = 61370U;
    msg.sys_dst.assign("XDNNPWOJMTCMXCJGODUKEZUOYOCBSZCVLPLYUOQZLZFMSWXOFKLVEUPAUJAGBJIOVWIKHJAVTXJSFSFKHNVGGIELLQBWEPCTUXFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.133297801904);
    msg.setSource(1564U);
    msg.setSourceEntity(26U);
    msg.setDestination(62530U);
    msg.setDestinationEntity(120U);
    msg.op = 109U;
    msg.comm_interface = 39U;
    msg.period = 21798U;
    msg.sys_dst.assign("NOSZMETNEIEJXHUNVHWOMJYMWOVTPDCBRQVZYLSSWOSNQLOAQDOYWMDPFDXRZILATUMLERNKGZCVOAHRIGIFGNVBXSBFPKEBZLAMXSWCKILQBCGFPZXEIKMGGZGPVQNHYHMTNZPDCCRSMTHYFVPDKUMUWFTEYTZPYKHAFCXTKXNXUORFUNRWFUTKJZQXFKAHCIQLJJAJBUKAJXUIOPGDWATDYGPBIGVJULVRBORBEWWIRQVCHYEJYQLJHQDACS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.487288921584);
    msg.setSource(21464U);
    msg.setSourceEntity(73U);
    msg.setDestination(37974U);
    msg.setDestinationEntity(113U);
    msg.op = 184U;
    msg.comm_interface = 228U;
    msg.period = 52647U;
    msg.sys_dst.assign("DQGHVUIWVREVDMVMNKMILHYLRCLXAHTIMZUPHQXNSZXKTHOOBNHHJWBFDKZFZYGWLRYJOJLARBMPENAKUUTAISVQGNAQJGSIUJZBBCNNCVPXUIYSKZLRZURMWWORBESHSCPNGOHBQNYWDXQKCSPOUNOSLTGVETWYGAVFRYIEKCPADZMFZTQKWFJMCJQMSSOXTXEHEGRLLJDFJQPGFYFCXYAPXQDDAOWUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.0531722075697);
    msg.setSource(31862U);
    msg.setSourceEntity(146U);
    msg.setDestination(17327U);
    msg.setDestinationEntity(114U);
    msg.stime = 884025112U;
    msg.latitude = 0.493802141498;
    msg.longitude = 0.383928799056;
    msg.altitude = 60294U;
    msg.depth = 13044U;
    msg.heading = 45483U;
    msg.speed = 6888;
    msg.fuel = -24;
    msg.exec_state = -54;
    msg.plan_checksum = 61638U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.0840982119592);
    msg.setSource(61613U);
    msg.setSourceEntity(184U);
    msg.setDestination(9690U);
    msg.setDestinationEntity(169U);
    msg.stime = 1427039555U;
    msg.latitude = 0.117965882644;
    msg.longitude = 0.191606518483;
    msg.altitude = 54101U;
    msg.depth = 32826U;
    msg.heading = 54418U;
    msg.speed = -2844;
    msg.fuel = 65;
    msg.exec_state = 97;
    msg.plan_checksum = 35400U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.738472961735);
    msg.setSource(4063U);
    msg.setSourceEntity(137U);
    msg.setDestination(17343U);
    msg.setDestinationEntity(129U);
    msg.stime = 3657158362U;
    msg.latitude = 0.677932146296;
    msg.longitude = 0.415154068663;
    msg.altitude = 56972U;
    msg.depth = 33985U;
    msg.heading = 30307U;
    msg.speed = 32703;
    msg.fuel = -4;
    msg.exec_state = -108;
    msg.plan_checksum = 17526U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.834381868831);
    msg.setSource(41868U);
    msg.setSourceEntity(97U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(90U);
    msg.req_id = 38658U;
    msg.comm_mean = 53U;
    msg.destination.assign("BRNKZQWLTPQUADXFZXVJTOMFWLPMGFAJYHADMIJYDEVUYXICXAOHABDGDCIGGSZOQXTERWYSUGFWVNMQDBWIIJUEOKPNCPHRVYVERMHBZCLQXWHNGSCNTXQOZFEMYVKQCJATLCODMFKOVWHJBKFCLHNIYOLPZCWZAVWSUPVUXFRKZG");
    msg.deadline = 0.96907516306;
    msg.range = 0.0781008508906;
    msg.data_mode = 11U;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 109U;
    tmp_msg_0.lon_gain = 0.0225066877042;
    tmp_msg_0.lat_gain = 0.400470840881;
    tmp_msg_0.bond_thick = 0.44800577813;
    tmp_msg_0.lead_gain = 0.344473544567;
    tmp_msg_0.deconfl_gain = 0.665913299748;
    tmp_msg_0.accel_switch_gain = 0.00622433620794;
    tmp_msg_0.safe_dist = 0.787953096059;
    tmp_msg_0.deconflict_offset = 0.768240623029;
    tmp_msg_0.accel_safe_margin = 0.0957786244;
    tmp_msg_0.accel_lim_x = 0.411258701427;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MPAUJTHRLEKXMIQVZXHXCJFBDYAYGZZVULARZFCBWMAKPRCNLDLVIKNVQUUAGDPBFKLQFGTGFOFSCYRSCQXDXNLAYSQJGUVSIVEHWLXWWEWBHZCVMPUTEBWFEINMPNSOYTRBGDBSZJXSUINGWM");
    const char tmp_msg_1[] = {-83, -105, 123, -62, -111, -91, 45, -18, -1, -20, 61, -81, -67, -25, -126, 117, 77, 34, 5, 40, 57, 60, -124, 55, 77, -128, 72, -66, -77, -41, -26, -110, -102, -60, -14, 39, -55, -33, -18, -10, 125, -70, -54, -109, 106, 37, 53, 125, -80, -24, 19, -99, -105, -61, 39, -117, -76, 68, -104, -48, -38, -38, -64, 106, 18, 81, 20, 41, 76, 79, -54, -97, -51, 119, 110, 58, -53, 64, 25, 115, 22, 87, 26, -105, -52, 107, 63, 45};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.673453732777);
    msg.setSource(32464U);
    msg.setSourceEntity(169U);
    msg.setDestination(8770U);
    msg.setDestinationEntity(173U);
    msg.req_id = 7660U;
    msg.comm_mean = 137U;
    msg.destination.assign("OAJTDQFQXSGINDYLMUENUAEYWGFPUAQSUISWCRPPBZRHKYWVLJPFKBDXMZUDZOZREGAZZCWXVPNXIKUUDQEYRLDSCMVKNNKSNFNJFFOVBEZAIMMMAUYWRYQWQQLREBYBUQWIMXYOVLFTDHARWXOPXITBLTKBJHGBNJTCAMPZDSHKSGPHLVHLTWEQSHIUTVIJQAGOXZSFGCEJXGKRKFMBYPT");
    msg.deadline = 0.614154249206;
    msg.range = 0.813570284442;
    msg.data_mode = 92U;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RCXUGULXYILYPKUFCXTKVCFPUHMOWJRVBGJTNICCGCPVDKRTJWVQQPGMDPYXJHTLYLXOFRINUBEEVEPABRXJEGVTBIOISFQTSLPMHZEPSKAIUFENDTUSRKAZ");
    tmp_msg_0.sys_type = 41U;
    tmp_msg_0.owner = 27740U;
    tmp_msg_0.lat = 0.534347728891;
    tmp_msg_0.lon = 0.678181615057;
    tmp_msg_0.height = 0.00170415715087;
    tmp_msg_0.services.assign("EFOJTNNRCHOHWOFNKBZZBOZVFSTEOUJHBOYSUCCTFGXSLHAKKLLTNWQPNUGCIDQZIGSDALGVJKI");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XSFFXSSUZOCRGBCZQLWWYMIKEMQQYECGAZWRLC");
    const char tmp_msg_1[] = {-74, -62, 22, 125, -71, 34, 82, -73, 31, 53, 36, -27, -100, -7, 106, -7, 47, -117, -125, 14, 47, 107, -85, 19, 52, 23, 15, 80, -50, 75, 120, -10, 108, -96, 66, -120, 32, 38, -96, 103, -7, -6, 42, 77, 34, 14, 22, -111, -42, -82, 95, 59, 11, 63, 98, -118, 43, -25, -11, -39, 110, -89, 125, 24, 103, -22, 51, -96, -26, 84, -25, 61, -14, 26, 20, -7, -125, 86, -89, -125, 76, 19, -58, 85, -21, -67, -64, -54, 63, 93, 4, -90, -124, 26, -75, 76, 83, 117, -79, -45, -119, -121, -73, -88, 63, 48, 91, 53, 2, 25, -103, 105, 1, 30, 54, 78, -125, 54, -18, 73, 18, 80, 64, -32, -73, 101, -37, 71, -109, -59, -21, -2, 57, -54, 53, -76, 46, -116, 61, 107, 21, 122, -21, -32, -68, -34, -118, 123, -15, 62, -6, 68, 55, 25, -98, 51};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.899241392579);
    msg.setSource(62383U);
    msg.setSourceEntity(116U);
    msg.setDestination(54947U);
    msg.setDestinationEntity(173U);
    msg.req_id = 61623U;
    msg.comm_mean = 251U;
    msg.destination.assign("PBOVGNBLFNHURQYWPEILUOOWSZFSNPQVRITVGXFAJMVYMCIYXTSRCLSSGMJCGRHIGOXTOXMBFZADENJINAKJVLFZGEXMDVAGUKKRCPNDZAHDZUYSSFG");
    msg.deadline = 0.716934804937;
    msg.range = 0.79623273502;
    msg.data_mode = 99U;
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 90U;
    tmp_msg_0.file.assign("TCAJMSZQXOXVPDFLTKLOWJBDXVULKNEITDPWIFYFXEZVHEZYDEJAMNPUAKMKCSMQYHPFZOICMIPHWOUKMWVJWWBMFOLISRUHLJGIABRFNBESRXYYCDQCDOXOLEGXYUHTQRHYQMBIZTSJOXTSVZLFJVRGAEPIDCWRKTQCWVGUNOBYVNPH");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("COLIUPFLWUPSWKGKNBXYOFTZESDTHWACAXNUFRXCEPCADTEYXVZXGXGRSSRPSMPDBGVWSOYTHPUZLVJKDXQBF");
    const char tmp_msg_1[] = {72, 11, -85, 54, -127, 72, -47, -78, -109, 68, 116, -91, -105, 3, 95, -112, 110, -39, 28, 101, -81, 22, -111, -87, 84, 90, -127, 33, -14, 116, 66, 116, 112, -23, -28, -103, -67, -45, 69, 13, 39, -10, 121, 11, 28, 103, -67, 40, 70, -91, 109, -102, -87, 31, -115, -89, 29, 94, -44, -17, -54, 97, -79, 76, 16, 99, 120, -109, -75, 26, 26, 112, 61, 7, -91, 39, -26, -104, -66, -98, -91, 93, -111, 75, -89, -103, 46, 83, -18, 102, 19, -14, 30, 25, 68, -70, 14, 32, 125, 75, -13, 24, -40, 109, 118, 34, 29};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.668961782421);
    msg.setSource(50743U);
    msg.setSourceEntity(128U);
    msg.setDestination(51477U);
    msg.setDestinationEntity(240U);
    msg.req_id = 29498U;
    msg.status = 38U;
    msg.range = 0.176915536633;
    msg.info.assign("KBHVBDCGFOJCPBDSLJAWPGUZQHQAZMIPLVWVQCHDVIANEKBYKYRQEBUDZRMFGRLQHXYYZZALWROWKESKWKKWNFUUUXPOXISKNNLSTAKNOGJXIFLJTVEXONWXRAOWIHYEGAMWNQDECYGJPDJRIPCPNYMYJKGCZHGZZBHDSQTQFVPPFFJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.16060021161);
    msg.setSource(57049U);
    msg.setSourceEntity(160U);
    msg.setDestination(61353U);
    msg.setDestinationEntity(241U);
    msg.req_id = 12478U;
    msg.status = 85U;
    msg.range = 0.709889488638;
    msg.info.assign("ZHNWHIFDTWMNFCVYUHMDRJWQJKAPUUTTSALIPTAYUHQYEVIOFLKUTXDPIDCEYWAOXGHDSCEMZBDRXHFOAUDSCGAMDSIVKFENMMEJKLRTKYWUPVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.309868686115);
    msg.setSource(54628U);
    msg.setSourceEntity(29U);
    msg.setDestination(9283U);
    msg.setDestinationEntity(196U);
    msg.req_id = 2364U;
    msg.status = 138U;
    msg.range = 0.235071353655;
    msg.info.assign("WNEMVNILQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.551561008008);
    msg.setSource(972U);
    msg.setSourceEntity(229U);
    msg.setDestination(47539U);
    msg.setDestinationEntity(10U);
    msg.req_id = 46860U;
    msg.destination.assign("CWYDBJROTZMZEUFFYPGBHGNUETRYFYOUEFQNLPLPFWVOWSJBKAHULXOFZGOJIPZFAIPTTJXMZMEKIAELDRMVWBVHTPMETWBAWOCYKGRKBVGUUTSDWSSJGERSNQNJHAHZGBLDROQBGVIUFRYQTUCDSKPHWGXXNQEPQHWZQLXOIQRJNAQWYAHDFXMCLORXUJPESVLFMSCJLXCLRTNAYBZEYCCSAVSICIHMC");
    msg.timeout = 0.932855503548;
    msg.sms_text.assign("ONCGLHAYBMMKTUUSBBFUVPLZSIIDFDUJAJMHQPMRONFDHGAPYFHUIDWDKPYRIEILXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.781717730912);
    msg.setSource(17202U);
    msg.setSourceEntity(81U);
    msg.setDestination(37311U);
    msg.setDestinationEntity(6U);
    msg.req_id = 18576U;
    msg.destination.assign("VXHJVVRNPEOJSAGFKWJQRQDUHEAFBXJEHUAT");
    msg.timeout = 0.123433668847;
    msg.sms_text.assign("FEDFYSSTDPDSTNOVWITRBMOVTFFYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.829839623605);
    msg.setSource(51777U);
    msg.setSourceEntity(224U);
    msg.setDestination(17320U);
    msg.setDestinationEntity(52U);
    msg.req_id = 36914U;
    msg.destination.assign("JCKEWLJTBWIMUZPXHNNVRKHIENSXANTNOTUQFRJMESMFKOCXNWJYHPODQOHLYBV");
    msg.timeout = 0.167755383422;
    msg.sms_text.assign("MIRSZIGBPDTNLGFBWTZQMCXTVEJVTORHTMOUYIQDENAPSPIEQZDHNXIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.24605270278);
    msg.setSource(43040U);
    msg.setSourceEntity(244U);
    msg.setDestination(25866U);
    msg.setDestinationEntity(192U);
    msg.req_id = 37978U;
    msg.status = 84U;
    msg.info.assign("NKJXHGEIERKBFVEPTDQKUPXVYGLPNHTYHAQJBQZJLWFLXXNCLTFQLUCYBXBKDBNKOVUWELKGJQCOWWADSSHFZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.121708135789);
    msg.setSource(4836U);
    msg.setSourceEntity(117U);
    msg.setDestination(7474U);
    msg.setDestinationEntity(251U);
    msg.req_id = 11587U;
    msg.status = 24U;
    msg.info.assign("ZAYQCGJOMXVSIQXSKANEKUXETHGHCQGLUUQCRBYLDREOIBOWRJOPYKLETTXWKDIIOSWEOYNNFCSWCZIRVYWZOZFRBKDAVGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.485711685832);
    msg.setSource(27000U);
    msg.setSourceEntity(200U);
    msg.setDestination(24283U);
    msg.setDestinationEntity(247U);
    msg.req_id = 40025U;
    msg.status = 93U;
    msg.info.assign("YWLDMCLHMSVUTDNJWOFEQTFOYTTZUDRFGWBTKZOPFAVIZMYXMDBAXBFFKPALWWQBGVLQSBEJGPGNSKNZSHHZFOMRCOUPOZPGHJCYRLQEANEUAH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.916601710688);
    msg.setSource(16701U);
    msg.setSourceEntity(81U);
    msg.setDestination(10546U);
    msg.setDestinationEntity(126U);
    msg.state = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.199719243141);
    msg.setSource(1638U);
    msg.setSourceEntity(86U);
    msg.setDestination(60903U);
    msg.setDestinationEntity(160U);
    msg.state = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.667143461003);
    msg.setSource(59786U);
    msg.setSourceEntity(223U);
    msg.setDestination(57132U);
    msg.setDestinationEntity(155U);
    msg.state = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.604218534648);
    msg.setSource(35708U);
    msg.setSourceEntity(92U);
    msg.setDestination(15396U);
    msg.setDestinationEntity(58U);
    msg.state = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.622331470954);
    msg.setSource(40754U);
    msg.setSourceEntity(138U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(158U);
    msg.state = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.492146506423);
    msg.setSource(28693U);
    msg.setSourceEntity(67U);
    msg.setDestination(38256U);
    msg.setDestinationEntity(137U);
    msg.state = 114U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.0407751299869);
    msg.setSource(29791U);
    msg.setSourceEntity(203U);
    msg.setDestination(14010U);
    msg.setDestinationEntity(4U);
    msg.req_id = 23138U;
    msg.destination.assign("OATHWCNYLXSVVFDMGMPXLKHQYVQZYWTFOTTOEDNNVMUKKMJZJZQVPSYTKXQWQOSWUUISRIVDSJTVGYZRBJBHENHJYPZRMDCWRNBWFCFDPMGPHKMLMLUENROXDIXLIGAXEOTVCKQBSUQDQBXSDOIBHKSUJNKPYPZGOSYLJADCRAGYVTNIEPPFNCP");
    msg.timeout = 0.398526735743;
    IMC::EstimatedMugState tmp_msg_0;
    tmp_msg_0.id = 597783585;
    tmp_msg_0.x = 0.898814168245;
    tmp_msg_0.y = 0.916546319405;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.346326279075);
    msg.setSource(51535U);
    msg.setSourceEntity(111U);
    msg.setDestination(58125U);
    msg.setDestinationEntity(101U);
    msg.req_id = 12822U;
    msg.destination.assign("OPVULBUHCTWBZTMIMJANMGJQNTEIEMAKRKCALDEWKTGWGCVJONEPXMLFYVELQKLDFWDFPGTYVGZOPBYGEASCQFYSSRKVTFPVEQNOGXYRJXNHJIAXBAXDVIMAZDNXXKMYREPUSHLCZOAKUHNOQZIPJTDUSFWMFQLSVFTMHWJYLKNJOEBWQIASX");
    msg.timeout = 0.925263543507;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("RZSILMNPNOODIDRFNFXKRJSXWTHZIFWWVKDDQJVUPYCSVVYUMTYKOGNYQUMAYWHYJBXUUNQGWNZJAQSRLZZJCUABKBBOTKLIESFPLTPEDIHHQEPHMOCQVBVWXNIUVEXAKWPOOPIVCGDAMHYTZZELSZYNRBBRFABZQCHARYHXJQJHGAUFC");
    tmp_msg_0.lat = 0.994742766827;
    tmp_msg_0.lon = 0.555102707613;
    tmp_msg_0.z = 0.153683026561;
    tmp_msg_0.z_units = 36U;
    tmp_msg_0.cog = 0.893907690022;
    tmp_msg_0.sog = 0.412896553962;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.843056611334);
    msg.setSource(5361U);
    msg.setSourceEntity(13U);
    msg.setDestination(2913U);
    msg.setDestinationEntity(19U);
    msg.req_id = 33316U;
    msg.destination.assign("IRIJNIMOGFYEBZFGULBYDQOSFIIBXTRAQYCETOTHTNXILNGWTOBQMRCVSFJVDKKXUZJZXXPMVAHQLYLEZVCLDBHDIJGDYPAWLWNDHJYRJSDPTARJLVLJZKACPMZBOQFZNGVUKXKKCESO");
    msg.timeout = 0.392588120267;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 250U;
    tmp_msg_0.period = 4236564255U;
    tmp_msg_0.duty_cycle = 1250015119U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.418552146267);
    msg.setSource(62321U);
    msg.setSourceEntity(11U);
    msg.setDestination(43342U);
    msg.setDestinationEntity(253U);
    msg.req_id = 1038U;
    msg.status = 16U;
    msg.info.assign("OHGQHZIGLIVZPOYUNFMGUYSWYVYMPNGNSIODPSLJYVEESRWKUTUTWSQNUAWSLSJVAZQFSIGXCOUNIHXRIEPAVRTHFLTVFCABMPXPZLPKZKFKYHWBQSBBJDQABAQFZUCRHXLLJDDGNYMTCWKWPCDXZRWCKBGCIVBFEDQTKUEMJQJYHMAZXBTGKBXELMUQOBODNTEVFEHANODWXPIDMXIQOINDSYZAOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.699188607523);
    msg.setSource(58518U);
    msg.setSourceEntity(185U);
    msg.setDestination(41701U);
    msg.setDestinationEntity(185U);
    msg.req_id = 48899U;
    msg.status = 120U;
    msg.info.assign("ARVKUUMJCKMHBUOGNVS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.916937270415);
    msg.setSource(6951U);
    msg.setSourceEntity(119U);
    msg.setDestination(38258U);
    msg.setDestinationEntity(29U);
    msg.req_id = 49912U;
    msg.status = 225U;
    msg.info.assign("RJREAYFQPPDDGNWMNTPURZXSDNBYZLVJUSBSGDEGJFOCLLFZCFJXORAUKOHQDBODBOAGNXFPBEYTFMACWKKDABHTRLMQPJKOCGZZLMFMVMIOTVSHQJJICCINVWNRMYXCXYIQIMURTNWXUHTPQYVEOLNQPEOPUSZLEAJNVVQERWUWBQIBKTHGFIKXRXFWGBZWZGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.530537946534);
    msg.setSource(32009U);
    msg.setSourceEntity(100U);
    msg.setDestination(15859U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.628400655318);
    msg.setSource(21943U);
    msg.setSourceEntity(86U);
    msg.setDestination(10333U);
    msg.setDestinationEntity(75U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.914029495718);
    msg.setSource(48511U);
    msg.setSourceEntity(73U);
    msg.setDestination(61383U);
    msg.setDestinationEntity(110U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.90948086152);
    msg.setSource(43221U);
    msg.setSourceEntity(247U);
    msg.setDestination(24784U);
    msg.setDestinationEntity(92U);
    msg.plan_id.assign("CHPHQCCVRRWMBSUOXUVBQVXJXXOSSPIGAZNIAIMTTXLFDTNNOUSNUWMIYJIXEPRCKHJGIWQRMYXGDEFFWWZZHNGOTVABZZSTCA");
    msg.description.assign("XGMNFFQBDVIBHFBQVMYIYTTHQVSHOIKDXPEBRKWLQYHWDFHFWABWUFGTGRCHHLQVJUATJRNJTMBPZLQJLUNSOJICOOUBFDSUSSKJGZJRARNENNFKSMXHQVVNGCDWKZORSIXCZWZYEBDLUTAKBZTDCKVYNCOWGIRCDNATIHNRKEAOLAAWG");
    msg.vnamespace.assign("PRQTVHUXPGBEWEOTEOIYMMSVDVKUBZWJVIJQXZGYBHPIEHAMXALGVEKGFAQAPCOTSFJFGYGGKMEISCBMDUESKUJKLLKEOCFXZOCNFSURLYRAGXUNVLZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MFKOTBEIFVEYSMHRNPUY");
    tmp_msg_0.value.assign("ODNYEVUOCXLAZSWKTNVGPLNOYGBSZIUMCPUZFGLQFQRHTLDQEMPAKJSWDPTQNRXASXVBUCAWONLPTPAAQCDFRXWXRZJXVPHIRHLYYNUFYIABCOHEJIUSVUVGBCPTJYBSFUVXEEFWW");
    tmp_msg_0.type = 154U;
    tmp_msg_0.access = 135U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FKFGQDYEVYFDHEGRLKKDINDPQUPFJPVQFTJNNIOISZCVIVBSCXAPPJPQGLRFJHXMAWCVGWRBOWCLWGFEEXCGZOYUH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("NJHETGFAIEIWNSMAADOQJSKQOMSBNWGXYLEJRETYAWEIFJCSQXUDOVIOHOLTFXQQRCPUZH");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 5831U;
    tmp_tmp_msg_1_0.control_ent = 156U;
    tmp_tmp_msg_1_0.timeout = 0.457874002701;
    tmp_tmp_msg_1_0.loiter_radius = 0.0500188468358;
    tmp_tmp_msg_1_0.altitude_interval = 0.404094587773;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FormationControlParams tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.action = 155U;
    tmp_tmp_msg_1_1.lon_gain = 0.127074315146;
    tmp_tmp_msg_1_1.lat_gain = 0.766785003393;
    tmp_tmp_msg_1_1.bond_thick = 0.972066575294;
    tmp_tmp_msg_1_1.lead_gain = 0.297902703363;
    tmp_tmp_msg_1_1.deconfl_gain = 0.337061664171;
    tmp_tmp_msg_1_1.accel_switch_gain = 0.381011973973;
    tmp_tmp_msg_1_1.safe_dist = 0.981597533655;
    tmp_tmp_msg_1_1.deconflict_offset = 0.416271218286;
    tmp_tmp_msg_1_1.accel_safe_margin = 0.252417366575;
    tmp_tmp_msg_1_1.accel_lim_x = 0.748961869107;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("DBLZJTZFZXCYTNTKIWCUIEVGEXOYZMHMWLARJOOEDJZRJZLPNOVWYSNVNSUSVTSOMJKHKXSCODGSQFPQFICVFXTSDMKOWRMOLYCFMZIDHGHUIHDGRWEFIHYPVQAHBHUIMCTCAEXEKBANRVCPQZYKEHYIJXVY");
    tmp_msg_2.dest_man.assign("NUMUMXNSQNODEWVDKJQJWGDLORRVHOCVMFDVYSMBYZJAAVBWWMXHXLJLZHESUURFZEYWHPIAMWOGRXSEYEGUVLQSYIBXBNRKTJJCKFBQUSZKIROSZROPAENKOXCPNGYCFGPUIZSQBQTFCGCMLBEKIVYILTETIHRKDXXYZTESPTOPGZCFKLYDTPHPNHOCHKDCQWB");
    tmp_msg_2.conditions.assign("BJZSLPRUGIDAVXKSUYOARZWBILLADFPSRVRQUMJPZEZRB");
    msg.transitions.push_back(tmp_msg_2);
    IMC::Redox tmp_msg_3;
    tmp_msg_3.value = 0.304025981099;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.862966446146);
    msg.setSource(25794U);
    msg.setSourceEntity(197U);
    msg.setDestination(12580U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("QIKPGQZLJVBHGWPOXWEBLHVPNBAQPHDZWWUAORPDPZNKRKXFQDZYMCNCOURUOTGEIWFVZIJVRMMBLEISXYARHTYFRNCHOGSFBSNFCUYEITXMHZKWXLDGKBNGVLHYMYIZQJOBMJMCNWMTZVUBFFDLEPESIYTJCBDXDLUHNXEKSWTOJQQAAVTMGEQYVTSYAZKIIKRTAJSFUORKFPBLWSGQUMVDCEWVXCJLSAUDXIOXKLHCP");
    msg.description.assign("ZNQLKITPITFBKLULZMDTNEUNEYACWLGFVXCEYUBPSTVPVIMHYPWILAXJFLBSURFMZYUSXBDORNYZBWWMYKSPWJFDSZNHGUPYHRCAQCQLQCQRQHIXQBGMQGMGZJNSPZVKAPTNIZORWVWEKGXEDFAINMVOGYJIBXDGFKOAXUEDHBJIOCJWAETEKVCYGZHRRVJXXDXETHOFWFOKTMYJ");
    msg.vnamespace.assign("LEKNBKURMZJRUPWUFNPUZPTGPCOKOWY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GVOSDANFWDVKYZTFLCXWRXUGXIXSYONPNPMRBGDBTHHPAOMSRYENNQUJPMAFRAMZFXXJNNERVDBOKHIFCQKRDOIQEIIYUYESCUOHGTLQKHJBTPLPSFOJRWPUASBTXJCVXZQKDYPROAMIZGDWWQHLTNLUVHHMGCHVSMTJLLRUBXZJGFZC");
    tmp_msg_0.value.assign("GEQZPPWXRIGEZDSTYJUZUQQYUFFWJPBLXICKQMELXCDLYOQKQEHITUNVCRJHSZGYUTYRLVHDNGRFPGGPOXEVGYJODHASKTRLWOWEPSCODRIMCZBDWCRXLLNSSBDSERDKQZ");
    tmp_msg_0.type = 11U;
    tmp_msg_0.access = 147U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("TALCWKKMIGMMUEXFXCRUWBJKKJWV");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JOQFAWSQGLDUCJAOGISVUSGEDTKRABUJSHFJDOTOXRRKHVBABJENBYWEDLUUKBIGMNLKNZLMBTDTCUSWYLLIKNVZCEFNVJNVDWHZWTXAARIIM");
    tmp_msg_1.dest_man.assign("EGROEBKRHRLFPYVAHYASCYUOUVOBEUENRHUWGCDYO");
    tmp_msg_1.conditions.assign("KCETPWNSNFQFBOJJOFRSVUOOKNGIXUKRENAEVEDBYNJDJQZZAHZKLCDVBXDTZZPXIXSLVPUYIMJAGQKPHWGQORMRGJNLYQTRHMBJYTWLZTUDCQGBBMWTYGDDFLQAIFGEHGNNKJORSHOHWYZATNLOXCPSJRDCHVMUPKYUHKDLPVSSIGNWKQWMVAFOAMUEZR");
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.305439151231);
    msg.setSource(13270U);
    msg.setSourceEntity(13U);
    msg.setDestination(18570U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("HJOXBANGGTCVRJRGWKJRXCYILMGUPFBNQUNXQMGSAALFNWSVCSEMYVYKZWXLQUFYPVXZDGBLERTDKDAVBMVCHTHJIRBDSLZZZEQJOIPEPNCKFKYTCISGVOBSZXBYLBMNWRENQQLZMRTPYKISUZGBWXPRDLOWJDJXGSOTHAYIEW");
    msg.description.assign("QQPJENIWDMJUHLLT");
    msg.vnamespace.assign("YJTVNOFKGCJAFRUOMMRQYWAT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XBTCCHLHZDVGMZPNRKZGTWGKXNIZYKYUGERNUTJGSIFVKZCPPNVBIPYJHPJFWETUNNYHOUKEIFIEBAVOSBGHKCAFRDVMWFTOZJIDUQAAMGGSCYQYDIQOCRBOSUGLXXJYRHETJPJSHMDHEOQPYNVGSCVPMJCSMQXIOCLBEATRSWNDAQDJLEPWSLBMMHWAKAPNTAYLFKQXRLR");
    tmp_msg_0.value.assign("MUUEKGGSBAYOTABKSRQLOWICPKCWSJAICXFVVCZVZADVTCLFKTOAHWTUNAOTYDQSMAMIQFJENTPCURYFNYDZGRHGQEPLIGQBAZKUXHVJENTDNXHPILEAISOMKGHZJEPPGVVTPWVXRWYQYBKJUMFAZNNFUDYLJQBRIHWXBJEKRSEYSFLZLYENGMFFMQMDRPKWHPJNSOMXJXH");
    tmp_msg_0.type = 189U;
    tmp_msg_0.access = 120U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DQFEPPTOOVFHUOTSICGJNBJHQRIOXMFEIZPCJAEGFMPCPWMXRDLZWWYXIFKXHIVYMERKZHZKEUTAANBXFKCWBYUCDYUKLZPYUOZVJOTGLLYPHSFRXVXEMLKKXCFISZBEZZJARRTALNLUSPCV");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HGMKZSFHBQWPDNAAKGQBDJUXKENPWXQSYTOCETAHKZINJJLEAUODWVPNCIKKNBDTXBLYZJBSKGWLSISUVDUTIIYFTOLBDQCCLMLYGWVPJRFHLBNUFEFQY");
    IMC::StationKeepingExtended tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.595658533668;
    tmp_tmp_msg_1_0.lon = 0.766968178958;
    tmp_tmp_msg_1_0.z = 0.94087203762;
    tmp_tmp_msg_1_0.z_units = 6U;
    tmp_tmp_msg_1_0.radius = 0.668309996406;
    tmp_tmp_msg_1_0.duration = 823U;
    tmp_tmp_msg_1_0.speed = 0.659527535116;
    tmp_tmp_msg_1_0.speed_units = 217U;
    tmp_tmp_msg_1_0.popup_period = 30134U;
    tmp_tmp_msg_1_0.popup_duration = 40978U;
    tmp_tmp_msg_1_0.flags = 104U;
    tmp_tmp_msg_1_0.custom.assign("ULENYHCWYYBCUFRVOINTVXMYBACJAZGKEZJJWOOFOIVMRLAZKQPCDFUBNXUKSTBNZDEAFEYUKSNVHNQPIXZKIUESZPRJHQTOHDOIK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::TransportBindings tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.consumer.assign("ASBYXYPJMZFBPHVECXRIZUHTKXSYDVRCNRQLMSGCZUIXLZKAOXITTHEAKQLJATDDTPWSEFULAUOHMLQTWISEADFEWBMWEACFVFPESUVGRBNCYPJSNWBHDYMAHHTERVXEVMWQXQSFWKBQIGRFVURDQUVYAZZUJLZCYKKONINCROOTDSYMV");
    tmp_tmp_msg_1_1.message_id = 40081U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("FKUVUFZSMZIMENZATKEJRQRRKTKWLMGZROUUDUJJJREXPLGCYQBEXLDPSTACBZYCKLATDSJYKWSIQTBCPMDZPHLJPVBNBHFEAUCUMOTPGCL");
    tmp_msg_2.dest_man.assign("HOHEHDHUUSJHGLNGBUBPWIWIXGXEIVOYOHVEIOEZMDPEQFNQBTERXZBDRGVVXXMOVFCJUCQBWPECDGMSTAAFDCVRCSBJTJENITUANSLCKRKALKSFLRPQWFTWAATUZLRFUMIGFJMXSZWWTYQGPUIJKLZHIZJHUFVNCIHZDYWVLKTDDXJ");
    tmp_msg_2.conditions.assign("YSGZKGNITBJEPCISFKNHFVJRGJBGZTQDLDVQIKQXBQXMXOZGAZYMJOFXNNRPLWWVOTDYPVWABOPTQHAOLWTYOMAMRKLEBTBWVEUGCDZEPCTMVKUZOHHWCJYEFKTQNVLQRYIDTJHPCBUXSHNNLRGSCHINUOPDCBUZLPSUXVGHY");
    IMC::Fluorescein tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.132177802117;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::SetThrusterActuation tmp_msg_3;
    tmp_msg_3.id = 60U;
    tmp_msg_3.value = 0.512825909717;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.968619639197);
    msg.setSource(61822U);
    msg.setSourceEntity(79U);
    msg.setDestination(42704U);
    msg.setDestinationEntity(49U);
    msg.maneuver_id.assign("BRDSJXMZXUFHSMRFPTKFDNOMWWSNJOOTKRKOVPHINMZQMHVGTBNLSVAKTHCCWGVGHUYYJPKAWJFYVNLXFFQKURZLDHVDTKLCJGR");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 40546U;
    tmp_msg_0.lat = 0.502978869096;
    tmp_msg_0.lon = 0.676111631031;
    tmp_msg_0.z = 0.0477140246651;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.speed = 0.825730010019;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.custom.assign("KARZGAXJSWETVFWELUGRNOQZTLAJLWXIQUGQAIFZDNPBSPCBUXDGEEPJKIPBAMECLOXQUZJMOAGSVCIMRPHUZLNRKPXVBYZFBIYKIAYQYOFBJTWCIJTISQTWZMHLMVLFG");
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeadingRate tmp_msg_1;
    tmp_msg_1.value = 0.478787767316;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.143399802812);
    msg.setSource(20766U);
    msg.setSourceEntity(60U);
    msg.setDestination(27709U);
    msg.setDestinationEntity(105U);
    msg.maneuver_id.assign("YTMVXWBYXUVTNAWUJAZYXUL");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.47589519931;
    tmp_msg_0.lon = 0.701050971961;
    tmp_msg_0.z = 0.0404604767502;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.radius = 0.956491669386;
    tmp_msg_0.duration = 63921U;
    tmp_msg_0.speed = 0.164206421426;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.custom.assign("RPZCLAJKRXFVQXBELNBBCOZCJYIRDSNLGFCIMCUTRJAERWHZQ");
    msg.data.set(tmp_msg_0);
    IMC::TrexObservation tmp_msg_1;
    tmp_msg_1.timeline.assign("MZHQGTDFPGTNQNSYQKBIFTNDUOKFFENPCJZREUZUFOVRYGZBNSDWGJIGJAKDYIEAMJACJPIBCDYCSSVSYUMCXQSUARTRXSYLJPVWLMRMVJKIRPPGIUBDZLIAEFNJWJEAIQALRFWXDWXKJUOWHHTGRRTEMMHXPWBWPZKNBBCOPASEHOYBULHXHZXCTVFKGVFKQYLVNAQRQOSLKED");
    tmp_msg_1.predicate.assign("EZSMSGWVCTOIMGWCGJZKKYQQTPUEYIDPLIAVGCIQPPAJSYWJJNXREBWZFHKDUIEFLBBOLURVRCYNUSIRQZQMVBPKVHUGXWTTTBIIOVMQLFDKWOHFZCOXFMYHMORYJTMUNWVXWRJSEHQPEFJKNNSQXBOKKTAILVEATKEMRUJSLPHHNCWZFBYYSZODLSACGQYOXDNBRPXUTVPZRZF");
    tmp_msg_1.attributes.assign("XUABPOJDMYRBZTRZSCJBHJKVWGGAONHWHMVLCOHVRTQSLPLCGTXTNJDKNMNHBINFJDORKFRWUGHOMECSUKKOIFLXNJSCWQQCFABSMDYGIDXJSENUVTFP");
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.430814303403);
    msg.setSource(13215U);
    msg.setSourceEntity(167U);
    msg.setDestination(61571U);
    msg.setDestinationEntity(110U);
    msg.maneuver_id.assign("NUAIHAIISEZMUSPVAZEIYPUQRRRQOOBQFVGGJSLAYXYOIAMTCFMFAPBNXASHPLCUWDNIJASPVFBBSKDDYYTNZYGILKMWWJZWKDJYGBWPEKZXQBUHXJCEKXVJEITWHTWULFNUNNZHRVRQUGLXAONQDKDFGLZRIKMTJOXEHCVUMMNCQFOJQBFTCBPELOWEVIDLDEYPZ");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 8041U;
    tmp_msg_0.lat = 0.133825100488;
    tmp_msg_0.lon = 0.907941202926;
    tmp_msg_0.z = 0.0860020902416;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.pitch = 0.217462023657;
    tmp_msg_0.amplitude = 0.596055065516;
    tmp_msg_0.duration = 53842U;
    tmp_msg_0.speed = 0.227138721552;
    tmp_msg_0.speed_units = 228U;
    tmp_msg_0.radius = 0.758241333757;
    tmp_msg_0.direction = 130U;
    tmp_msg_0.custom.assign("OFVTISBAVCSEKAVFSECOPXJGCKFVLNKBAPTBPRDPORNFTYZHSNIDMCUOWKNPCCWEKMHVWQKEJUZARPBIIEOFEXGYVEDKQQWDHYVUWGTTEGPSBNFWRHJDQSJD");
    msg.data.set(tmp_msg_0);
    IMC::Rpm tmp_msg_1;
    tmp_msg_1.value = 32068;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.212485937558);
    msg.setSource(53180U);
    msg.setSourceEntity(39U);
    msg.setDestination(50597U);
    msg.setDestinationEntity(172U);
    msg.source_man.assign("ARLZIOXYMHUBLVUGWDPIZJLNULKWBKPCWNZNSRRXKTVIIVSAIOLQQGBFYTNHCHLOISGQKMANSQHESCOGYRVBVUCCWNBYTRYKPJDRKAXMJNSRFVJOBJPXTMHULALGWNIMUDWVGOFAQLOEQQRZCXNFEGDIP");
    msg.dest_man.assign("IUHHECANCJDGBTHQEWSVYWWOYOIDTUXDZVXBRJDOKOGLMRPIQVKQCDZNFHLQUITKEXWZABZFXBMJXZEKHELXDZIQHPSWJZWPAAYNSKKHGGCBKKLVHQBQTNDUTNGGURNFXPVLVJXMXDTOJRNOJIBRFIUMYFOGHEFSPCYPEJCTBEZAFEAONCJGPGBNMSYWUCGWZLMQUVKSKYIOLIPRMMCTDXNRPIDAYTREQWR");
    msg.conditions.assign("CXKANBRPASWBOTZKMXEMJYWIMODNZBQGNNAFBWV");
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 5961U;
    tmp_msg_0.priority = 10;
    tmp_msg_0.x = -31705;
    tmp_msg_0.y = 6100;
    tmp_msg_0.z = -30649;
    tmp_msg_0.t = -9302;
    IMC::PlanGeneration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cmd = 200U;
    tmp_tmp_msg_0_0.op = 103U;
    tmp_tmp_msg_0_0.plan_id.assign("DQEYABWFNNSOPXHHJFVMVCEIKBTISAZGYKZXVRTQVOQNRHSPVHMKZHTTCAZWUIIZICJQYQPUYWEPZGAMZNWTJEMXVMNTNXTDXZREDDUUBRWLLGAQHQXFLAAAQENKGLRKKCFOLUOGMJODFDWXKPMZYMNPSCJBIJCWNOXBVRGSOHNTIWU");
    tmp_tmp_msg_0_0.params.assign("YETWHJNMDJVUKMPRWACVPSGYAKQDNFNZAUNWKJQAMPQDNS");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.0992768068751);
    msg.setSource(26865U);
    msg.setSourceEntity(90U);
    msg.setDestination(38091U);
    msg.setDestinationEntity(217U);
    msg.source_man.assign("ICBLCJDOHEDXNZHQRJFJJLXNIBUUVKLNAKVWMNBQHYOGOCSFLRVKUNPCOBTZ");
    msg.dest_man.assign("MDKSPYSGLJFIBIPORWAVRKLMZEYSXFQMHAPJWMRTENBCXQOKZTVXYCBURGFEHKCXPAGAKYJZJIQBHJCIWFNCRXHNOKKRGRBULRUZWFOFDVLMZBILTYEGNYOTTDGMTJGILVFEBHPKMO");
    msg.conditions.assign("TLDJAVKOJOWYUNYTLTFGKNGEFZEBMZJFIJUCWQSCCVIXOOGDUXHNYRTHZJQSIMERJURURAMOPGHQBFQBSAFPZBRRQTDAFJGRHUGDBFGYEERAWRXFAPFVYDHWPQTYMSBZEBSEPJKCBZKATTHJSNLNHKXZQUOIXNGHXDLNSPCI");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.639765560052;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.943807317788);
    msg.setSource(26285U);
    msg.setSourceEntity(223U);
    msg.setDestination(21550U);
    msg.setDestinationEntity(20U);
    msg.source_man.assign("RJJUCSYTWWA");
    msg.dest_man.assign("FMIOOQLABRYNONUXCAWWCDJSEXGAXESBAVAOTNWOFSCHKEGGLDECJGFOGGUFDZBZYTIPLKTDHNOKJNXAZGWPDQRSGQUMLEFYFJOAKYWSQMEYMXMINFRFJDXZFWJCXHPLUDKMZVLYELHRXMIVUPBBHRQCUDEMFSKRYWACWBVRCVITVEQOKDHLSCPSWPXYGZUPILJKSHYJ");
    msg.conditions.assign("HJZMNWHYZTODTOQRERCREAQFTPPKZDFPJEZVGLMWWBFSYAAYSEZSKCRWHGINQFCMXGUTFYODBVILKRXADXLJOIDQZMRAAKCTTCZUWRQQLKFHCXGUQUJQPMHAUONIDOZSESOUKTZSGKNEHLNPFASXHWYNBFULVYBWIRXEAWMCWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.173694380774);
    msg.setSource(38918U);
    msg.setSourceEntity(75U);
    msg.setDestination(24143U);
    msg.setDestinationEntity(182U);
    msg.command = 182U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MUVNISUZQVGBAXREOEYRNCAJAYDVKMCPCQDPHWQDDXFHADNOWNEIRTXRBLZYBCJULSEDLSQZRK");
    tmp_msg_0.description.assign("PDGRHCRRJTJEBMQPOQXXZFZT");
    tmp_msg_0.vnamespace.assign("EDAWIVZTHVOGRVDZDAOOUCPOQEUQCOG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IIFWUXDUHYUFQQBDNFJWGYXNEODUSNUOFISQCOJPLSYMRQJGRZCCVLVRIDUXROMFTJGAWXZWPXWKOVKIIMTQGPEZBBIREBJMGY");
    tmp_tmp_msg_0_0.value.assign("XDSZVQCAPPEIGSEEMGUYNRKAESVQMQOWTGYKDFADCJAPADNKXZSHQDVRLLLPMWOIWUTJHCTQNCZMMUHKBJSBFTDXCSXROC");
    tmp_tmp_msg_0_0.type = 109U;
    tmp_tmp_msg_0_0.access = 71U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TECDYSVWJMWSPO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("KKMTEONIBMVLUEIRYPCDWTTOKRMVNQYSXGVYSWAERWRGRTKLMFAUOJLII");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 23044U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.842883802131;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.87715739517;
    tmp_tmp_tmp_msg_0_1_0.z = 0.460072693338;
    tmp_tmp_tmp_msg_0_1_0.z_units = 160U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.4858245575;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 150U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CQPSVDKXTVLIFTFQPWOFXSEZKJATRGXVXKLMYRWSEDRODPSYJGCLORRWGQJVRAFKMYHCHINOMBUKNIAXATCSCZZETLSHGVJDGCFTDHIFBYPQHSBPWTUTNUYEORWBLNMXBEWLUIVYTXBHXQFZJCIYIJDYMJOSALXGNVNABWUOROWGPSBXRJFQPKDMENLMVNYUZQPHLGUUIERNGAKMPECITHGWFQZALBEEJDUIKBKZMJADOYFCMCHVNHUSVAZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EmergencyControlState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.state = 103U;
    tmp_tmp_tmp_msg_0_1_1.plan_id.assign("IYKGJAGNFZGURXSLCBCLBOWFFGLPKHMSQQRYPEUNSUSTANUPMIWLOBPLFDIHKOJVREUAIZRDLXUVQHEOYEPUAWGTBYADDZIGZCCWHPKBXHDVSPKMOCJWCNJRMQTFSVYKTVIQARPHGDOMNUQTABFOMZNJYEXJHCOXBXPQKEZFVNCDESROZNVSQWMSDIJFNJBHWHZHARMWKUMPTKLEGDY");
    tmp_tmp_tmp_msg_0_1_1.comm_level = 42U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::GetParametersXml tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.919752454836);
    msg.setSource(19769U);
    msg.setSourceEntity(171U);
    msg.setDestination(19895U);
    msg.setDestinationEntity(137U);
    msg.command = 224U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HNMEJFRWZGKHSAEP");
    tmp_msg_0.description.assign("OJJNNPLEBHEUDUCFNPORJSNXECHMCJATVLHANIJWVWUMYOTBULQLXRSFZTVHURDGOGCCEALQSXCJTHRDPMYIJRIVXBVYS");
    tmp_msg_0.vnamespace.assign("PYULVTQDOEWYCVXJMZXJRGVWCUHFNZTCIMRSSRJHZJVKAXXMFEHAKEQPQFDWSOHTDGDWAUOZKILXFROYLGFRZJUERWBITNDBLEMBCPBDX");
    tmp_msg_0.start_man_id.assign("AINNDUDHQRPHUQQXOCVXRWPQNXEOPQFUCYXMJBXKJEOVCFDWKGTXHQXPANESMZTYOLTVNBZUIJNGGNOLCGYPRABUVZFFIMKRHGIPYIELVHUPEPKIHBELODWDCB");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("BWTDPGHNEPSZTBPGWOKEMVXQCYLYHCAIFSYJEOLDOIOGHUANHXBUZROIZHDMMXRXYQQVJQTUUEKMKXMSIYKHUTZEWCIJGQBCTDRJVCDBEBGGKQFTQCYLJVNDW");
    tmp_tmp_msg_0_0.dest_man.assign("MHSCDAXOLZPYT");
    tmp_tmp_msg_0_0.conditions.assign("VWFHZYIDNEMZXFUBVSXHEIDQFYUTTJIKWUHFTVXUWOIPIDAETVOLPRZYZSKBWAWHSLNRLQMMJTLYUJNMDRCFOIYZSQNEZZQPJYTQXGFSRQUJIXCAVBXLLZLEASCFQUDSOGPCWVMKRPJNYYKV");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.779563619338);
    msg.setSource(64434U);
    msg.setSourceEntity(195U);
    msg.setDestination(30574U);
    msg.setDestinationEntity(19U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CXIJBTVAYYEREXNOJZWZEBVUVOVEYEGHMEPTBAKSWGHYLZVHOGRUUXOWQJAEUIKAOGNHADCLLKXSCETFERSGGPDDAQCHZIKLIKPGVSHPRNZTRBYVLSKSYINQMOGWHFRJZQVMJTHXQXXCCDNTUDKMMMYCQFNCDAJSXUXN");
    tmp_msg_0.description.assign("WYIHNEYWZDWQSMBQWZUJGAASQJVCVYTKXKPFFEECGCLGNGDXCBAVKILRTSYOMLIMEMLBBWJIUPXURDTPGMLZDTRAPJDEGND");
    tmp_msg_0.vnamespace.assign("FNXGQKITCLFNMFLIJGUBXJPSOSCDPVYHZEKKCGMQCHLNDIWOAXNRVV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ECLYQSRUQFLEFXZATSDITFRISBTLLWWIZWLTZRYXDDGFRGGBYTBCPXPKHJVWFJHJMGDLOZALNZUCSDQBJMBGERMVTUKBOCXKVWQCONUQUAMGOSDNPDVWWMHZYNJFCEINBCKJBFFZPREVSOYGNUYEPHSAYAZRTWRTNCBKDAOPVUJMHLGQAEAOMJEIDW");
    tmp_tmp_msg_0_0.value.assign("UOLBRONWUJLOHXPVTPTFWVTLVQKDXRQCOCJBPPGWDCIYGEYSERRTQNXYSKKNPEKZFRRSSENSZRXSSMWAYBXKGSLHEKHNLLAYINYDMCURAGKETZFYKJNHBUUOUJNOIETQMOGVZQFSJNGGRQQPTJIIMPDJOFHUCKGPCWJCEDBUOWFLTQKBXZ");
    tmp_tmp_msg_0_0.type = 24U;
    tmp_tmp_msg_0_0.access = 20U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IEAENPBRKDJNWSWZDJHXHABRBEEJM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("XNYIQUFMVBRRFKZCJSUFARUGLKGCIMQEBCXOZPVNTTCSEQLTWBYOKMXUUSHDSIZZNVQYRKFNVJIXSATNZDKXCUBDLSWODMHAFERYIXEJWXNVYVLRWDDUOJJCJKFKOHPQLWWLYABADQXLYZOPX");
    IMC::Alignment tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 19292U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0163507058099;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.682374081606;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.774489286159;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 96U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("PAQSZPWQMBQSLSATIBTMGTMONUHCOGBVEOCYSVWEUNPRZMQLFRVWZVUKXHQAQHGJWJHRYECNIXOFKIVEDVFOREJVTNFFBYNHLAJADUHPGYJHNYAJTNDAPEZIDWQCGNWOKYYJCSWODZUZEGXCUYIFFOFXPNGTSXEPMXTQKRUIAFDRXHUJDMBDHBCPCHVXRLKUPC");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Depth tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.value = 0.607195425041;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanStatistics tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.plan_id.assign("VKQRKSQHRYMDRTADLRFXUTFOZQFPBQUKRETUPNGULVMRKOJBMWVWXZIJJIHTEESUAUHPSYMMLQEMFNKPNMRVDHUFNIWXAXNZABWPDWVTIYGVIFZFWDQCFLXGOKXM");
    tmp_tmp_msg_0_2.type = 113U;
    tmp_tmp_msg_0_2.properties = 144U;
    tmp_tmp_msg_0_2.durations.assign("EYSTREZLGJTAEZCSMHBVLLCWOXKAHXRGBJLHNGEMXTTIAIJVFCDCDSDVSUNONEDDZPHVBMWVIEOZFEYWFALNVHZFAKVAPNCSYGTUTJQSIPQQLJXIOHPVIUZFAMKSPYNWHEKUJNKWBQRXSBRPCROBXKWPBIPCHUPIFXLOGBU");
    tmp_tmp_msg_0_2.distances.assign("HMXQGIBPUDGWAZYSJIHTVEBEOHUVNSBGFHPUIEPZLNLCPZEDIYIUCLVZWTOKMMECJZRPPNUQTWTDOMWQTRQNXDHAXOTJEOHCGJIJVYCIJSKATAIFJDKPKLAMROTUZWCWJRCRRVGFSMVXLLSVVFWANKFZJSWVEPDBZMMXUFW");
    tmp_tmp_msg_0_2.actions.assign("ZATHBPADYAEXQRRWIJIYAIJVNZRPKQCPGXNIFUHKTWXWZVRTNXTYIVNAOYVKQDKRGZIEBOUQLSSLMIGBMUKJPYIPXOOPOMQKYNFAZJNFTBFZLPKYEVACCNDDRZXFECZPFJLGIGNJUCVQBWEBOHXDKEVQHYFFCZXAVGMWAOIBDKWDHHSPCHWYOFHXYBNNCLQCSEHSOJULURELMTMUSJMMGKEDLJTLTMEZDQTFOSGBSH");
    tmp_tmp_msg_0_2.fuel.assign("KZTPUARCSVZWGGRVMOSRPSWGMJGEKYDBZMYVCAINXDXUJBNAZNLQADNMVFAZKRHMLYOYXTQQOEEWISIHPFGQIAQWGPTJGKESYCLZBQNSRHAYUVWBQRNBDMUBSNDXFKTFVCXPPCVBPJWBXESKKBLFZLAIFVMWFJXZDYAQZDRDEUTHMLUUFWDAPUCY");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.420710180461);
    msg.setSource(21272U);
    msg.setSourceEntity(117U);
    msg.setDestination(28302U);
    msg.setDestinationEntity(152U);
    msg.state = 158U;
    msg.plan_id.assign("SJFEKMNDGTNICLLWIFJSLBESLOBVRMHZNNAFWQJCIYEGQRDODCXTPCXCKNMXITKFUPWPPBTEJRDNZFRKQWQEOBHUKIRZHSLQFCRPOYVYEKMBNRWAMRUXIBVVTTNZDCZVVZMDESZBLAHIIOYHOXATVYYPQPOQGUQAHGTJXLXFRYCUCNUUWAVVBEAZHQTWAOKAEKSFHKXKJTYMVLJQDNEMGOBPUMUUGGDRPDXIZSD");
    msg.comm_level = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.641020798751);
    msg.setSource(42961U);
    msg.setSourceEntity(177U);
    msg.setDestination(32219U);
    msg.setDestinationEntity(120U);
    msg.state = 88U;
    msg.plan_id.assign("NUDEDIKJDECPGAGFMIIUGLET");
    msg.comm_level = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.59773917842);
    msg.setSource(41619U);
    msg.setSourceEntity(150U);
    msg.setDestination(28944U);
    msg.setDestinationEntity(25U);
    msg.state = 86U;
    msg.plan_id.assign("WACXZHJGHONLTWYIQWNDUKDJTJGGWOPFREBORRQZVMIDEILMTWVENRGTSLYQREAUKDCXJEQXBHXVPPQWJUGMBCBSXEBGSNWYSAOTAOMVXFMJLNGSHMSYIYUPXKCBBICYNLBYEHKESTIFCPFXJNRRQCFIMIMPZRDTLLRALVSAKHOHQCOHDZGWFEKJVGMYJNUSAOQDOARCZKAVDFZAPLTQM");
    msg.comm_level = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.090801223419);
    msg.setSource(38228U);
    msg.setSourceEntity(106U);
    msg.setDestination(6099U);
    msg.setDestinationEntity(53U);
    msg.type = 195U;
    msg.op = 241U;
    msg.request_id = 49500U;
    msg.plan_id.assign("LXZEIMMINBUEUHIGWXGGOWQEVKQNZLIKLTYYPGKTCQOKMDI");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 54391U;
    tmp_msg_0.plan_size = 3832738450U;
    tmp_msg_0.change_time = 0.124997315942;
    tmp_msg_0.change_sid = 6853U;
    tmp_msg_0.change_sname.assign("VOQNOZUEMWKEVUHAVHBYJRIRQTDAEFTDBBGXLAWXWELTHCTORKIGXBQCIDXTGRLNKYAWOUUYKGIKYAHJVOPL");
    const char tmp_tmp_msg_0_0[] = {-121, -24, -100, 53, -40, -44, 114, -111, -101, 44, -33, 70, 67, -60, -123, 58, -78, -121, 125, 90, -126, -33, 126, 8, -80, -125, 95, 49, -88, -71, 113, 15, -126, -68, -8, -63, -115, -20, 110, 118, -61, -67, 47, 106, -67, 10, -93, -8, 7, 125, 6, 21, 61, -109, 59, 43, 49, -89, -23, 68, -94, 114, 122, 100, 116, -14, 3, 88, 125, 58, -40, -9, -82, -5, 15, -24, 55, -4, -125, -79};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VCZMDWOQXPSMIBPPAPBEZPKYBADAKWAOCEUWGSPVLWICCOSQUFZYOHKGJHEARAFPISNEJXKHLBYMLLZJXHGGXMJLXECRJYKLWRIHHRBAWIIJRTFDDFISQRDQFUVPVNHAGWTRWQGYRNIFYJCUKBNLHENTQVGQSHAYNIMWBXGMJMQQUNVJIQTZHDLTEOUTTSXNYKSDKPMOFOXNGVSZZZZWVFGATMJKZCPDOFBMOTRKYYVUUNODDBRVBCCFECT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.971452757646);
    msg.setSource(58651U);
    msg.setSourceEntity(126U);
    msg.setDestination(14775U);
    msg.setDestinationEntity(166U);
    msg.type = 169U;
    msg.op = 209U;
    msg.request_id = 39735U;
    msg.plan_id.assign("TOAFPCAAXPHNPNJVMFZOTFMRRIFHTVALOWMCLTOTZHNJZKKXONJYKQXLZBRIXSBSCOGGQLOYEVMIEIDWWGDTFEJUADLGAMBRVPMQEMRNKDCZBTVUL");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 132U;
    tmp_msg_0.entities.assign("QZTAFBZBLWMWDYIURWJRDYVQGFNYUVXUVSOFTJBHMNGKTUHVULNQABJLPXVIPAMAZYEHBYMAGPNSPMQUCYUPWASNZCEFAVWDECWKAQWNGOKLCDHTOXYNLOEPNJVRPBBQHWGDSRQJCEZRSXCZESICXCHIODRQOIZOUUYFSIOWEZGFMTTCRSTMHZMJUPTGBQABHODFBOWVMSSHCDJDYTKGKXNVXXYTXHVQLPD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YGJEXXSRJRONNMVBXNUOGGHVAPISWEEMGHUEZBQXKFXFEQEKKENWZAJFWCFMSMPQSLVDHTGSJATCKABFUAPPHDKPTLMIBLIMOWPVYKSDRRVZGMZACRXAUSJQNLGLYXBWWMNXQKRHVZOKBHRVYYCJEYDSNCQCBXOSJKBKFOTHHDITPLUENOVGJNDSFOPHVFCRWLRPZZTLLHDIAITTZGQUCYIYJADUUMNCDFWQUIQWTCOXGLATWUYOIQIJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.76858746854);
    msg.setSource(35244U);
    msg.setSourceEntity(217U);
    msg.setDestination(41558U);
    msg.setDestinationEntity(99U);
    msg.type = 210U;
    msg.op = 233U;
    msg.request_id = 7740U;
    msg.plan_id.assign("YLKMEBSENHMWBZLWUQDTBHHGSAMXYJWFLFNDVHHOOGEZYMTQITPQTWSFGEKHPFKDSSLJHACYEKJNLBJHMAXZUXIEKWPQRNARCUPRZEVLUYVCVEQP");
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.407127944029;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FTWABMQRWZRPLMLCTQRGWSSWGMBCCYZFMGVJZCRLLKEJGIMPPNYSPXMYQVOIFEQDNSQBHPARGMWXHIVDVVNIEIMVDZPEUOYNUUZNTNROIBFQKIDGAXEEFMU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.137435460923);
    msg.setSource(25199U);
    msg.setSourceEntity(186U);
    msg.setDestination(59287U);
    msg.setDestinationEntity(150U);
    msg.plan_count = 39325U;
    msg.plan_size = 562973737U;
    msg.change_time = 0.902443867811;
    msg.change_sid = 55306U;
    msg.change_sname.assign("JQPYEMVTCYLUJSEUJUQDGBCOWFXOYLZNTQGPCCZVKZGEXGLCOOCHFRZSVYUTQQBSWSRJCJYDJWKRQVBHZMOWUGIHTAOJIKHJYDLXSWUFXDOKVPHWKAABXNDRHBKHXIISAWXFNSH");
    const char tmp_msg_0[] = {-85, -30, -71, 14, -115, -52, 30, 66, 16, -3, 125, 114, -34, -96, -79, 108, -13, -50, -95, -65, 49, 4, 24, 73, -32, -31, 69, -28, -115, -71, 69, 85, 100, 67, 104, -116, -11, -71, -48, 0, 79, -88, 34, 69, -3, -73, -15, 99, 23, 102, -93, 86, -22, 126, 25, 88, -11, 20, 4, -124, 44, 41, 91, -65, -60, 37, -17, 104, -124, 122, 58, -74, -43, 68, 37, 78, -126, 117, 106, -32, -2, -68, 97, -36, -99, -15, 112, 115, 38, -119, -29, -20, -6, -99, 120, -63, 101, 41, 4, 59, 15, -59, 103, 81, 25, 9, 123, 73, -33, -80, 117, 58, 106, -50, 103, -119, -12, -31, 83, 102, -119, -66, -33, -45, -38, 24, 101, 36, -38, -34, 6, -116, -119, -34, -28, -90, 44, -26, 60, -50, 122, -127, -46, -92, 80, 24, -104, -75, -43, 115, -56, -23, 125, -82, -40, 36, -12, 19, 24, -108, -123, -52, -8, -38, 98, -27, 3, -75, 97, -70, -43, 107, -81, -70, 40, -16};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XRXLWAOQQIMFMUNFNZIBRMOSSUOCVAZLVMDXMMOJJDGWWCIBECVKXYTCOOFAHRLKVKNHJLDUHIHLRNBELYWSLACWGDAMIGFBRHQZBIZEELNHNXNRSMPPLFCCZXACZSJQURWVADGKVTGWCTXUSJTJDVTADRYBYFFPHJ");
    tmp_msg_1.plan_size = 30273U;
    tmp_msg_1.change_time = 0.131232134379;
    tmp_msg_1.change_sid = 17643U;
    tmp_msg_1.change_sname.assign("USIFJTQPXCLJZRHWOIEW");
    const char tmp_tmp_msg_1_0[] = {78, 120, 61, 116, 93, 7, -35, 35, 3, -80, 13, 15, 40, -63, 66, -120, -102, 115, -102, 76, 98, -101, 108, -46, -77, 68, 73, 119, -36, 65, -47, -104, -69, 119, 40, -34, 11, -31, -70, 96, 65, -116, 1, -30, -47, -125, 10, -128, -90, 113, 110, 57, -9, 58, -89, 101, -21, -44, -37, -2, 124, -121, 89, 115, 35, -12, 42, 66, -85, 48, 66, 114, 124, 39, 38, -109, 34, 6, -48, -22, -25, 42, -105, -35, -84, 32, 114, -76, 94, -128, -7, 80, -7, 100, -10, 45, -101, 70, 126, -9, 55, -102, -40, 55, -111, 95, 52, -48, -14, 77, 38, 75, -2, -44, -58, -104, 47, -122, 15, -64, 29, 12, -74, 71, 89, -127, 46, 61, -32, 19, -97, -85, 67, 45, -30, -12, -42, -123, -83, -14, 14, -18, -10, 49, 62, -100, -3, -94, -61, 95, -7, -72, -124, -112, -58, 7, -82, 119, 102, -59, -81, -107, 7, 10, 111, -90, -18, 41, -62, -24, -99, 120, -72, -47, -73, 28, -57, -64, 18, -76, -47, -43, -57, 91, 39, -93, 84, -100, -34, 13, -35, -17, -106, 123, -94, -31, -45, -76, 106, 84, 0, -44, -50, 41, -107, -62, 27, -99, 54, -98, 105, -15, 89};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.685054079304);
    msg.setSource(49171U);
    msg.setSourceEntity(174U);
    msg.setDestination(51239U);
    msg.setDestinationEntity(186U);
    msg.plan_count = 3009U;
    msg.plan_size = 694674807U;
    msg.change_time = 0.16666120318;
    msg.change_sid = 14713U;
    msg.change_sname.assign("TYEDZSPWSWMWTRCLOYKLOMAFIHUROXQVQGYLJBHQKFJTMRIKCTVIJIMZXUJNAILVSCHYUWGVLCXELATFSDBPERTXPJEVNNOXBLFLMZGHXRPMASPUCHWXTEJQGBOZSRLWKMIFQADGZRGZNRPHOGSNZXKFPJWVSDPCVJEDZFOMEJDEQDIBTNUFHQXAAPOKJ");
    const char tmp_msg_0[] = {-119, -117, 67, -99, -70, -120, 21, 11, -18, 34, 42};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OCPUYZVJHOHPLSGDDNPEAKRDIWXWJGHYFXRLUMTZINSJSIZXWXMBAWQYBUCRSAAIRWDMDZFVWNNRMEOSBYUEJEATC");
    tmp_msg_1.plan_size = 25193U;
    tmp_msg_1.change_time = 0.604883266169;
    tmp_msg_1.change_sid = 12657U;
    tmp_msg_1.change_sname.assign("DJHEJVZHBVEPPSUIYKDMGDGUDJRXOESNUEALQOZSLCBTRRNROMVCNPPKARYXEUYLZUXKSWWXQMLYXXMWZXQHLGPFCCNWATJCAVMMQNHFBY");
    const char tmp_tmp_msg_1_0[] = {119, 49, -42, 83, 67, -91, -17, 110, -116, -31, -76, -35, -1, -113, 60, 116, -88, -13, -5, 1, 16, 8, -127, 21, -41, -115, -13, -84, 29, 100, 119, 5, -29, -109, -96, -102, 116, -38, 100, -97, 86, 41, 69, -93, -99, 10, -125, 80, 39, 22, -2, -103, -15, -1, 69, 65, 83, 58, 115, -119, 76, -101, 59, 71, -4, -72, 47, 78, 77, 42, 27, -44, 124, 118, 79, 82, -88, -5, 94, 108, 91, -20, 67, -114, -2, 38, 97, -122, 93, 29, 56, -54, 58, 21, 75, 76, 74, -15, 36, -68, 99, 102, 93, 47, 50, 68, 98, -31, 52, -87, -56, 81, -127, -28, -99, -17, 44, -4, -49, 100, 101, 64, 110, 99, -109, 105, -30, -37, -111, 28, -92, 59, -85, -106, -49, 42, -29, 93, 95, 101, 50, -100, 54, 27, -103, 89, -92, -41, -2, 57, 79, 54, -80, 7, -109, 5, 13, 30, 31, 77, 46, 17, -16, -67, 3, -99, 100, 34, -40, 109, -66, -105, 55, 68, 99, 83, -1, 68, 100, 98, -49, -99, 83, -37, 81};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.451931035794);
    msg.setSource(53565U);
    msg.setSourceEntity(52U);
    msg.setDestination(44994U);
    msg.setDestinationEntity(134U);
    msg.plan_count = 17977U;
    msg.plan_size = 2138642195U;
    msg.change_time = 0.122126743222;
    msg.change_sid = 24919U;
    msg.change_sname.assign("NTJSRTEYUABJQFYJOGLVSFTPKASDJWNGBOKTONEZHSEVHUPEWDDGZMTYTHQMHIUXVEKPFQSGFRUUWRPQVCSGTCFZYCJWSOWBYXMZCQHONIKIAKDPQMWNEUNCMLJDGJGBJXRKWQQNCSSWPRGVNBXGYEYZBHHZAKLYAYZHDKOIQAKIBIMFBLHPEDUVBVRILXIMNOTJPO");
    const char tmp_msg_0[] = {32, 84, 84, 118, -118, 5, -68, -107, 115, -86, 74, 8, -38, 14, 87, 115, -54, -78, 2, 3, 84, -38, -63, -126, -101, 83, -72, 8, -17, 24, 15, 40, -22, -76, 1, -101, 36, 90, -116, 69, 8, 93, -112, 23, 60, 113, 21, 91, -30, -12, -12, 1, -57, -93, -75, -24, 56, 103, -45, -23, 82, -92, -111, 17, 124, 105, -104, -109, -36, 56, 104, -66, 82, -115, -58, 17, 55, 122, -67, -6, -128, -35, 112, 35, -77, 79, -121, 118, 83, -9, -30, -62, 118, -30, 8, 46, -115, 75, 56, -92, 17, -10, -112, -10, 92, -116, 32, -38, 34, -122, 15, -127, -111, 99, -47, -101, -17, 18, 25, 62, -95, 56, -113, 114, -34, -27, 72, 118, -82, 75, 7, -18, 67, 76, -119, -87, 97, 20, 107, 118, -35, 36, -100, 73, -113, 119, -108, -12, -97, -103, -74, -46, 77, -125, 94, 9, -61, -43, -30, -96};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("HTPJXMGTWXLLKFGVBIYQHRHHIRZZDELMLDXVSTSTENXBMBNOHCOLUTRANSAPUOGPBSMWRPLXDYLLYITOFFZRNWNTLCCNINHHZKBEEQJQJGROJWIYXAYQQYKDBEOUVCICCBEHGOPKGUEOMTJYXTUASCWSNXYKYRNVZQATCNKMMPDFSAEKFFJUJWGPKWFAFLPADMFIPDKHZJSBVR");
    tmp_msg_1.plan_size = 32469U;
    tmp_msg_1.change_time = 0.447097440953;
    tmp_msg_1.change_sid = 4740U;
    tmp_msg_1.change_sname.assign("TCAPRLAFWISRALXVFCHHRYUVPG");
    const char tmp_tmp_msg_1_0[] = {-97, 12, 65, -41, 26, -72, -5, -128, -54, -64, -119, 11, 64, 82, -49, -114, 97, 35, -25, -62, 79, -93, -9, -102, -109, 109, 117, -16, -62, 82, -26, 92, 119, 111, 41, -18, 37, -61, -34, -114, -30, -79, -76, 101, -86, -2, -126, -6, 69, 118, -69, 70, -96, 104, 114, -54, -50, 7, -80, 57, -51, 71, 117, 89, -42, -117, 105, 55, 16, -87, 66, -65, -78, -109, 32};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.692235049762);
    msg.setSource(28974U);
    msg.setSourceEntity(123U);
    msg.setDestination(2946U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("OKCZGFJXERVNXDUQQBGSPUAMYWLZH");
    msg.plan_size = 17321U;
    msg.change_time = 0.533343129195;
    msg.change_sid = 34864U;
    msg.change_sname.assign("QEPRSNXQKRCYEOUZIQUNFSMWHHFQYWSOOMKFNGSTROZXWDBFPPMUTVWPHQIZZOWDCIGKTZBAUHUJVJWVYIEBJLPJKXOMAJHNICOMXDPCGLJNUYSRLQRLBKODTZUWTNJCATTCLFRYZVWDNLUVJJFMAEESTA");
    const char tmp_msg_0[] = {73, -4, -57, 3, -78, 63, 82, 54, -90, 8, 48, 15, -52, -14, 11, -4, 57, 8, -34, -90, -81, 116, -20, -62, 34, 22, -67, -86, -24, -48, 125, 120, -39, 15, -94, 36, 35, 18, 100, 82, -16, -45, 27, 92, 104, 42, -16, 13, -38, 118, 4, 29, 115, 104, -53, 107, 75, -65, -19, 85, -38, -37, 64, -64, 60, 27, -48, -16, -37, 126, -15, -120, 113, 44, -78, 19, -106, -35, -94, 11, 87, 59, 72, 18, 58, 27, 37, 21, 101, -123, -84, 123, 61, 6, -111, 13, -44, -30, -80, 126, 72, -3, 71, 54, 15, -41, -73, -113, 38, -79, -64, 72, 11, -116, -24, 11, -108, -63, -84};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.422784741119);
    msg.setSource(37219U);
    msg.setSourceEntity(95U);
    msg.setDestination(62357U);
    msg.setDestinationEntity(56U);
    msg.plan_id.assign("MVZUCBYETROHPCBJHNWYNSGRSUXZXTPKOOZZGNOKOIGEVYZFMOVXJNFWPECXTZJXSROSFSJGRUICJPMLIQPBZTJHDXSAHJBKVEAALGDCJNIAHRWMSYHYVVQUNOMTLHWSWFOQPEAWTTGLAIFATEGSXLUAEDKEICDLKJDRFGYBMXZZIPGPEUGKEQDQRWBKTYFCLWCVNMCUDDDIIMUUIVWKVLYMJKQHWOYCFBLXQQBNVAKXUAZNRHYTPHFR");
    msg.plan_size = 2482U;
    msg.change_time = 0.922724880116;
    msg.change_sid = 50061U;
    msg.change_sname.assign("KULYXGBTVOXHPISBKVNHYGOPDJVTWLDVQSCHUVSJJBCRJBRVNE");
    const char tmp_msg_0[] = {-12, -66, 31, 101, -116, 30, 119, 75, 117, -62, -64, 90, -46, 120, -112, -78, -77, 35, 115, 78, 4, 6, 70, -13, -2, -107, 34, -30, -31, 78, 16, 13, -107, 47, 48, 98, 84, -117, 118, -35, -2, -113, 18, -126, -109, 38, -91, -17, -125, 117, -38, -99, -96, -28, -38, -13, 40, 7, 21, -64, -111, -12, 30, -21, 4, -4, -124, 113};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.185610564449);
    msg.setSource(7869U);
    msg.setSourceEntity(150U);
    msg.setDestination(35155U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("DIWTFQRVUAHGKNOBNIPVLINIOOYZXMOPCQTDEAJU");
    msg.plan_size = 37262U;
    msg.change_time = 0.0122400576089;
    msg.change_sid = 43641U;
    msg.change_sname.assign("LUVFXJNNMUIAKSICJEDUYOKQ");
    const char tmp_msg_0[] = {19, 44, 57, -121, 37, -77, -30, -51, -103, 35, -14, -109, -42, -18, -27, 33, -77, -26, 41, -91, -58, 122, -88, 64, -108, -32, 78, 97, -4, -48, 85, -23, 113, -91, 79, -22, 23, 88, -100, -94, 72, -80, -107, -18, 69, 76, -75, -12, 39, -94, 30, 49, -9, 42, 122, -42, -96, 96, 75, 102, -39, 106, 11, -109, 108, 46, -115, 51, 109, -44, -15, 65, 29, -28, 32, 41, -87, -27, 80, -111, -109, -33, -118, 19, -113, -12, 40, 80, 93, -54, -126, 107, 34, 107, 91, 29, -68, -80, 96, -50, -67, 118, -6, -52, -32, -22, 19, -46, 106, 81, -33, -119, 43, 15, -106, 78, -56, -87, 14, -12, 38, 16, 100, -41, 0, 15, 43, -50, -60, 106, 4, 31, -40, -43, -63, -101, -98, -95, 55, -29, 103, -55, -127, -36, -128, -17, 85, 57, -115, -84, -47, 50, 10, -70, 7, -121, 113, -87, 124, -58, -99, 124, 27, -5, -99, -110, 105, -76, -104, -6, -90, 14, 97, 88, -81, 9, -26, -63, 110, 104, 26, 74, 10, -20, 56, -36, -104, 95, 84, 102, -122, -43, -120, 105, 56, 106, 50, 23, 94, -22, -60, 49, -67, 123, -54, -114, 15, -125, 60, -114, -126, 17, 100, -25, -98, 102, -5, 22, 65, -116, 100};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.751333707195);
    msg.setSource(63406U);
    msg.setSourceEntity(133U);
    msg.setDestination(9602U);
    msg.setDestinationEntity(125U);
    msg.type = 133U;
    msg.op = 179U;
    msg.request_id = 12694U;
    msg.plan_id.assign("ZNOSALXUZSLDLTFIHSVIHNSWAKPDPTHJWGRRDZYJUJFISFMNMREBJMQDTXNCSYHVHPIURORSWVKVZQYCKCJVVLGEYIHBVEJKPMKQOFNGGMLLGUTYMORFTKPCKMZYXOSPYXELJAFZIVZRXZQMVAWBYXCFAUBAHWWWECGEUEBK");
    msg.flags = 1134U;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.882016134941;
    tmp_msg_0.bias_r = 0.52894291019;
    tmp_msg_0.cog = 0.26250847721;
    tmp_msg_0.cyaw = 0.298470973542;
    tmp_msg_0.lbl_rej_level = 0.801853117826;
    tmp_msg_0.gps_rej_level = 0.722115533093;
    tmp_msg_0.custom_x = 0.510063266872;
    tmp_msg_0.custom_y = 0.79989604572;
    tmp_msg_0.custom_z = 0.595377745205;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HFJLFWPOPKZQYTDSXYTQUAVFZCXIWNLQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.545001246428);
    msg.setSource(47428U);
    msg.setSourceEntity(197U);
    msg.setDestination(64664U);
    msg.setDestinationEntity(151U);
    msg.type = 75U;
    msg.op = 38U;
    msg.request_id = 21768U;
    msg.plan_id.assign("HGXDXRGWSUYZYFDBULLHQQBOJRBDIJEPIULPECBIOAQGQOXSDUZLFMMYXJKHKXNJPXIFVJQVLUNMTJILCMAWAHKKTLATWCXYFSSZREQADEVZKI");
    msg.flags = 46654U;
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AISEYYOOAXACNXNSTXLUIEPHQEOMKSZAYACPCRHSREJBIDGUNCVDMVRDTKNGEFLQLSRJQRIHSGQAVMKYNWOHYZCDMUZUUEVKZEURTDTPNUYWIIGURWHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.34111513271);
    msg.setSource(42303U);
    msg.setSourceEntity(189U);
    msg.setDestination(59236U);
    msg.setDestinationEntity(68U);
    msg.type = 79U;
    msg.op = 175U;
    msg.request_id = 18481U;
    msg.plan_id.assign("WNPZWSOUQFKUJOBZGBXIMDPWBEYKXGVHFRPWILOQMEBGLJBHVDZQQLOTQFAGTMSQFHSMUJCXNJYNPVRILYQGWDULZOOAJD");
    msg.flags = 62369U;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.857810991045;
    tmp_msg_0.lon = 0.54759932168;
    tmp_msg_0.height = 0.230302094916;
    tmp_msg_0.x = 0.756444398791;
    tmp_msg_0.y = 0.0600982686995;
    tmp_msg_0.z = 0.340741957801;
    tmp_msg_0.phi = 0.566919422048;
    tmp_msg_0.theta = 0.729894679086;
    tmp_msg_0.psi = 0.773488054602;
    tmp_msg_0.u = 0.418380091017;
    tmp_msg_0.v = 0.133143405014;
    tmp_msg_0.w = 0.181718033293;
    tmp_msg_0.vx = 0.93204995766;
    tmp_msg_0.vy = 0.323545413689;
    tmp_msg_0.vz = 0.0700883223618;
    tmp_msg_0.p = 0.711329101839;
    tmp_msg_0.q = 0.327225364474;
    tmp_msg_0.r = 0.446185160732;
    tmp_msg_0.depth = 0.194515311299;
    tmp_msg_0.alt = 0.936018012469;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IPVGKZBISQNTACOYOPCZDTGSZEXNCBJTDNLZVNWUWAUTXBZZMDUCLRIXJTGBCVLMMFCVNOYFVPVZHECAOHCJNKQLYIPRNEODJKLPPHDVORHKFYHBQRMSYRHDSFBOQXYUMMRLWCRDWZIUBGGYXVQKXQQFTLKUTFDOSGEEJXAIPSEPMKGIBESUOKTPDVJQERSHMKQGHAPMWXWGETHVAHQBZJTYZAYJEXCABDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.936128765354);
    msg.setSource(52321U);
    msg.setSourceEntity(141U);
    msg.setDestination(61491U);
    msg.setDestinationEntity(160U);
    msg.state = 185U;
    msg.plan_id.assign("DGLBTBCLAFYXGDKYFNGAOAMCSSBOLVNJHPFLEITJHXLGNJVVDYUVXZNDLFHKCCJNPTMXYXMOJMPJXWAKPSUILZBCQIXNPIHMRDHUOZLQFHNMPNWQEVVSFKGKQWMRJEVCZIZTPTAAIHFLROHEGFPATCXQRZHWSVIWGRZU");
    msg.plan_eta = 1395495803;
    msg.plan_progress = 0.178211523091;
    msg.man_id.assign("KVUWEMQKIYMPDIBTHPGLMZYSAAGUUMBUEPRDKAMYZGSCZDRJWVXTTAXNXLVWQKOPDMCDIEPUHXZJAOFULTRIBHNWBJYVISKHHFPJQGWZSKELAEVFFTJHGREWCQJSNCLLWXQVOBSUXRLQFSOZYMPFNBJDTBITNGZGEXUXIVVAYJBRWWPY");
    msg.man_type = 59910U;
    msg.man_eta = 2146066976;
    msg.last_outcome = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.0690582673411);
    msg.setSource(40559U);
    msg.setSourceEntity(168U);
    msg.setDestination(12658U);
    msg.setDestinationEntity(163U);
    msg.state = 76U;
    msg.plan_id.assign("KVCEYZNDNGJUYDWESKHOWTEVVCPACZXMYMPPLMUWDZOHYXIBNAETJCKWSUATOQINPPRVFFXXVDQLNLXMHPGXRHWMBWQXOXGCMBVQEOQWOHGRFJGXSLMRYEPIITBGOYZVNIGSHBPULZGVRRBOVFPZYRWDULLJTAVKAHRFNEBQJIIUFIKDBMMKYCCHUYODTAFYJCBSUKFILXITJFUNWCZJ");
    msg.plan_eta = -1672366882;
    msg.plan_progress = 0.700764173841;
    msg.man_id.assign("ZBPODLLXYDDONVLPPKJLIRPVBGXOULANGFFARRUZXQPKXBEAUSIEBDMSWZCUUAHDYBQIOQRTIKXMVMQSKKAWIGQLWPJVSZPKMKGOWYTFCHEDXLEBNAJKTRETTRHMDOQVFIFWJSXMZGYRHSELSEPZVOIWXYXAFIXMHNCBVYACTTCESGZQPOMNCHBNGZOUGJW");
    msg.man_type = 18267U;
    msg.man_eta = 850667554;
    msg.last_outcome = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.827807699444);
    msg.setSource(18457U);
    msg.setSourceEntity(178U);
    msg.setDestination(41767U);
    msg.setDestinationEntity(87U);
    msg.state = 210U;
    msg.plan_id.assign("MBPSLZIKXUNARWIPWMHQFRCPXUEAOUWLXTKZLOJJTPTAEHRVHGDKJYYLVPWWDAVZZSOVJKFCBXSBBQHEYF");
    msg.plan_eta = 1544228841;
    msg.plan_progress = 0.237407255212;
    msg.man_id.assign("YFCYMNZBUWYVISGYUDQORKPVXRKWLQKADEVSTCDDIWHTCPSIZLLRKZFLFECGONNKSVXEPFRJTCKTXHYVNHGLMZUJDFXWDTTUGMIJMJCQLTNVQOPWPMNLFNCHMHRUHRYQBJAAECOMCAEBTISJHEGFPABAOLMPEZBGQALGFWBJXFRAGSBRHPIDMJIOZQUWPGUXAZIQOIYHXU");
    msg.man_type = 28062U;
    msg.man_eta = -554743032;
    msg.last_outcome = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.285307430203);
    msg.setSource(21051U);
    msg.setSourceEntity(132U);
    msg.setDestination(24877U);
    msg.setDestinationEntity(245U);
    msg.name.assign("DZBRJQUNBKAPNYPVIMQPQIGKPECJUTFRMTEYSGCCTDETBFJYJJEVTWPIOCXUHHSEWNXMRTYRWXLZOHMMBCXMBDSDVGSFPSBWNMRCNBVMIWOFWODUNLBKHIWEXFYGXLLIEIULGFJAAXRJFYKOGCKPXGHYKWLCAJTJZGH");
    msg.value.assign("QURBRTRXXZUNIVOAKSUYNKHQSJYQHTIWNQJAIZEJUBTZFFKGLCYKCREMKPJYFNBQHGHSBZTILWFPJPMWMOLPCRSXALQPMQAIOKJZMTBNSHWCPOZHKWTLRVFFIDCMUEGOPVFYACQFSCAMSAPWNZQMIQXGDXXLDAHUHBMVGPOKNYOBPLSWUKUCJVOGJYXNLWTZKDZCNEBYVBHDROCEEMEDELRGH");
    msg.type = 209U;
    msg.access = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.793828972854);
    msg.setSource(22771U);
    msg.setSourceEntity(9U);
    msg.setDestination(20029U);
    msg.setDestinationEntity(170U);
    msg.name.assign("SPTNCOMDBNEUKHZFFZBODSNGDXAMXYJUPQVWNMSYRAHGKBCRWHAQAKGOHVIOWKTVAJOOTJQRZDCSEFEUHMGLAPITCCBEJYNLVGFKQVWDGKOMHEXLCSXMUKVWWQLTUVLTPNYLHIEAEXCONORIVDRFTLICZSZHJRQPERIREHQUKBSWKPBMLZIDRSMBZNABFLQBPPXYYCNGZVUYSWFUUXTAFYDIVFGFHKXWGUJXYGCM");
    msg.value.assign("UEFPFIUPRQUXYGBJMUKANKNRQVQCGHHDKSYNJIVDSUOLUWGLLHOEJOKFEKAEOWBZA");
    msg.type = 69U;
    msg.access = 162U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.477854330205);
    msg.setSource(27801U);
    msg.setSourceEntity(231U);
    msg.setDestination(14348U);
    msg.setDestinationEntity(12U);
    msg.name.assign("RVEHMDSGUXPGCHUKXOSAWRZWHBNAOZGMZPRRCVOYAICPTOLZWMHJAWQGNMVHIWVDVNCJKTIXDFYPNKCWGOKIPJBFSVSMQNLDTCGJQURASJDGVMLYHQRMUKPCUENIQBZLQWBRABLPOFLFEZYYALUIFGFEFDBIXTU");
    msg.value.assign("HAUQKZVMRWKXSKJJFSUDFYYWQFCSLUSIVEYXDQDBZTVQDHZHRFBGILDYBOZDXDXUELBTDCHGKAFTEOIGCYKNOVLZYRVBOKMAPBQVAUXNYAFHTARLEPWXXCHTZRIRLIEMAJHWXUQTCXHTMJUHNQGCPEKHZRPJMOOCEWLRIRNTMMGOFJMSPPTKWBMUCVJAUSDYNBNOGLBNWSMKVKZF");
    msg.type = 211U;
    msg.access = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.396165669131);
    msg.setSource(32066U);
    msg.setSourceEntity(151U);
    msg.setDestination(4476U);
    msg.setDestinationEntity(30U);
    msg.cmd = 54U;
    msg.op = 38U;
    msg.plan_id.assign("NWZTXAKVGENKHRXZOKUOMFCNPYQFDQISD");
    msg.params.assign("CGHISJSLKAYXRQWNJCVKJCPDSVRHDQGAFDZJBYTYBCMXRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.808668803947);
    msg.setSource(52307U);
    msg.setSourceEntity(238U);
    msg.setDestination(11424U);
    msg.setDestinationEntity(3U);
    msg.cmd = 128U;
    msg.op = 110U;
    msg.plan_id.assign("ULLWEAMNQWYDDTCUZSJEVBQKHWTPZFLARGFMSXKRPNOORILJPOPGAMJNVY");
    msg.params.assign("CIDSKMFJQPVZAVDHDOFPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.0649250533381);
    msg.setSource(24305U);
    msg.setSourceEntity(125U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(109U);
    msg.cmd = 59U;
    msg.op = 146U;
    msg.plan_id.assign("OJQEBJNSVRDCYO");
    msg.params.assign("GDYSXPBWYDYVRRTLUYYABZZESVORIUHINKSISNCDGJPSCGCJNABUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.207390584013);
    msg.setSource(60534U);
    msg.setSourceEntity(2U);
    msg.setDestination(28595U);
    msg.setDestinationEntity(192U);
    msg.group_name.assign("IHZLKHHWASLSRCZIINBXXIPJBIMIRQHJEHYKMSXMTFEUEUVILECFYLNXDBFLCDKJWCTJSZSAMHQOOSQCKYLPNGOJUANRNERPWWUJDXNWCPYSXDRIQFBLZUVQOJVFTKGBMGUXXYDESFWGAYKNTRTBODMVTVURQTAXKGCPBRRLFQMVWJZWAUPMBKZVQVBADFPNYCOJISGUOOYAPVTEQZMABYLHSTCFI");
    msg.op = 66U;
    msg.lat = 0.681493843983;
    msg.lon = 0.828504609562;
    msg.height = 0.424122832486;
    msg.x = 0.0133871238061;
    msg.y = 0.120619105026;
    msg.z = 0.0129989027459;
    msg.phi = 0.840531425275;
    msg.theta = 0.0939301694644;
    msg.psi = 0.258245479365;
    msg.vx = 0.478496130678;
    msg.vy = 0.88289071745;
    msg.vz = 0.828318329449;
    msg.p = 0.000942461307281;
    msg.q = 0.975388095414;
    msg.r = 0.31733417857;
    msg.svx = 0.0188882514799;
    msg.svy = 0.521106135372;
    msg.svz = 0.204094531952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.298485779443);
    msg.setSource(48040U);
    msg.setSourceEntity(89U);
    msg.setDestination(62785U);
    msg.setDestinationEntity(57U);
    msg.group_name.assign("NYWYEUMASOZDFNQQTWKEKBVKWMJPXSKKWFPYUIAHTFRYCYMIUOSXDHAEGPSMOSQZPPBVDTEWWIVVBFIAVGDUKVBQJNNTOMQXBVZGIUHGAFLTOMSQQOBCXDTRKFWOZDLVZLDTGOHRLTSNKPHMGIUGSPAAEXPUFQNYMZRDYBRLYYPSLRCMALJWEUJEHTKUXAELMRBXCLGBKPSTROGVICEZYOZRDJXFHIHCC");
    msg.op = 74U;
    msg.lat = 0.467368460161;
    msg.lon = 0.28835622077;
    msg.height = 0.706069099474;
    msg.x = 0.157924315988;
    msg.y = 0.274391538585;
    msg.z = 0.629529146718;
    msg.phi = 0.363528788006;
    msg.theta = 0.128884991721;
    msg.psi = 0.959883227566;
    msg.vx = 0.777974016376;
    msg.vy = 0.769441269313;
    msg.vz = 0.056239127968;
    msg.p = 0.872256785935;
    msg.q = 0.32543559329;
    msg.r = 0.547119031967;
    msg.svx = 0.705567707389;
    msg.svy = 0.510052018204;
    msg.svz = 0.235940216089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.217330442213);
    msg.setSource(25409U);
    msg.setSourceEntity(159U);
    msg.setDestination(25111U);
    msg.setDestinationEntity(6U);
    msg.group_name.assign("ALBCHTIBBKIDJREAZPOVMVLIICOFYIKIUTGYRXXFYZAQOHMSPNEUWEQFUSFWFMNSGVCPBVWODEVYENKAFJZBFZRRVNSSTXKITTZKADOJFIGARWJNECHXLEWQUHFAXUZLLTPQPOCGENGDDXXYPZMMGGWKHKMSCXUYPBIVUJQDNYWTTMQBHRODNVZ");
    msg.op = 4U;
    msg.lat = 0.902271942437;
    msg.lon = 0.255178301193;
    msg.height = 0.834954382207;
    msg.x = 0.821553631112;
    msg.y = 0.927935965526;
    msg.z = 0.0635294304801;
    msg.phi = 0.258558917976;
    msg.theta = 0.515913150228;
    msg.psi = 0.0570556157981;
    msg.vx = 0.645483950468;
    msg.vy = 0.646093733688;
    msg.vz = 0.561808104596;
    msg.p = 0.674943495532;
    msg.q = 0.00690691257009;
    msg.r = 0.860480969645;
    msg.svx = 0.917742946924;
    msg.svy = 0.923978215823;
    msg.svz = 0.131803379913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.517407104437);
    msg.setSource(48528U);
    msg.setSourceEntity(73U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("XEFDXBISSFPYCKJVNUDCEMXZQWSPYQTQIDSSYKGOOMNHBGLNYOKQREQWFIFATTJWHVHXVSRUHTQIQPYDYHIJPBVENGWNYKJZBNLCDBCFUKJXEGMIFSMIJUKCOZRWTTRWTAYUPVUJLAZXGSGEWZASIJOHUATLRUZQPJAWNYLB");
    msg.type = 178U;
    msg.properties = 135U;
    msg.durations.assign("OCTDMBUYVQOWPAIRASMHIQWDBGTKYTJNKPVZQMHRBQPUXGPAGBXILSUVJCMYYZLIHQUJXYVDQSHLDOZGKTDUCAGSRLZCCGIBDMFTNMGAUKNYXIZAYAPMMFOWWTFDWDJEBDIGHVAHROCFDWLUKLOVFZJKLWEVMNJBQLNHPCRPHKBJNJXTJEPYSYWXQEAESIYFOIHTUKRCEOUAZERWSXVKCUXZXELRPKSBGRPNZFEHFGNSCVN");
    msg.distances.assign("CDMTJCWUUQIOGLBEPNYXLBXVDMWHMCKUSHGUWJFLDJPTGBKTNHFUTPFDMKARJJFZDGTQSHRARTCMRWCMFBEGHWUYIADYORIJGQ");
    msg.actions.assign("ESVRPQNFYIBCXLSNMYMCPJVSXJCXWFFYTNUIHYKBTEZCBDERILDPIOOEJITFPICFZIVYDUDOIRHGPAUVOWHBZYVSBWMFRPZYWJKLITMBXQHCQOEPELGMJKGRUSKZCTHSJNTODQGMRKVUVPZBWIASQBNLABWPOOJTFNXAPNQTGTKYVOZANKBCLSVGAZJQZKMMAGQWHASELQXUSRMVHNJDLRWYOAAHJHX");
    msg.fuel.assign("DKTNZMKUZDAMTSXEFMGFMITPTRXYBUQPNWXTUGAHBXSPMCBFUOFIFWQECRQVYPUTPPZRRZNQUNXSUGTSQYXJGZABNKVZOPKLMYJBXULMAODYIQKLBCVUSOLOEVNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.397335686742);
    msg.setSource(22931U);
    msg.setSourceEntity(214U);
    msg.setDestination(64363U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("WKBRHRGPZKGTPJEXOHFIYHMIECTIZSWILGMRGUHWCYZYDSWVWFQECKNLCQVVVFGKSZLPMEOKZKAUBHWRMPDEGJAOQMVNLNQDXCBDPUHPGFXTFHSYLLRBBQCRCQOMJIJATXSNTUERIEHJZYCKDPAVBRWSSTDUEZPWNLPSGUIKDEAVYTHBKIJLRROMQSOPMXAAAXUBTGSCZJEVOMZXKNGNXFBOUCNJQYQLUDDTXVBHJYQWWFLIYXOAAFMNVTOF");
    msg.type = 236U;
    msg.properties = 185U;
    msg.durations.assign("AAWUYALYVNDZDHVJRWVRUUSEXROBCMXJJOLPJKNIGBQZMBGZYTPIVAJMYSZNIGXWKMLOOCWDQDPFSFVKBJSBUSOD");
    msg.distances.assign("YHHIQHSJJOM");
    msg.actions.assign("KLTWFIQKQTBKXRPCNBLKGFPYUMUOFZSJBBZPLGXZINWSBJBNLCPDEUVIYFRZLAWXLJFZSISAQRINKZNRGVVTOWSNDLUSFOPFCDOMABXTYNRAHMVOVGTWXKIBCRYAGBJGETDUVAVEPLHVIRDBHCQMCDGHLGXJFQIHDPRTQUHRYTUYEFUWQAUMDNPTPCOWCMOLXKEOSJERYICNWEKXDYW");
    msg.fuel.assign("LNGFKGQIDLZFWZODGMJACHPBOPFXQGSQXDNJHTVFPLBNIBQXXEAGRFOREOJASERRTMNUEHAQXUIMTCCOIFTCMYVNYYWSYWGRVSXATATSNICDQHESOGBURAURXMFUVZBVATVYJMFETUMYYUXCOLKEARBDNHDDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.178691291981);
    msg.setSource(7075U);
    msg.setSourceEntity(183U);
    msg.setDestination(52404U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("MAGAHEMSZTVMOJPBRHBOVRXRZRXDUBBMAHNCJLHZTDVTYLKER");
    msg.type = 142U;
    msg.properties = 155U;
    msg.durations.assign("ZCLWDNVAMWDFZMBGNPRYOSQGUQLABLSTFAERQJUVDPYNWRBTEMWHLXYRHYOTXHKPIOWNIZQUUPBHPANRFDLXVBQEDSIUVLOSCNBYKGCJXFEKMFLKCMAOXANDRCMHKKJYUIDWJMWVTNGRGKBEHZHGRRGZCPVUYSFWTAUVPFVIIXXTVWDYOQCTEJXFLCNVZPGOZXD");
    msg.distances.assign("LWTKMUJEEINHEGIPQNDUFAJYOVOQOSNLHLJPFWXBMZYFRWZYECNJRCIHJIURNRTHPSZFCYMTCBUSJWVYIARQWYQNUWVIBCUTFNQVQBTYTGYBLSEJDPDVGQKAKPAFLQCXZGUOBAUDCTEKISDFSNTXHTOXZGNGQJDSTNECBKWSCRGVDQRPHSKDLDDLXMFHCOAMJHWMRUKAMEOAHWYZPKMZEFVGFAVXJVZKMRVXGIPLPBRXMYI");
    msg.actions.assign("WTHGWESLRLZCNTYXTPCWBBJSENEOOXOFBLSIHWLJFYWZYBXNEIBRCLVQKSLIRXTTXGJNTILGHJ");
    msg.fuel.assign("BVWXJBENDUXUGPYMDKQYPARBJJAGBWKKDWBSQNWYVUFMYLICILOHVFHZJUVUFYPJMWAUIVTLHXXZZDZTGCYCAJVGSBSMAQDFZEXKVFEZSIJMOLRHTTGHOLBZTJCERFFQMTMPACURANDICXOPNJLCGHZOHINGCEWISFNVNXRPOOQPBEPP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.422216798595);
    msg.setSource(787U);
    msg.setSourceEntity(125U);
    msg.setDestination(59605U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.750506184114;
    msg.lon = 0.93665767491;
    msg.depth = 0.0385083606886;
    msg.roll = 0.281128131952;
    msg.pitch = 0.602854823222;
    msg.yaw = 0.258105828795;
    msg.rcp_time = 0.946119928126;
    msg.sid.assign("RHDNZKMLFFOZFMRPNBURAZWQZDCCNOJRSDOHZVEWRTRWIXKGRVYAHMHTBJDZWCKGNXJTUJPYPHHCJLHKXVUSABAQCCLSENKOYAACEFNGPJNKYSBQVQXCMWPOLLBJMWXIPGHVJLDL");
    msg.s_type = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.109873312921);
    msg.setSource(63305U);
    msg.setSourceEntity(6U);
    msg.setDestination(33910U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.154908991797;
    msg.lon = 0.110204900477;
    msg.depth = 0.506909102274;
    msg.roll = 0.736396756231;
    msg.pitch = 0.622523485092;
    msg.yaw = 0.693409701325;
    msg.rcp_time = 0.349766027377;
    msg.sid.assign("AZMYDXRYCYWAAZNGHNLFYYUVAYSPZVRBBVXZFCVTHKUUHAESGBKOBREOCVTKIZZZDRQ");
    msg.s_type = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.415212816444);
    msg.setSource(40835U);
    msg.setSourceEntity(211U);
    msg.setDestination(51987U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.762121408274;
    msg.lon = 0.766779076139;
    msg.depth = 0.606560482558;
    msg.roll = 0.370546553324;
    msg.pitch = 0.632212195336;
    msg.yaw = 0.300704234497;
    msg.rcp_time = 0.298077746323;
    msg.sid.assign("SGTHRDSAXRFENGFWQIOQYYNNLUSAMMDUYNAJMKEGRMHOZOPQRXWZRJVBPJKAVXOATFJTKZMYLRKUNIVLEKXQIXOSBNEBHBIRYHZZZLPQTVIYZPWJOJMUFZFNWNFXVUGILGTWUCHBFVURES");
    msg.s_type = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.0728068130359);
    msg.setSource(55096U);
    msg.setSourceEntity(181U);
    msg.setDestination(53578U);
    msg.setDestinationEntity(148U);
    msg.id.assign("CKWOAVDJIYWHPJKGJEKJMOPCBITBPEFITDMNFYWJZESNHIFOKGPAPVWCTZAZCQCLSFPQSGALJCMZOHASAUVUBRLPXDMOMXVFYNVIHWBXUTULKFOFIBYETYOBTMUIUNSWEMHLHAWTQJMRQUNDPUBROAHKVTZGSRQNRPVHEHGCZNNQHFDVYWLSYJDQGXCDLFRBYIIGXEVEQYDLCRUIEJMDARXDSLTWRWKGZQVSKOGZBXYE");
    msg.sensor_class.assign("UYXISDXAZOJPCBEHQIBNWFLORGBTGSHTKVWXTSQMPLMAIEYGWQOSJYALWDZEQTHEIXPFMPFDPZHYMGNBKFMCLRGUKCBSDYCJXKZDMOPCLSWIWRANGAALVVRCGJEMNLHBYTZAITJRQTKYWRETPTSQKCALSOQVWOFISUPOH");
    msg.lat = 0.522802052947;
    msg.lon = 0.662980032233;
    msg.alt = 0.176841330147;
    msg.heading = 0.702744996248;
    msg.data.assign("UMJQDHXTWPBODMRLFUWQAFPNQPLLEKHFTCVCSVRQNKWEIRXWYIPBWSXYNPOJVHHOIUWPVTNSUXVJUVBAWIAXYHKSGYBHNLTPUQJPFKEOAYRVCFCCNXQONSCDAFLLZMAEDBRETTIOGLYCZZZVNZNZGXSYPQDRIULIMGFITFHMODAZZWDJYGQDCGGXHMMTPONSRDQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.906259803722);
    msg.setSource(53382U);
    msg.setSourceEntity(130U);
    msg.setDestination(28724U);
    msg.setDestinationEntity(171U);
    msg.id.assign("YFXLLWDRETUCHPZFZXHPXLHDVTATQPDCMWGSSUEGGDSLRWZWHYOWETMKIHINTGYNHCKBLPIBVILMPZGQNAUBRJLERFDNUHABSEUQEECAJXOFDLPMKXWLXDVRGXUXBGJGJTAVQRBDYJANXGYRYOZMRTCACNTATSPCFWKFWOZBTWRVSOYAQIYAEHVFEKYSRJMIIOMPEQOKMYIFVVUKKIQFJMWZCSBCNOINLQVZJKMDZOBUPGOZJKBFJNQN");
    msg.sensor_class.assign("KNQZYUNEKVUJ");
    msg.lat = 0.269169794458;
    msg.lon = 0.796462039243;
    msg.alt = 0.48304686258;
    msg.heading = 0.0795717554703;
    msg.data.assign("TKIKMOGYCJQOMZGYPAKFKZHNPEMREPOZIXBZJLGWVMSORBDJAXNAXGFRMLCXBLSRBJFTVWOCYHSZUWIRSAINUNLCYVJUNOBVYZIVQOCDFAFTWDZYEQLXVJEYUIPXM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.661054001021);
    msg.setSource(58324U);
    msg.setSourceEntity(226U);
    msg.setDestination(19807U);
    msg.setDestinationEntity(223U);
    msg.id.assign("XQTHCDRMNNENUGTVSTTUEDNNWZUWMKNSOLEMKDRVFOSRSLMEHJXVTAVKOUAFPXWZSYXAYVOPWJDEQUXCFUQGDTPJLETPNJQCJLGQIGXZAYJGHMBSDMIIDCHEMFOMWZFORFNUGAMUP");
    msg.sensor_class.assign("TIMZSJHPVDVZGLLXOTNANFGCMFRJYQAJHKFEOGSZWDGLWGINAHQXFOBQPWHWUNBCNUNHGTG");
    msg.lat = 0.0718163558571;
    msg.lon = 0.635085623441;
    msg.alt = 0.0546886968147;
    msg.heading = 0.0747100406099;
    msg.data.assign("OIYFPFISJRCBZVPYMXYWVVCAGJQICZLRDNCKKPXZDPXOAUESLTTERJDXKWUEETYVCGOKMRIHKVYXHBYLPBFENWHJXDBWVTNQOZPLIJGYFHUJMLN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.600098329455);
    msg.setSource(55514U);
    msg.setSourceEntity(78U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(216U);
    msg.id.assign("WAATREJWUVFTHLIOQJRJHOYOEYEMTVBSWLSCIWLDVUZSPPXBGRDCMWOXEJMAXFIHUICZZDVNDMOHTPOPZQTYIYZCLEZERUPKRFAZGLVENIRXMQNPTZYAMZQBALUYFPHYAYLVWFCPNKXBQQGUGNNXKNRIFIGGYXADDUKUZDIDOXTKWDABFSMDXCQBSGKGUCJRWKBGFNVQEBQJLPJGISBQVPNMOYSRKHLMNSFTOVJSJHBCWKCTEWR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.167030027904);
    msg.setSource(63841U);
    msg.setSourceEntity(99U);
    msg.setDestination(46167U);
    msg.setDestinationEntity(165U);
    msg.id.assign("NZEJIZPVEQIEIOKUVAXJBENOGWXUHPPSGBUQKFCRGOKYTWXSLCEOERSLKFBNGJEHHTLBMVCXARRPRTPHHMQYEQJXSWKSODJZITQMOCQVGOJEPVJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.363302608917);
    msg.setSource(59221U);
    msg.setSourceEntity(120U);
    msg.setDestination(41428U);
    msg.setDestinationEntity(16U);
    msg.id.assign("VLOZWVHVPEOSIVBFPLEDWCHHJWJEIRUIGKMXCCYYH");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CELQQGHAANPAPYMLJWTQQJEFGOTDHCXXAMNQIHTDEFODBDCQZRNGLOKMMDOMLE");
    tmp_msg_0.feature_type = 79U;
    tmp_msg_0.rgb_red = 155U;
    tmp_msg_0.rgb_green = 129U;
    tmp_msg_0.rgb_blue = 6U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.464388406283;
    tmp_tmp_msg_0_0.lon = 0.227696144951;
    tmp_tmp_msg_0_0.alt = 0.672818532656;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.48123967366);
    msg.setSource(35195U);
    msg.setSourceEntity(171U);
    msg.setDestination(5224U);
    msg.setDestinationEntity(89U);
    msg.id.assign("QETPGOPKXNSXVNPWGJIKIORWTZPPXSCNKAWJSMCDLMBJBYTGPPAEMANJSWGREYDNUNMNDUDTRCGPDCYSHFDAOWFYGFFKLOOTVFMTXMRLUIVVBZRXSGSIREDILBCZMFTLJNTKOFCSVOUIZAQJAQKYUGARYWXZFLVDKKJEAZJEHQLTUQDFQFLHZWNICEUOOSAQPV");
    msg.feature_type = 172U;
    msg.rgb_red = 127U;
    msg.rgb_green = 131U;
    msg.rgb_blue = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.194941601393);
    msg.setSource(7675U);
    msg.setSourceEntity(181U);
    msg.setDestination(6395U);
    msg.setDestinationEntity(110U);
    msg.id.assign("ONBDAOOXZXJJLJGMZLIWMKWFVSKULKFSEAFUFBPAUAGQWGDKLMRSIFEVUDXBCTZZJKGYWYRXRHTNTSLVHPCAZWLZGOYAHHCBQFFZSDZMRMFHJTXKNIWQRQEPEWLJHSTHXAYPEEDIKFYFZUUYIV");
    msg.feature_type = 201U;
    msg.rgb_red = 13U;
    msg.rgb_green = 180U;
    msg.rgb_blue = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.658382471589);
    msg.setSource(9994U);
    msg.setSourceEntity(218U);
    msg.setDestination(59460U);
    msg.setDestinationEntity(230U);
    msg.id.assign("OIAZRRKUHTBQFHXOCVSPKZREOIUGJUJRRWXGPNVZDSHQAKFWJNLESXFVDLGRQYCDMIMHGHXPMQKMXZAIOTLTWMPUCADFMXQYVPAGXGAISWQCFTTEWPSNYRPDLHPNIWJRLNWKIAQZBZYKTTQBCSPQYKZVNWMUTNDCVEFJVBXGMSAUORBKOJYSBOYCNRLBBBSQDCFVZXITNZEOJLFXSHKHBMJDJVFTEVLAEFL");
    msg.feature_type = 142U;
    msg.rgb_red = 220U;
    msg.rgb_green = 222U;
    msg.rgb_blue = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.349395547133);
    msg.setSource(14951U);
    msg.setSourceEntity(191U);
    msg.setDestination(53040U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.0700441675481;
    msg.lon = 0.600014349634;
    msg.alt = 0.490474369786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.699974394955);
    msg.setSource(46430U);
    msg.setSourceEntity(94U);
    msg.setDestination(36513U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.0257581002368;
    msg.lon = 0.480101939292;
    msg.alt = 0.320745261314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.691661253932);
    msg.setSource(36675U);
    msg.setSourceEntity(243U);
    msg.setDestination(3911U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.23394452486;
    msg.lon = 0.900084376231;
    msg.alt = 0.239260472305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.0408322282864);
    msg.setSource(49459U);
    msg.setSourceEntity(54U);
    msg.setDestination(51600U);
    msg.setDestinationEntity(129U);
    msg.type = 154U;
    msg.id.assign("QHAMBGFKKEKTXDJCTPOSOTGEJDIZZBRQMSBIHWMNLMUVA");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.557974870211;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.580440862058);
    msg.setSource(5091U);
    msg.setSourceEntity(58U);
    msg.setDestination(16860U);
    msg.setDestinationEntity(121U);
    msg.type = 41U;
    msg.id.assign("QYLYDOYTUUITMOKEXJRMZXSWXZMPCEWYQUGCHXNFZBGSRTBTGOANNDYJDJWAKYGEKCJTCRLQAELJPRTAYGBLFDFNCBPZAIGCUCUHTFQX");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.402816745054;
    tmp_msg_0.x = 0.652695643308;
    tmp_msg_0.y = 0.0101353960322;
    tmp_msg_0.z = 0.508668565546;
    tmp_msg_0.timestep = 0.990191822377;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.380613155622);
    msg.setSource(9350U);
    msg.setSourceEntity(38U);
    msg.setDestination(62905U);
    msg.setDestinationEntity(157U);
    msg.type = 172U;
    msg.id.assign("SBWXCNDQLCUTPZHGPZHSJBFHMVTA");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 251U;
    tmp_msg_0.error_count = 135U;
    tmp_msg_0.error_ents.assign("OJTOOQYCZJYFVNUTHUHMDAQEXSJPQMUPWMXEGSUIFXDCFCGQRFWFMPTSCWBHUBNEGHRNPLXIGGNIVBXJTRKAFDPYIULHAIAKZDJZFEMMGQLW");
    tmp_msg_0.maneuver_type = 62556U;
    tmp_msg_0.maneuver_stime = 0.575389389476;
    tmp_msg_0.maneuver_eta = 2445U;
    tmp_msg_0.control_loops = 1092951462U;
    tmp_msg_0.flags = 17U;
    tmp_msg_0.last_error.assign("PGOKPOYYXHXAVXLUEDSUKKNLQJCTDLQWBFFCVBGKNQNBLIJJGOPNATGVIGDANMQWRCRCFAWQLRSJIJPDVJOUPTMMPZCNAEFXWLDGWSZHAXJUEKFZBLRLDTVYBPSCBIWTHXIGSQEKMODZEYYOHDVZXIXVKT");
    tmp_msg_0.last_error_time = 0.944927372731;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.111601802768);
    msg.setSource(18617U);
    msg.setSourceEntity(235U);
    msg.setDestination(24606U);
    msg.setDestinationEntity(218U);
    msg.localname.assign("GHCDGOHKDPKHVJASFNOFEGSRPOELRURCAYABWZIPWUXCQUEYYMUIEILPGYLHDASHNCOGYKNPUFBIEXICBIWZBZDWHYJXVQFEPKMRHTEXDYUWNZUSYRLKLAZRXHGCJEFBOFHSNYVMOCOUZMJFIMARWIVLVXBOWFXFTAPWNEGRQWDVDMURNATDKPMPLAMLKQJJESLMXSITSPSGVFVRVJJUOKQOCCXQIGZYBTZCBQTQJBN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NUKJZKYNVUJCPYTXBACXXRCZDBWWYNEOLVIQKRDYSSWAKTDEPUWTYKEGCEFVCQATZFWJDVGBYML");
    tmp_msg_0.sys_type = 16U;
    tmp_msg_0.owner = 59098U;
    tmp_msg_0.lat = 0.635660580312;
    tmp_msg_0.lon = 0.273559907099;
    tmp_msg_0.height = 0.485896389314;
    tmp_msg_0.services.assign("SPCOCARBARJNBSEYXEWNKZEZPLUSKVDELYTHQDQAWDCPKGHIMQHFWUCBVNHAPULURMZGDJXJNFLXGRQGEOPNFYZPWX");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.870709732581);
    msg.setSource(1064U);
    msg.setSourceEntity(83U);
    msg.setDestination(28368U);
    msg.setDestinationEntity(62U);
    msg.localname.assign("HWBNCLANVFRPXCVSEULABYPAFYDORPYBMCNBWDYLACWWWTPAGZAHJNXQGEPNMPKEKTITGBMFFWBFGQDOKLBJSOZMSVQOHFXRPQTDCSIMZQKIRXUEUGSWVMTDTKGROPWVXVTIFQZJQXDNMSVKYTJUYZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.312759243792);
    msg.setSource(46299U);
    msg.setSourceEntity(61U);
    msg.setDestination(57362U);
    msg.setDestinationEntity(153U);
    msg.localname.assign("LORAPNQZGWIJABVBQXGWQXMWLHDSBRQDXFFWLVJKHNHYOGYNRTORCDJFNPBGFQEIUASNQVAJDIOVKPEMJHVECXTINBRKOJGKQTLUIYVMDLRPCUBPCZSMEUXHSAAJSIXBHSCYUXPAETLXFTBHKLFWOZYQRHMYDFIRRIOMMWECGSPZAXZSNGPSDKEKRNBLBKAZTJGAOKZWGZNVCFWUFVJCGMWDPLITOVQYUDZJZMUNUOTSYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.442582888042);
    msg.setSource(48705U);
    msg.setSourceEntity(146U);
    msg.setDestination(2908U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("LYUJTOEQZMJQEXLTBZMRNTQEUJEXICDBWEFLHWPSYTRQDOIIVATXNPQLFMBMYRJDNRTSLFKSSDZYRHPGSYMLCUV");
    msg.predicate.assign("LODNYWANSADGCMWNMGHKZFERQAXERMCDRPLYSHSJXJEZCHBSBCPKUGXMJHVBMASTQJOANVXTSUJUDMLDVU");
    msg.attributes.assign("MAOGXLWHAEQFQSJXTMPMGYQBFXGUZGYKQMDOFMYFMEUWTLSHCBKAJYBPJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.0111339871521);
    msg.setSource(31137U);
    msg.setSourceEntity(196U);
    msg.setDestination(28196U);
    msg.setDestinationEntity(159U);
    msg.timeline.assign("LRAFICCHTQYQQVIZXXLWCUVSNUMPASRCHTUXWJOSPJZWOUDHYJXBGOTXEXLKXTHBMASTDBZEELNPAYRMLMFVDUQVMYPCVIEOOUYJQRUEZITIZLHGRGINDLHKGJJTGZKBAWKUQCVPNYFWSWFYMMDDSEMTNKVRYJVFAEHIAWPZGQGEFNYLORKJAWDFMCXBTBZXBPCUKYRQXPWFPDFGONSVSNBCSDELAKHJIHVLJQFZAMBRQEWNBPR");
    msg.predicate.assign("WTEENBXEIYYHUPOFIRMFWXHFNYMDZRJPEZTCECKRKMORUEMHKUNQPCJOAOBLLAXPQJBDUUQWFWDIAXHAKCKMBOWASAWVGHTQGSZTOIAXGPWPFIVCCFBURBLODGOMQXKJTXBFVQZ");
    msg.attributes.assign("FYHRVZMUECZQFFCMNPGOAEOCSDOWUEZBQGYIUZJVZLSFIIDKXLOJPYMAUEXNMIJNUVYURAHKPLYTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.926870797545);
    msg.setSource(10267U);
    msg.setSourceEntity(155U);
    msg.setDestination(5119U);
    msg.setDestinationEntity(155U);
    msg.timeline.assign("HOFVBXQGCAKLRFXEKIUTYKUKCTVAHMSVOSNZAURBBGULZVJLIPHUGBTXSVOJWEQOJSDCRHSPAYAIMUKNRILEYVWMTGLIPNKRYQUBNXYZDRMMAHRZFTUGJSGXQZSTMTENJRKFJDYALXCZPCWWCVDEJOQRBOMUCQBHGHVZQOJYFNTWQNWFHLTYSFSENDUDBM");
    msg.predicate.assign("FNZJIJFXHNHJCGAXZYEXQCPUGIDZMOGQKJOYVHTXOYWJMCZXENYWIAKNCQDBRSFSIUBDGSEDEAOJDZMQALKLEKJPGXCQNEZMUKFPPTHTOPRGTRMCLWQOAUUAWTSABWGDOPMPWUITVODCAKFMBHKBXHRQHVLRNEVLMWYBMDRSQSEFNTVZTWYGULKUJHKUBZGSPODIPZENVNZLRBLOSCFQXAIISBEKCFLWLCSGIYDPRVXVJARFVVYTYHHW");
    msg.attributes.assign("AOTIYRGGFLEYRZPBISPNEXHSGFMMKYDCSCNNAHFJDAQQVUONPUVXXODDOXALFBQYVBZYOCLYBJATNKESJPJLXZOHFLWSGRKSSQAVLQVECMZZBERGCITJDBTADKGBMXGKWMERMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.356973055903);
    msg.setSource(53458U);
    msg.setSourceEntity(216U);
    msg.setDestination(17828U);
    msg.setDestinationEntity(251U);
    msg.command = 235U;
    msg.goal_id.assign("POXQSMMXZUYBAFGLJJOCQYDCLIYUAAWVXQNFBVKPVBPYJFYRTIXEBHTRVLJMWBYXHFDQJCTESHFCERAKIRGAMVFSNSCXGCSOXYDTDWIMKNEJFEWNHOLE");
    msg.goal_xml.assign("ZLAMYFNNGYQQIPLFCFBDGNCMCHBFROBFQAQEDDUVDJLINXXQYWZDGLWUMPHXHMUCZOFLZWSGATPPSROQKWKVEJVUBCNRFSDMKXPESNVVFKGCPHINTWAOSEVTZORUHIQEXEMXKRIRABMYWZIBMPHTTHOWCVSSXJWTAZRGHJLPTMCBUWYKNTRDNJWBIIPQKAADBHGVSJGVDKXRZQOJHXUYMDLNLBYCIJALGCOVZLSEUJPEEOIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.271918065333);
    msg.setSource(6118U);
    msg.setSourceEntity(44U);
    msg.setDestination(62272U);
    msg.setDestinationEntity(16U);
    msg.command = 13U;
    msg.goal_id.assign("LAZPLHVMZMCEIEFQNZFFVHVDKIENVTWKBUNFATCRSYKWHEBSQDCRXPBYJLHOPIPYGHRIWCLESTZDIMJXVXJGAMSZUNGASWDBKRFKKNBEJGTOTMSNCAXZOWAVRCRADKWGIQEWTGEBYBXPJUYFYUNKQOJLIDQMAOLGRYXOGTCNRWGRUTXCJLSWISSXKVIPZVGXFUCKHQRJEUXPDYLNZHTHBVFYUIMCEAOQQLJDQMQWOPZUBB");
    msg.goal_xml.assign("YAJVWTJHKGVWRA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.985401615843);
    msg.setSource(62196U);
    msg.setSourceEntity(170U);
    msg.setDestination(52340U);
    msg.setDestinationEntity(27U);
    msg.command = 173U;
    msg.goal_id.assign("HFOXEYPSLDTVNPDQEWSYPIWWRHWEYTBVPHOCUOABPHSTQJGNLSDZUZGPJFNHMCYHEVCYRAFQKNQGUQ");
    msg.goal_xml.assign("NKUINGZKPFVHXDYXTYPNIDDCCPOWTVOSPOHUZTFFAHRDXJJEZVIOITQCNBQEQQQZFNMDGGKMNYRSJMJXIPBUKIGLGJBDIDUEPSEWTVRQSSKBFHYWCQYEGBVKTHZEIOBMWCSVHQALWXELARSXLXWZTNROCBWSLMFMUXLRPVDASCLTUOZMGHJVFYCQUPFACEVAIKTNRMXCZGFHKTBPDKHYRZOZKXBODANYGQRJAOLYFLMURUGWNAIJJBHJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.774730586882);
    msg.setSource(42163U);
    msg.setSourceEntity(227U);
    msg.setDestination(2218U);
    msg.setDestinationEntity(62U);
    msg.op = 63U;
    msg.goal_id.assign("OFHBOJXFTMJKDAZTZBHBKBJGPYHHSFUUJWRFKQUPCMNKBALDXAIFLQZKBPBTZNJKF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OMCIFQVWCPKIHJSOODUYNMOCZILUJVWNPNITDXRFSCFMIYDSUVZUSBKLJSLBGKHUNEWINHQBBAEUDKVAVLMYVHGTXDZUYSMKCLDTYWBVQQER");
    tmp_msg_0.predicate.assign("AJWCJFRVCPTRIJTFHXUXCBQCKZKZYESQDLGGEUPLIGMMRYNZWLVOLNQVSSJVZWCAZUHIXALEYPAZIGNEHEIADBJPBIJNDFPIWHHBTO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LWPQYGEARQDORXWLFWNXDCIMSNRDXDNKQABGJWBCITYHSVRYVOOGOVHPVFXIKNUESVMVUAZPYLLZMWZKVSMGZCTCBRPEDXTCJHWVJNMNAGAYIABHZPNFITOVGEFHANJLDKURYJGFBIWDSYUXYZZSFEJXTCOPEUDWSMXYAOTQIIBUIWNFSXHCCPJAZUKNUTUJZGGKBMQFUGQJTFFCKXPCJQIOPHBLHTLDERKMRQKDSYMEOPHSEBHQTOQZLWBERK");
    tmp_tmp_msg_0_0.attr_type = 201U;
    tmp_tmp_msg_0_0.min.assign("MKGTHFSXQLCIJDJCEXKBQECROKGEGDVVPOIISMVUNJJCYEZQHHAUQYPBFUTCZISRZTDFASXFIWLR");
    tmp_tmp_msg_0_0.max.assign("TACHEPRZHTLEXIUYCXCYLHGAHTDGNWZLDHSFBASXQXORFOLQZNKQRCAWPFGRZALFGZVXYEMEJCURVHZMKHJRDHWQMDSPNNMZIQVVSLSXLYHJIYOGOIKBUKWYGYVBAHJOOUBWZLNNSGIISQPTJWETKKFFVMDACYTOZSCKEKRPSGEAKWIXMKQRTJDRDNVDJAIBCZEOSRNBTOMBWVIMVYQTUFWVPEFXLJUNOXCBCFMQJEPAPJDIULMBQUF");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.0127916867031);
    msg.setSource(50650U);
    msg.setSourceEntity(169U);
    msg.setDestination(8381U);
    msg.setDestinationEntity(50U);
    msg.op = 71U;
    msg.goal_id.assign("TTGBDCYLVYDDPUIOISMUNNSUTLIKGAZRXKVALMVMETJZOMSCSFMEFMWOMWFNBXTUJHSOGQUNRCGNFBNYSQCPRQDCOCLWQNBUAHAXHJLPIZRJGFEXBDEAYIDKOXSGWPJRYXWDZTYZRUYBKIKZQVTPXYHGJDOKLWOQHKHNVLWOENI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IYIPOBUUTVPOFKLQBVBPDPKWAJOTQJMQRVERXDDYLYCXDKKJHZUUJGIQXVTWNBKISLZDQGMXSEWNQGHZGOHDRMYNRWIPPMVZWYGFYWKSXPFLASAPBLOZLCKJHUIVTCYTFTVFUYOERMTODNAENFHAERCNMXMJWQBSCRGZMHCHOZDKDEYYJIDMJSUGARQWHBLBJXAKSBFVTPBIHZRWCKHC");
    tmp_msg_0.predicate.assign("LGZJJDZIMXBXQEOZUIWQAWCYWTQKOZWROOCSUVSJDBMVXWJEMIPRJLDEEXGFGCDPAQHX");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.180022359514);
    msg.setSource(43046U);
    msg.setSourceEntity(3U);
    msg.setDestination(63457U);
    msg.setDestinationEntity(80U);
    msg.op = 204U;
    msg.goal_id.assign("WHJKKOVGEBYDTEBYXMHVJGLNUUND");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZDZNGSSXJQMBLDIZSFTYWRZYVNCBHQDISIJTAVKGOAVEEDURPTMTEXUOSMPLRZCUZVOGZXRSJLINCYRJDMLAWHJREOOMVPICPKYPBGIALHLNNCKFYEAWZQLXHQYVKUJXADBVARFHTHWQNCKKIMQXAXZWMIEMNCTEKSLRUXPTNBSVNGXBYHDUYYKWGRTHCAJEOROFXEGNLGVPJFQOBJ");
    tmp_msg_0.predicate.assign("VVBXTOZOMSKKKZJHQZEXKWECPGJJXZBYVXKYDIJFXWIJLOZEPNVLPXYSWHGFWCLRQMMZTCAOFSDIANNMQGJQIHLHZGPTHCGSCEKGRAAIBSCVNXODBYNQWUHYAUWLNPDDKMERVLQTDMWGBSRDNUVVAPQOCONQLFTZUBXESIKFMZZRGMJTBJIQFCRBPUKAOJQTTVISKFRROEBPLNIPUEAAUDFFAWUYXLHHNCSCMRVGYPSDITWF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CLKSKZBDKSZYLLNNJGPUAAAATOBHJWOPRDGUQAXOGSXSMUDQUWWQPMPRBVLQUBMUONHCRWXNNKBXYXSUJZHVPZIAXSISHRJEIYCWCCTTWEXYUMTADJXASKPMKODAIWNYC");
    tmp_tmp_msg_0_0.attr_type = 202U;
    tmp_tmp_msg_0_0.min.assign("RRNWYWXPYZTPSRVIIIFHCVAENOKAMCKJJFONDLMGEVBJJAPVRLKACEDJYSXVLOMLVSGPQYOGWLBTKPGSFDDBXXSOAOGZZHREIHKYUEPQRTQUUPBDBGWYIEZIEXYHZUOHWGNNTCUGMBTCHYHQFRCEYVBHXFSOFNSFKNUZJOTEMNYERQJZMAIRKTHNQLMCQKAVWITXDDLICHDXFUWFA");
    tmp_tmp_msg_0_0.max.assign("YPWBLMZCYZVGXERXDRKVBXDRIZSSQFNUYBJZLXKNBSPGODPUDFQMP");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.782107936643);
    msg.setSource(63800U);
    msg.setSourceEntity(231U);
    msg.setDestination(58524U);
    msg.setDestinationEntity(146U);
    msg.name.assign("MLDFZTAMOZZKVKBJFLGQBAXZCV");
    msg.attr_type = 205U;
    msg.min.assign("QFPGSZAITQVUBHDPDHZXBAGQKUCGQCAMRSSBYZXAHGTHGDEFEZUQCLLKQVDEYXFIUYPPJBFNUSXIOKJPLMB");
    msg.max.assign("PAQWNFBEJOMYUQTXTZVKVPYKZSUSLNWISJFCOXBCLVFQEDAUPYEQZSURHXEMXGHVUAELMOPLPZOOTQTTOWWIZXSRBMAXWZGAEDGKINDPCTYRZLJLCHUPKWFRGLDPUFDJIAHRGELKJGJYNDMJNMSDGOUEIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.5235682477);
    msg.setSource(52256U);
    msg.setSourceEntity(232U);
    msg.setDestination(63406U);
    msg.setDestinationEntity(38U);
    msg.name.assign("ZMDZVEPDEAGWNENTXPDPCVCWSGVIOVKMGYMMQUTGDQXTRCRZOHENYKFIXRSTNCXXFCQDCCJBWBSAOUATVYSONMTHWWLKKEXSHYNGARRLLIZPKAHNEQZWHVUJBHNIOOFFCYSSVGRVDRRJUMCIZUKUWQPPEPETYZYBSVWTXUNKLDPFGKYLALFJXDWDIILKAJZMOGTXAOMIPFGMAKBJHGEDFL");
    msg.attr_type = 19U;
    msg.min.assign("TIIYSYBLTZZSILCPVOBDONFNCGSEQOCGBUFMVEEZCMHFJAWZTJKUYFMIMQHDOZRKGNKCMTAPWCLTMFHQGWRQQVEVQHKXFWFACWADNXBZIOMAYZRJREPKYJHEUSCIKSKVZDUCZUPEJXANJLGEBGMMJLYS");
    msg.max.assign("ZXPZAKOPUWENLTFJIWUGTUYOLFEAYEXCKXVZCLIAVGLJDOWQHLRHBZLBQUKJGJXGTEFBDDEIBEGWVTGBTJPXIKVRPPLYFWHIXSYEDQAHCHMUQCTRQYMLAAMMHSCPESGXIXFFZVMBNSPNOULLBOJZKCGFQUIDMSWRKRKOIVRFUNNMYYYNJANEYRXHDZQKKVTJEWOUFSQODIYVCJBSPCUHXDVNVAZWQBSZPRCWWISAPNODGOHTRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.901011095636);
    msg.setSource(19517U);
    msg.setSourceEntity(107U);
    msg.setDestination(46062U);
    msg.setDestinationEntity(109U);
    msg.name.assign("UCEPBLFYWQBXOZEZNPLEFYWKNUVRNVYKGTCGEMRSMPCOPHKJSZNVAIHRVYXWIJHLVKXACRAPEIQSOMNQDYDSSXAXGZCYGEJMMLDTOKJPIIBHWBEYAIGQFBJN");
    msg.attr_type = 217U;
    msg.min.assign("MUAPNQTBHPBBXCQGTIONAFMTZEOPAEIHZOQRJTLWDSKSNUBKTWLCGOAJFJPFRGYBLRGDDEWDRQNESGMTIVOFIVDUZVHIDMFCEETPDLGMMBCCGOFXQOZYYYRVJURBSWJECHNUDXKIPQCUNKSGXHHLMWURPWVLUPMSKFXIVDRZPLKBSXYJWCAFFGKESWEVIKLIMHSATNPKOLBHNCYZXZVONQZAJOAYYVXQYWUXVHZTTGWYSNRQRL");
    msg.max.assign("JKSUBGZJJGHRFJCMDRMRKBOQEICDVGWYQDPHKPALNYYUSTNPYOUDNXGHEKAYDLCXLURVHBZXQRYEVWMEXGPLSESSSDLJIFRWRGMWHXIQTBJEGDUUTFEVOKGIMAECQXNICAOXINYIWNKPKPTMPZWWOCAHOM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.359977246263);
    msg.setSource(47953U);
    msg.setSourceEntity(86U);
    msg.setDestination(61283U);
    msg.setDestinationEntity(55U);
    msg.timeline.assign("GEBOASUJQUBQYFISEJELXWMTWEXYHHBDHUVQUWUONGQUHYGJKOGJIASVBCXFEPUQABEYRRKOFQMLPWMZCMYCVHTYMIDJSDFJZYTLXKTZWLDHSXQLMEIUAHADCLRPVK");
    msg.predicate.assign("DZMSTDDNHEHAKSYNWMTCVIDFXJEDXWSNHECHJEVLLCZXRONQYWPQAUYOQPAMOFRBFAJVCWNTQEKUVLIMXPZQSMZYNLYEKXWEWUABVQMBGBGRWKUNJRCASPMUWDQSPUYCTIKGBNAHXQTAOKRTLKGROWRMSJGOPXVUDTPHVOERHTISFHBIIZLYKKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.544436524113);
    msg.setSource(6429U);
    msg.setSourceEntity(144U);
    msg.setDestination(26148U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("ISRLIPYBXLJEAZFZAMTTIBCKZSMXAUEMMKTJREQLFGGYSHKOIPUTWMZCUFUQGTLLCVBTUFKLNWRJLOZCJIFMVUTBVRGGNEPHVQABFZXZIBTCXAEPSDSHOMNYKWARLWWFYDZUELPRJEWBHHEGWGGDKXVCQSNOQYJOT");
    msg.predicate.assign("WRYJFDSCKBUYPYVLMVEATOYMDUBGHLUMKVHEPOEGQVZLPSONRNOKVHANDXGMXLRVGIFNPBSAXOCCBBKFSEAAUXBPLEGIHQMBUGREVTSQJZVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.947833465962);
    msg.setSource(58460U);
    msg.setSourceEntity(70U);
    msg.setDestination(35435U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("DUKEEQUBPKWTXSVJTKYWACQTMPRGNKAYEIGDFHQPUORYDIBSBYJUVGLPENOTDFKRLSAACLTVVGFNMQJGWHHCJMXIINFNIJHXVYVHDWBGAFQSYTTMIBZAXDPBSKPHCYJGWKXFYWQLFSBZ");
    msg.predicate.assign("PGYSWOJSIYNDFHNFAVFCGZPMOVCJQFDXVGRQOKHPZXWRKPLYDBMVUXRTXJSHPLASHDOOGVITKNCCZDRLWQHTST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.895157880616);
    msg.setSource(25681U);
    msg.setSourceEntity(174U);
    msg.setDestination(61248U);
    msg.setDestinationEntity(60U);
    msg.reactor.assign("MUXJUDUADUTUXHPYPEWYQIISNUTYQJFHMLPXBDQLAUEWMMRBAPBFOYQYALATDGRJCVLYXAPQMRJGOPGRZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OHFPUMSOVQQFJHKBDZVQHCWVSNOAKKJFWMSFQVDGKTYDTUYOTVAZLZBWTXAWCOWMIJREPKCHZODWHUSRCLRAUNGBPCDNEZUXZPMFIGGOYERPPTJXDDTUXRYAIFNPSALMUABGBVWPAWIQTJEZWN");
    tmp_msg_0.predicate.assign("UPUDXOIKQXKUOALVYSFMYMMQLFEUSWZKDBFNVDVYTRHFBXUBQMWN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GJZLHBHKTNCRYNCWKPKJSDSQZKXSAZOTAUFBYUGKAEGIFFDEKTTCCRMAJRURVIRPHYZZVQHFBDIDGBKCRNMDMDEYBOUNHYSSWJTEODHXSNAJYVZTQWEYOIFOLGYLPLPYFRQOUCWMAWSCJJRPTJGHPZXKHQDVA");
    tmp_tmp_msg_0_0.attr_type = 252U;
    tmp_tmp_msg_0_0.min.assign("ECXGJQMWUCPBSFSJIVCLDVMFJYQHBCVQKERLDWYTIEJTDREQANXSPGRJAHIUXYGOYZURTFKWBGKANMILKZFDNTORHCXKZMUMSFLXBLTOMYPFLZQAZTZISAGQCEHVQOJAVOHBGZXLRWGSNQORZJQEIPNVZWNNGODOCMHIPFWSVWVOWKSGAKSXWDYKARKIUXVCBERUEEU");
    tmp_tmp_msg_0_0.max.assign("VQQJTYLUVJQLIMRCKSRPZMTEUVIYDZGARLI");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.951346208403);
    msg.setSource(2557U);
    msg.setSourceEntity(19U);
    msg.setDestination(20463U);
    msg.setDestinationEntity(210U);
    msg.reactor.assign("HNGRWLHSKXIRRUKNINECDMJFCGZSWGWPVXQPZRFRGZUAJSMIIPEASFJLOLNMAQZAKGMEOKCZQYKFDFCZLBFPTTXOIHDD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GPWTJSMFAITZCAAOVYABJEHUFNZYGMJEGRALQSUXWONJVSSWLGMETCIZMKNVYAXBCOHFMRSSCYHBTEG");
    tmp_msg_0.predicate.assign("YQJFABZRDSGSBMOWEVCNZIFXWKNEDRFOKMQJKOAJQZXZNZDQLJCNIYLYUGGDETZCKQPEVFQSJUBNYCENAAXKZYBHMKNWDIIPJRWGTRLAJHYQISINSPSYPTUGBGEDBXXSFOFDRB");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.850951038989);
    msg.setSource(22267U);
    msg.setSourceEntity(120U);
    msg.setDestination(44981U);
    msg.setDestinationEntity(158U);
    msg.reactor.assign("QHRMVOVPNEKGGLQLPIKPAWMTNPXSORZOCDNDUVMQXXFLGSZGUVHPREZNIYVKJUSFOSWIDXGCGCXHILBRHQXWPBFQZVZNPTYZDGPJAVTYBFDWOIGPJDXOLKVMJSEEKDI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KPBQMNXLUHILNCVOODSVGVEKLCQRSONKKCWKLVEKIIRKDJGYLMMZETWGOSWXBNVFSMGQMMUHCFXTDNLRIMXPQARCYHPARITIYAVBHDUIUUWTCYBZPBHDOAEXQUHTQDQZLZBYZRDWSNDGXQZFGJJUUDUBTBBAWWRUI");
    tmp_msg_0.predicate.assign("LRBDRHJDMCORSDQOWGIPGNABEANBDKUQJINBYFCXSXKCHXMISACGOTOLQTPWZOWFMHABBHUHUPGFVUFWVKSIFTBEQMGZGRMCAFUMSGIMJDXOXKPBNEKQGKHNYVKFDQYYQOZDHYTYLLLRRPHKCDFZCABSRSLGQHEILYJTZUDONVJVWPMZZAXNOPGITVWXAMQWYELEP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WVQIBLWCSIASXJKMUR");
    tmp_tmp_msg_0_0.attr_type = 27U;
    tmp_tmp_msg_0_0.min.assign("VXDFOGKPJXQTVEZKSQXJAYQOUBCRMXDAEUTWQSPUGPJJCMUNAIFHRTFEVXLEKGTSCDCBZQTKDKXDPZMDJYEIGDPABNVOFGYZYRRJWBPMGIUYESVLAEGI");
    tmp_tmp_msg_0_0.max.assign("SGYGXXZQNGOBDPSAUQWWPZPLEOXOJSUISANVWFIGNTZVUCEIMNAZDMLCHYNGIKBPUHKRZSXKMEXPIBDQZKUSXBKJKFQCTGQRJOZDTSVYEFECNJUPFJURAAFCDTMKTWTQWLMSPETTQWOVQEDFUZCYHNHOLRRZGJMHNRGHMAPHDAISLXIRDDJFHCMUXPJZWFFOVKVMQWRXSIVFRKARBBGYNWKBNTYJYVWQAHHOCPYLLBYEJOLGOCME");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.945807213764);
    msg.setSource(56274U);
    msg.setSourceEntity(156U);
    msg.setDestination(5858U);
    msg.setDestinationEntity(81U);
    msg.topic.assign("BIAZYOJXUCHHWHCNEHYYMSULEXGMDUZSQBLOKKSVQXGRJPRCADEZEMOGJFUDQXKAWQTGGMBPSIIRDXYYKUVYIKXKIRUYLAPDMPPTRTQATBHAFLVKPKLOXUDORQINLXACXUGBQ");
    msg.data.assign("TCWKWOOPHGBJCDZLSZVVSNGLYFYGNMUVFXDGZTBZIRGETQSFCEEDLZBNTWQNURMPXIRWNVRKRWFPSJBIYMHIMCKPBPAOUIATRTBKUVIPLJEVWYEUIAICXARJCKCWHLBFXLARDPGZQMQHBSQQFYEDNXZDZLBOKAWMYHTCGXDQRYMSSOHWUKXFQXFZVLXOUMUJQMZSOFNDGAJGLADGBHHJVYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.618731194641);
    msg.setSource(48809U);
    msg.setSourceEntity(57U);
    msg.setDestination(47169U);
    msg.setDestinationEntity(133U);
    msg.topic.assign("ROWUFXDLKDOGENMBPMYWKXHMDFZYNCLDYRIGSROLQUAWETIDUEPCMZNACRSBQPRFNRDLJVAUSXQGLJOUGZEFVNLTFFCPTVRVQMUTSKJTBYYBPVCEZXYDJQJNGVFAFOIUJZWEBCOHGTBVKLPYUESKQJPPAHZAQEDZ");
    msg.data.assign("GYBOMSGPKRWZFBYHREOELHNJBKDIFVQJDNGOOAQTNUGEDQSXGHAZPPKXHLCSXBWYHFSIHMKCJDMELYQDVQOXJCEZDBMOEQMESDWCQUFMTMGPJFZSVBAFCSQNUOQUVGYTNSZPIDLPOQMTKZTTWYCLXLWBHJWJRZALWRRHTGXOAGAMVVKULDNLTDFZCXVJXPHSPUZUARIBYCUIYAIBTLAFWJIWKGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.676638076392);
    msg.setSource(26144U);
    msg.setSourceEntity(87U);
    msg.setDestination(46288U);
    msg.setDestinationEntity(188U);
    msg.topic.assign("DLFXGKOLOCWKMTMFQIGRNYRHIITOTGYIHQFWXGQJLEHAYXJMPVDVTMHSABQXVAQ");
    msg.data.assign("ENSGMCCKWJCQPRRMYGOLJNOYFXEXJLIAQHQCJBMFOUJWGZLCSHLJZAAEHMWXWUUZAIYNZFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.0668374073726);
    msg.setSource(15044U);
    msg.setSourceEntity(190U);
    msg.setDestination(3111U);
    msg.setDestinationEntity(57U);
    msg.frameid = 252U;
    const char tmp_msg_0[] = {-108, 57, 70, -95, -108, -42, 87, 68, -8, -124, -54, 90, -22, -54, 36, 40, 62, -128, -6, 4, 9, -76, -64, 48, -4, 97, 82, 81, 25, -38, -112, 5, -66, 125, -49, -112, 3, -67, 65, -39, -54, 90, -96, -83, 105, -27, -7, -70, 35, -11, -73, 88, 19, -63, 24, -60, -124, 106, 122, 55, 94, 67, 56, 55, -14, 50, -68, -71, -53, -62, -11, 6, 88, -113, 39, -61, 42, 40, 94, 50, -67, 87, 81, 72, -34, -57, -23, -86, -46, -79, -63, 119, -16, 56, -67, -38, 122, -28, -13, 54, 88, 39, -43, 29, -49, -44, -67, -19, -23, 114, -46, -28, -11, 63, -71, 25, 51, 84, -80, 68, 88, -74, -94, 112, 96, -100, 117, -5, -50, -126, 83, -11, 74, 14, -93, 96, 12, -39, -96, -69, -44, -74, -42, 60, -90, 83, 6, 91, -84, 1, 36, 4, 37, 76, 30, -71, -48, -24, 5, -35, -106, -70, 34, -117, -67, -42, -9, 12, -25, 42, -49, -91, 27, -10, 93, 7, -104, -44, -4, -66, -123, 114, -64, 26, 7, 106, 10, -106, 97, 0, -76, -72, -18, 83, 2, 8, -58, -28, -18, -46, -82, -43, 64, -99, -82, -32, 15, 108, -89, -27, 92, 29, 71, 86, -11, -117, 46, 63, -68, -122, 1, 92, 89, -45, -73, 30, 48, 100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.295600677524);
    msg.setSource(54855U);
    msg.setSourceEntity(134U);
    msg.setDestination(40314U);
    msg.setDestinationEntity(180U);
    msg.frameid = 6U;
    const char tmp_msg_0[] = {-26, -37, 0, -119, -124, -59, -57, 30, 86, 119, -27, 125, 101, 60, -61, -94, 19, 72, -79, -126, -67, 115, 38, -10, -2, 103, -93, 41, 75, -110, 100, -103, -82, -121, -26, 55, 64, 4, -25, 74, -105, -80, -68, 23, 64, -5, -77, 125, -60, -57, -3, 90, -24, -72, -16, -106, -104, -25, 63, -58, 48, 115, -82, 38, -116, 43, 115, -8, 106, 110, -25, -44, 43, 30, 70, 24, -118, 32, 44, -40, -106, 69, 126, -48, 59, -83, 27, -33, -87, 30, 110, -102, 48, -72, 65, -91, -34, 110, -85, 104, -66, -17, 123, -85, 113, -70, 72, 25, -14, -10, -100, 25, 90, 80, 84, 85, -108, -25, 104, 30, -37, -69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.697064254387);
    msg.setSource(8870U);
    msg.setSourceEntity(198U);
    msg.setDestination(47895U);
    msg.setDestinationEntity(89U);
    msg.frameid = 48U;
    const char tmp_msg_0[] = {-102, 94, 80, 102, -34, 30, 28, -43, -53, -126, 102, 56, 59, -87, -121, -52, 61, -20, 8, 111, -119, -55, 19, -22, -48, 114, -34, -16, 93, -104, 77, 30, -107, -91, -26, 125, 34, -108, 118, 16, -85, 89, -1, -121, 16, -3, -86, 117, 110, -90, 72, -109, 42, 107, 49, -44, 35, -105, -27, 71, 91, 122, -50, 108, 27, 94, -98, -124, -92, -98, -35, 80, -85, 3, 114, 107, 31, 64, -86, 9, 65, -123, 71, -14, -114, -69, 85, -86, -58, 14, -69, 38, -17, 100, 3, 6, -33, 80, 69, 85, 10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.0629951864404);
    msg.setSource(40124U);
    msg.setSourceEntity(91U);
    msg.setDestination(38295U);
    msg.setDestinationEntity(48U);
    msg.fps = 238U;
    msg.quality = 99U;
    msg.reps = 162U;
    msg.tsize = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.309742978592);
    msg.setSource(36435U);
    msg.setSourceEntity(95U);
    msg.setDestination(47295U);
    msg.setDestinationEntity(182U);
    msg.fps = 11U;
    msg.quality = 193U;
    msg.reps = 93U;
    msg.tsize = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.683159938696);
    msg.setSource(29643U);
    msg.setSourceEntity(83U);
    msg.setDestination(11715U);
    msg.setDestinationEntity(18U);
    msg.fps = 36U;
    msg.quality = 183U;
    msg.reps = 3U;
    msg.tsize = 22U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.642807614582);
    msg.setSource(35416U);
    msg.setSourceEntity(136U);
    msg.setDestination(30272U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.451932161216;
    msg.lon = 0.600488984573;
    msg.depth = 88U;
    msg.speed = 0.318589592091;
    msg.psi = 0.845509031351;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.224934704743);
    msg.setSource(5308U);
    msg.setSourceEntity(28U);
    msg.setDestination(46716U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.314733462946;
    msg.lon = 0.217567292892;
    msg.depth = 21U;
    msg.speed = 0.625001438688;
    msg.psi = 0.759383572291;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.555468132701);
    msg.setSource(38160U);
    msg.setSourceEntity(154U);
    msg.setDestination(50546U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.752424321461;
    msg.lon = 0.638003950614;
    msg.depth = 254U;
    msg.speed = 0.481294360623;
    msg.psi = 0.570590840924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.162722847303);
    msg.setSource(25561U);
    msg.setSourceEntity(136U);
    msg.setDestination(7646U);
    msg.setDestinationEntity(102U);
    msg.label.assign("CCVWNJRLPZSPDNADJJWHHZUBEUANYTPYHYAYJKDPSXRFVMXSIGIPXZKQHQGTOWTSCEBMSCEZPLZXXGKELIODUNIKVZVPFBOAOFCLDMKOYMXZSONGYGFEPEHMKXCIXUYDTRSHTOTIJYFYBJALRACGOGKHFICUWCQJQUYUEKJZEWHVLWOLVQJFIBRGFNKMUTMOKRXINESRPNEGBXMRRVMLSDWVIBPAALWZAQTSDVFJDDWUQTGVHBFZAMBNWRQBT");
    msg.lat = 0.873681037888;
    msg.lon = 0.650345991651;
    msg.z = 0.836049836924;
    msg.z_units = 107U;
    msg.cog = 0.897274158114;
    msg.sog = 0.991639302889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.127526048644);
    msg.setSource(61209U);
    msg.setSourceEntity(232U);
    msg.setDestination(64434U);
    msg.setDestinationEntity(139U);
    msg.label.assign("QULKGFXSYQLTBOJMSBJTEGWFPURIJRJMCAPITZZTIIYSOEDCNJLROBYJWHAFWQTUHDAOOCHYUCWOXJTTZRFEXDMPTODCQKHGGWYOQGLARDVCKGXLZEVBFEPQRYPRQXFEPDQGKDXVVISQMHPBCHYTATMPACPWEHSIAEWJNKCSXAIVMLRYJMVSFZIKJFHYKVNUUHGSXNADIWDCBXZOYRBGUZNZMKOLNENLZBNBNMVS");
    msg.lat = 0.620379377644;
    msg.lon = 0.465850458778;
    msg.z = 0.235515689807;
    msg.z_units = 249U;
    msg.cog = 0.0227825533108;
    msg.sog = 0.849927843027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.186548871414);
    msg.setSource(61365U);
    msg.setSourceEntity(56U);
    msg.setDestination(17760U);
    msg.setDestinationEntity(34U);
    msg.label.assign("YRMXZXUSRRPHITIWGYYWYFIOEWCNEFIHSDNAXQVWAUANFOEIEWACGUVBKZVBALDLFONQWOSATWCYRKHSZLHJEBMJFTDBGFJAEUQQIMHFTQZXJCCORPVCKXKKXAUZMGSNDQVEZDJPOMMPWUEFZDHVRLKRYCFJQXTVZTLSLHNSNXHYGPSPTUGJNORQQCUDKGHDNLDAKKSMGOIXGYCGTXJVPRPBOQVTYBEJIUBWBMLITNUZKISYBHPPMLBW");
    msg.lat = 0.341777906063;
    msg.lon = 0.25241281387;
    msg.z = 0.400003325457;
    msg.z_units = 11U;
    msg.cog = 0.965805972946;
    msg.sog = 0.786406234095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.112209498951);
    msg.setSource(65248U);
    msg.setSourceEntity(137U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(228U);
    msg.name.assign("HOKWFVYQHHMIGANRXIYFCYZSYCNZDMQHAJKOPQJTCARMBLETRBSGSZVJCACLHULXOSVFINYQYDPDFNMPIOFKBAUGVYAIGMWXQMTGHOITXOJPVSKWNOPAVAZZGBKJDKZBJQJXLUVURDHXGCQTECQLOBLYPUOCEVIXSDZXVRT");
    msg.value.assign("CKRFFIIKIQWRKLXYMCKHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.634552739326);
    msg.setSource(30347U);
    msg.setSourceEntity(206U);
    msg.setDestination(52159U);
    msg.setDestinationEntity(125U);
    msg.name.assign("PYXNYZESVUFZOUEIQHLIDWILTKNHVFQXZWGWGIHGHHSNCBSBPESKJQVCLKYZOAFXWUGJHCRQMCMNWRBXUAP");
    msg.value.assign("KNKTBLCNSGRKYAXIYWURCPGHMTHDXSGZYMUFEJITLMKINJXAEBPSVCZKAPMLDHSDLDINWFONAUETGTPFFJAMLZEHDBYWCJWJSPYNOLLRZQUINNRPSJZGMYVXERH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.00704657865406);
    msg.setSource(31545U);
    msg.setSourceEntity(53U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(15U);
    msg.name.assign("KAVXBXFLDPROHEWZGLLKPZQMLCAJAPIMRZCBHUWIRAFOUEGJTZVKCXYGJEOWGTYWIIEVHSTFUVPIYYTDGAFWLBIPFMXECYJCMJXQBUGHOKEJEADFYSKQMSMXKZK");
    msg.value.assign("XXCFSBIZWMSXLZEQVGYOVXBYJSBAWZLGPZBEMWGCUEJNTOJBJCUKLOJQTZFCAMWVZEIGLBPQBGWXSJSYRLISOCGCHICLVEDZLKJKMLRDFMEUSUKDVHOZPFKLWHHAFHTPQNYHINRAAEZAXKQJTLMNVSKBURIGMQWFOTICKTJXDFKWRBPWVNEIGGMYTCDTURNMNUDXRDDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.807160155383);
    msg.setSource(6672U);
    msg.setSourceEntity(156U);
    msg.setDestination(40520U);
    msg.setDestinationEntity(38U);
    msg.name.assign("RPWGUXRGZRIFZWSYPFKDWYCHXQYHBAZSBFQHHDNGQWXWYDTGNJOAQHHDHLFIRJOCFLYLGCUYDEWFXOOVLKJVBFAVCBVEOCPZHDSKCKQVZJMGSOBBURLDEEGZTDEPNWRUXRWNTMLSUDUAIJXMVRIMIZCAIIFPQCWAOUNRMZQKYBNTKCUF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CYDWIIPVUBYRYPBKPOGHHPTWNHMZYRJOHRNQIGIMNMGBEEZFAWBESQMHSEMQYUUOXBCQKJELUTPFVBHRXWZCGTLVDMKLCDDG");
    tmp_msg_0.value.assign("OHDFJTXMKUMIVXDSNWXGSNFULUDQHVEYPSKDTEMCEHIZVOUS");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.843692374008);
    msg.setSource(2526U);
    msg.setSourceEntity(241U);
    msg.setDestination(30407U);
    msg.setDestinationEntity(103U);
    msg.name.assign("XFLXBGYQCWYLICZRYRCGLCGFRFLAPUCHIDTTVMYWSKNWWTZMKYELQSIWPJDVLVMOPHEZCOC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MLNOBEBQXUGSCYYAMHCAQPONPQQATTTLXWAZDONPUDZJTHWFVJPBYUDJPZFIHTMATSIDVGZDWGVTFLQKLGHCVXRHJAKWZPSWJGNVLIYNXCTMOTDBMDPPHRLUDXKYIIMGYNWUESFWUAXZELYQXRNHJFZJRYYEJLSVSYQXWDUKEHWBCAAMTFUOMCKQBABPVDZVKNRVOQEIOSXKRRIWMZBIFEFRMEECRIGLESJNLNUKGBISJZHQFH");
    tmp_msg_0.value.assign("RVJYLPFRHLASYGYNSBQWWFMXWJCIPDZEUSLQGZNQAHUMVJCAVYPQIYDGUADIBREHMJCXKDBNNZRAJIIWGFKEYVHOZZKZYFLOVTEOTMRUOPGLJVPRUHGJZNBUADNHKSAYCDXPTBHCOKJEGIBWMWBZWSQDCSQAPOOCTXMRIIQNATRMTHPIOUVPRLWOO");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.990118458114);
    msg.setSource(30059U);
    msg.setSourceEntity(49U);
    msg.setDestination(9279U);
    msg.setDestinationEntity(157U);
    msg.name.assign("PVVNTRIXTEBJLTEAEOFZLUMWNAUHMVDNJSFWNONYDAXHIWJQXDYAXVURTMTCTJJUSVUYDKYDYEGEKEMDQPBEKZZHPJMEMCSCUZMMSWRPRGRIVPCQQSZUQBLMFPVGIJJWFKGSHUYHWHILXOXDIQODWNFAHFGHXMXNZNIBPA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YLBOYUCWLPKPOVHGQFSKBKEJXBGCJDVHKZIMCSFTEHZTPKXUWXRIYGFBPDYWLNZRVEURDFMHOGQZAAHFPFBDEVESJTUMVZZNWPVKHOLTLOUUJSRSRDUXOTBIEDPDDJMGARONLUVRPEWNWVAJWCCKXWXGCSQNRDPRASCIZUXLBYZRQZPEVNY");
    tmp_msg_0.value.assign("SKWXGHBOBZSMDMBMODOLCVGFFBCNJTRZMKKSPVMQIEGXWUZJIHIWBAQFUUYRISVMFLDIHRVGLXIADDAAYECAYRJJPQDAKJWFFSCACOPRPOWWXE");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.089517225613);
    msg.setSource(20487U);
    msg.setSourceEntity(97U);
    msg.setDestination(56940U);
    msg.setDestinationEntity(226U);
    msg.name.assign("HHJIDVRHJPZNXSAWVMDQWCYXXKNAYTQKNORQZVLYGGFXAZECRELWSVEIYUVPWUFNNIWWLTGTDPDZHGUTFCHTLQBMSKJLSOEVTMHKVUASQKULTMBRLBWKRJMBNJPSUSYJUSPUGLJMBLMOEQGDCIPFZIOHEDLCCIGVVAFHBPAROXKQMXNUTSDZPYBABREWEDGJFQHORFAFRQYGEKXBYNITAFKCKZOPNDZORCQMPWNWMSIXVOBGAOZTDCJZJEIU");
    msg.visibility.assign("MDLNNSZNXLKQHEOHRJCLTURNUPWFZQDDABYXOKJJXVGUORKAGWUFONLVCTESAWECOBBEGXHYIBPTDCGKZJAGNSNKEFJDXEIKZLIXVQPWXYAJLYMSDZBSPCRPOPDMVUQMIZPVEXYSJTFOZQRUTFCBWZUNYFLMIIAUTHGTMXMHKFVOLKKJQEDYLIMMYDWAOHBHSYCUARCIXTIAMPWGOQUEYVDHBPQCSVBNWSGGJNCWGHQRTTRIEFHBFP");
    msg.scope.assign("DNJZVDOHOEWQMAHJJLKUEIXMICIYGVDTCIFWPAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.713500845591);
    msg.setSource(20184U);
    msg.setSourceEntity(188U);
    msg.setDestination(48656U);
    msg.setDestinationEntity(145U);
    msg.name.assign("KLHFYNLBOMFXLNVUCPDTQSYVOYSGPVPCKFHIILYBDRTSNNOKJTAMCMCHSIWWEXXUKNWUHTYUGMGNZVDVEGJLOHEJZORLLGUMGZQSENIUFOJZCONUAQJZQWEMHBMUDLTEPHBBUFFWMVBOQTKDVCEJBBPLZAIFKAGXMSIIFJDTFXRKIITXXGNWCMWYJARPAAJTQYQBDJXZHVPZRWRAWZGREDOPQCKDVHAYWVSOEYQPXLHENFTGRYCR");
    msg.visibility.assign("OZLZONQTLNECTGUMPCUDLRSHYVTXMLPQDUASKNIODTCBFCWEEQGXKVJJROAWJIQESVCEYAHPAGTAH");
    msg.scope.assign("UBPUKNXZYYACNUTKNKINLRWEOKWZBQOREEBHTLMSQBXWUCLJRADLRXOKIIGBCXOUHHTSDLRIJUKALDJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.424415330574);
    msg.setSource(46152U);
    msg.setSourceEntity(215U);
    msg.setDestination(27425U);
    msg.setDestinationEntity(231U);
    msg.name.assign("IKYPPWAJVZTCXETYHPIUBSIQHDKYJYKWJFAXNXVJLOTLARJPPBIWXUQNRKQCKMHERGIFCCUXIJOYZRBAGSJQTNOWMWUTDAPDPFNSUFRHKHGQOGSXUBLMZCLDIABGZHNPDUEVMFAVZQYFKZQWIEHNVYWSATSEOGJSDCVRNGOFXFQZ");
    msg.visibility.assign("OOQCNAJCKGCABVHQEGYUGCWQVLUIKZIUFLCLCFLLXVXDEWJKVNPNPZGEMTWAVGJNCXBEDMDERFQGLIYECUQOXDSRRODNXHYABWDQLZPNRQWOJHEUQKIZFGNXOFUESBJJYTHFRDMYKCYOGZCUSPXAJPXAHUEFVTWRNOS");
    msg.scope.assign("UIXDMPJLDWQVURJAVCVNSPHAVHOSDTYKLDSAHFIUPICCWSYYKLTGRUASYLZFGDXYMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.186593586949);
    msg.setSource(42239U);
    msg.setSourceEntity(29U);
    msg.setDestination(23681U);
    msg.setDestinationEntity(208U);
    msg.name.assign("UAOTMAAJLVNYLDNVPYQXGUFSXKLGCEFMVQWCPSCODTEBGUMQDVFYEQIELAHBSOF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LJAFPVKYENPLARY");
    tmp_msg_0.value.assign("OYVXLJFUVCQFSIUIESPKBAOYKHDGTAFBLIDUYCYRRDBJFQQGSFMWQRLSVBLXRASERIGMUSBLEZERKAZYGXTILVQDELCZSMWSZCNJTACZFMJKUHYBJNZRTGNPSVEPAOAFPNXKXNCCWYVPIJTIFFPUGRDOBVVRWZHNMOHYKZEHPDPWHWDVTYETHOLUIBXHMCNVINJWDKGKDAWWZXGTKPOILOHUNJJSUETXHBOMXTGGRX");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.871503077933);
    msg.setSource(18311U);
    msg.setSourceEntity(81U);
    msg.setDestination(30226U);
    msg.setDestinationEntity(180U);
    msg.name.assign("NBWWXTEDIQZUMLXQTHVLBPMARQMBTWIGOFHFHWOJXJCGZIQLYRNYOZEKPEGXTINMHVKOBDJMLAVPYLDOBWARNELDQICHYJSWYDTZGMZTVENSXFKJQYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.60855367171);
    msg.setSource(10677U);
    msg.setSourceEntity(230U);
    msg.setDestination(32353U);
    msg.setDestinationEntity(127U);
    msg.name.assign("SZBAUZEYMBYCGWFFAUKEEGEKBQZPVDJWMFPGFBIZOROABVLPZGKZXNVURLRWEOLCMYGLPUCDCYBRQVTJJKFMTHDFATGOEEOTHMASCKGWURIQIKPJMKGOJPZLDHANWSVRRDBNFAIWIBXESQKCKCCTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.0417622275392);
    msg.setSource(30250U);
    msg.setSourceEntity(251U);
    msg.setDestination(49105U);
    msg.setDestinationEntity(139U);
    msg.name.assign("RWDVLAGDYZVMPEUOLZEHKXTMGHSREXDGKAHISPFFQRKXQYMFSABPHCZSGTFDHRZVBXIANAETSVTKNYRGUKIACAIUHMFEPEZSQGRFUMBCRPVMILOJTHJOGDELSMCWEZCKOQNYQPNIJAAKNBFQZIJCVHDDVSVWXUVJBOPYULWULYGWXBWWJMFHTVJRMNLDELB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.490120587221);
    msg.setSource(18763U);
    msg.setSourceEntity(44U);
    msg.setDestination(51879U);
    msg.setDestinationEntity(214U);
    msg.name.assign("WUONUJGOALQXGYYMRIHHZQSQLWOEUNSNRVXBEVRBDUPWZCUYISCOBAMYDJOFISZKGNBDMLMUBBMBWZZZUGZXOVULSATPAHSDKGAKDIYFVQLAZFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.696912822387);
    msg.setSource(25101U);
    msg.setSourceEntity(184U);
    msg.setDestination(9626U);
    msg.setDestinationEntity(220U);
    msg.name.assign("TZWGSGMAIUGUXHDONXLNSSGJDPFSTSBYCKVIUXZTDVOYTHDADAEKLCXMICVQGNOXJCKLSKQJJZSHLFWUHEFOCCT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.0756014936704);
    msg.setSource(12485U);
    msg.setSourceEntity(55U);
    msg.setDestination(28841U);
    msg.setDestinationEntity(81U);
    msg.timeout = 1105052830U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.850401249147);
    msg.setSource(22072U);
    msg.setSourceEntity(123U);
    msg.setDestination(16743U);
    msg.setDestinationEntity(173U);
    msg.timeout = 3062805780U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.252514077506);
    msg.setSource(59990U);
    msg.setSourceEntity(233U);
    msg.setDestination(3176U);
    msg.setDestinationEntity(224U);
    msg.timeout = 45302658U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.847409586036);
    msg.setSource(62164U);
    msg.setSourceEntity(36U);
    msg.setDestination(18569U);
    msg.setDestinationEntity(49U);
    msg.sessid = 1788561701U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.919831403482);
    msg.setSource(56279U);
    msg.setSourceEntity(110U);
    msg.setDestination(31585U);
    msg.setDestinationEntity(214U);
    msg.sessid = 2775874412U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.811632891125);
    msg.setSource(37895U);
    msg.setSourceEntity(4U);
    msg.setDestination(19361U);
    msg.setDestinationEntity(169U);
    msg.sessid = 1119810104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.342744379188);
    msg.setSource(19378U);
    msg.setSourceEntity(184U);
    msg.setDestination(5569U);
    msg.setDestinationEntity(45U);
    msg.sessid = 623963932U;
    msg.messages.assign("NDFXLVJUPCZWLDFUWHMUFMDOYUTZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.736440723086);
    msg.setSource(49894U);
    msg.setSourceEntity(195U);
    msg.setDestination(3841U);
    msg.setDestinationEntity(73U);
    msg.sessid = 3293553788U;
    msg.messages.assign("NLCQOOTKFQSCMVFVLGAGFJETNDYSEHVIUSDOIUXRPJHWNJOMSRWZAPWCAQKJZDITSTBOQJMFSKPEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.493680783559);
    msg.setSource(35546U);
    msg.setSourceEntity(158U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(156U);
    msg.sessid = 876538482U;
    msg.messages.assign("NMDPBTUHHPKMYHGFVP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.0124949800112);
    msg.setSource(14231U);
    msg.setSourceEntity(237U);
    msg.setDestination(25455U);
    msg.setDestinationEntity(100U);
    msg.sessid = 551375827U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.177715682327);
    msg.setSource(6941U);
    msg.setSourceEntity(132U);
    msg.setDestination(45139U);
    msg.setDestinationEntity(141U);
    msg.sessid = 1240094843U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.221654462043);
    msg.setSource(52536U);
    msg.setSourceEntity(129U);
    msg.setDestination(45056U);
    msg.setDestinationEntity(169U);
    msg.sessid = 2665092540U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.0237828956131);
    msg.setSource(19140U);
    msg.setSourceEntity(214U);
    msg.setDestination(55041U);
    msg.setDestinationEntity(113U);
    msg.sessid = 4234824393U;
    msg.status = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.583945233276);
    msg.setSource(16432U);
    msg.setSourceEntity(66U);
    msg.setDestination(42506U);
    msg.setDestinationEntity(120U);
    msg.sessid = 1394165154U;
    msg.status = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.895489969281);
    msg.setSource(3522U);
    msg.setSourceEntity(134U);
    msg.setDestination(58144U);
    msg.setDestinationEntity(75U);
    msg.sessid = 3438931288U;
    msg.status = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.79720043739);
    msg.setSource(65151U);
    msg.setSourceEntity(174U);
    msg.setDestination(8083U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ORAKYXWXXT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.450142649184);
    msg.setSource(40913U);
    msg.setSourceEntity(120U);
    msg.setDestination(12242U);
    msg.setDestinationEntity(67U);
    msg.name.assign("EHSFLURIBLJVJGWVHDYCSDNXMKKZCVNNWOLRPEXXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.195321848076);
    msg.setSource(46972U);
    msg.setSourceEntity(98U);
    msg.setDestination(56982U);
    msg.setDestinationEntity(191U);
    msg.name.assign("CFYNUXSDSJGIDFHXUAYBBNYFBNRHXHADXGVQTDUZTKQTQYRPULJQKOXYLYJNVSDEMTHZVJBCDRDWYIGNJIWOEVFQLPRCGHHSEZLEKUTOJVKUTBCDWRLRLWRCIBAKRVPTFXIQAWKBAPMPCOEAJLSNSOSMZGKXUINXCLUCQHZFGPZIAQFTKOZSZUAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.309701874904);
    msg.setSource(35745U);
    msg.setSourceEntity(138U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(94U);
    msg.name.assign("KNPNNXALLKKIMQNBFMLKSURWWGORVPAGBMFDBYKQTDZCVZLHKZDFRXVTFWJHDUQNBPAQOPCVPDKGYVWIUJBYQGURWYLOFNXPIXTTIWSMYAICAXSIJZNWQDRNJXVGNMJVEAP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.000210459241197);
    msg.setSource(42096U);
    msg.setSourceEntity(146U);
    msg.setDestination(17744U);
    msg.setDestinationEntity(21U);
    msg.name.assign("RJJTAWRPYVYGFVMWSDOIRJKGAVBFTFIYQYBSWJOUYEYHOEKIQDHLHUXNOLZUUKHCSAOFKWGEDWLPPQNJTJPXUNIMQTXKZTMGHZCYFHFOSDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.246364383029);
    msg.setSource(64807U);
    msg.setSourceEntity(186U);
    msg.setDestination(63649U);
    msg.setDestinationEntity(70U);
    msg.name.assign("RQUSSONATLKDXXMXBAFIGCPQJFCVYEVEKGRUSGDBQBMGMEHYSTVWAARJBZOHGZSVJBXMFGPDCGRLPNGUFRWJHOPWARCCRYWUNUKCYQBOTMBMOXUKJAZIZDACUHFWLKCENWFBLHJTLOEDIPAHLYWZUFKESPITWZQZYEDHTIXHOMLQGLIWVZROLPXMZPKIDDNAFWRSYOYKCXKFNMGYVICVPVVQJRBQPNAXEQDTUSKOMSEEHZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.379646529619);
    msg.setSource(18047U);
    msg.setSourceEntity(36U);
    msg.setDestination(52390U);
    msg.setDestinationEntity(212U);
    msg.type = 237U;
    msg.error.assign("HFRPLQVCVQNSQXNMFCJFHVIYZUVNXRKDBHUCXBMFAPSEUOGDTPIGWOKHDWKDPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.53696825132);
    msg.setSource(27731U);
    msg.setSourceEntity(188U);
    msg.setDestination(6848U);
    msg.setDestinationEntity(83U);
    msg.type = 41U;
    msg.error.assign("YJZLCPBBRGMNTVXHFOKMBQRIANVROATDSVZMAZSJCWBWCWVZWPBTZJUAEANVQOCFLBCPFOVLKBWTAIRJHNXJIWKPQYVZLRVYFNNPPHZDSTGIIMFDUSMYGKONDDCSMGSBOHXTLCKRIWKECEUVWNZHPLERJMUUOFZFSDJIBYRFSAIHYIELQOHGAZXSYMUQHIETKOVMGUJWQNPMFQXDULPDYQCEYGBGKTKUEXAHGLGXXAWTTXOCERQJEKNJQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.853591537346);
    msg.setSource(19287U);
    msg.setSourceEntity(55U);
    msg.setDestination(43723U);
    msg.setDestinationEntity(141U);
    msg.type = 47U;
    msg.error.assign("LVQVSSMGARGJILNRQOSDZRPCOUCUXTPOWAFKDDYLBPZEHSNWUHDJTMJMRHRNHOKJWBUGEOXVQBYNGRGEGFBIQNJCWCKVPLWFUTUAZZXLAGMMZWAPTIEBZHGPXDZCERNGPXBKIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.402843651778);
    msg.setSource(63932U);
    msg.setSourceEntity(9U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(72U);
    msg.seq = 44090U;
    msg.sys_dst.assign("QBXPZAYDUELJLYLNFVKAIKZQHCUBRAEHQTKYHXBFBNFKYZFTMGJNUJMTEHDEYCWYISFPTDBKAJCMXGLJZXKCNIHUHIBOJIMARCYVRXQBMDNKFPOGCIUEWHRYQKACPAPGDEMQVDVKDPSWQXJTLWVNTOZPRSAXJOCCQSLALESGQMGGUVTFIFNBNSRSVWLSDSMOVFZZMEMEWOOSYILUNRPZVBWGPUIQH");
    msg.flags = 192U;
    const char tmp_msg_0[] = {-92, -49, -64, 24, 1, 5, -44, -112, -104, -39, 39, 41, 97, 43, -92, 73, 59, 54, -119, 24, -29, -72, 16, 101, 39, -99, -10, -8, 49, 48, 103, -4, 20, -35, 58, 80, 105, -65, 85, 15, -81, 125, 37, -95, -60, -7, 60, 37, -122, 12, 68, 50, 75, -7, -91, -86, -94, 118, -79, -27, -65, 94, -44, 52, -80, -68, -80, 98, -85, -127, -107, 66, 28, 56, 117, 80, -64, 63, 17, 93, -80, 114, 88, -59, -127, 15, 34, 2, 49, 8, -75, -42, 38, -74, -113, -46, 118, 13, -57, 14, 78, -77, -127, -91, -108, 11, -26, 45, -44, -119, 94, 83, -104, 33, 24, 125, 106, 85, -113, -76, 87, -40, -8, -122, -23, -71, -54, 104, -105, 86, -12, -65, 122, -15, -14, 78, -116, -69, 29, -119, -11, -26, 58, 93, -20, -109, 0, -12, -122, 66, -9, 46, 3, 126, 24, 7, 71, -126, -9, -105, -70, 84, -34, 34, -66, 37, 126, 27, 21, -30, 125, 21, -16, 64, -92};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.0178077829054);
    msg.setSource(35462U);
    msg.setSourceEntity(237U);
    msg.setDestination(40338U);
    msg.setDestinationEntity(28U);
    msg.seq = 25063U;
    msg.sys_dst.assign("MEWKYVWKVMGXLIBMKOKFILOMCQYLXXLQGFKJBMPQCPHAAYJNFZKPCOEBTHOEYAGUIBNHMBRUHLQZQPURVBDDNXLZTJZPOWFGJJOGRJVXAEDVSGMVFZLJWBQPATYAZEZPSDHDKDUIVTIBOV");
    msg.flags = 249U;
    const char tmp_msg_0[] = {-51, 87, 13, -117, -125, 43, -106, 85, -112, -103, 14, 1, -16, -119, -38, -71, -80, -85, -46, -83, 76, 82, -82, -60, 4, -28, -7, 96, 102, -111, -32, 33, 97, 111, -42, -96, -78, -88, 72, -8, 56, 90, -73, 32, -106, -38, 57, -54, 11, 117, -41, 7, -9, 22, -117, 112, -102, -75, -106, 25, -86, -77, -67, 64, 64, -95, -23, -36, 94, -103, -117, 13, -127, 3, 113, -16, 106, 101, -82, -9, -44, 40, 48, 24, -90, 37, 11, 109, -92, -82, 66, -100, 7, -77, 20, 16, 22, 21, -20, 34, 124, -106, 109, 13, -32, -87, 45, 55, 51, -44, -4, -20, 9, -3, 69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.0915185491058);
    msg.setSource(3600U);
    msg.setSourceEntity(135U);
    msg.setDestination(527U);
    msg.setDestinationEntity(9U);
    msg.seq = 49525U;
    msg.sys_dst.assign("NNNSGZDOLQOCKLJIGXLGXXVIDRWQUBOABRBHWDERSHCFNAPUHQVEULLLCYYHJMQFKNAMYEBHZVOVJTXMMPOUKBCALPAYJ");
    msg.flags = 102U;
    const char tmp_msg_0[] = {-113, 94, -58, 86, -77, 43, -5, 61, 47, 40, 74, -1, -6, 35, 95, -7, 3, -125, 86, 7, -13, -108, 10, 15, -22, 93, 16, 117, 108, -42, 13, 123, 92, 7, 62, -86, -21, -18, 28, -117, -64, -93, 12, 19, -101, 126, 124, -38, -74, 67, 117, 65, 111, -108, 109, 73, 62, 6, 62, -64, -91, -61, -73, -123, 68, 107, -91, -25, 108, -95, 8, 6, -15, 111, 124, 4, -124, 100, -41, 105, 40, -56, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.740060496196);
    msg.setSource(31471U);
    msg.setSourceEntity(247U);
    msg.setDestination(56044U);
    msg.setDestinationEntity(66U);
    msg.sys_src.assign("SKVRIVAKHEIDBKFRPFLUZMEYYMQOSGGEPOVZLNFLHBUXONPAJKQBZBQHIRDKJMZCOXCBOYCKHADVYBFOEUSVDXTERBTADNWFWNWAGTFM");
    msg.sys_dst.assign("AVHYKFYPWCWAILMMSDDDOHCVBGTGJRUEWFRLLNELOGKOKPYBNRDWXLRSPKINIYDLNTTGISFVUPHIKQVNFGHZYKEXFEZKQJVPSBLNUXJHAEZJCFGFROZNUUZCXJUIIVYHFWICMTKOVMXHUQNUAECZCSRKBAXZOQJSVGJPTSYQXBHQADYSWDESQTXNZEFOXSAZETOW");
    msg.flags = 137U;
    const char tmp_msg_0[] = {-60, 74, 125, 21, -109, 17, 31, 103, 67, 17, 78, 113, 79, 44, 59, 116, -45, 32, -63, 121, 64, 98, 50, 46, 41, -92, -104, -18, -94, -40, -49, 14, -29, 12, -52, -49, 67, -68, -64, 14, 64, 79, 62, 38, -35, 109, 0, 112, -12, -44, 106, 12, 121, -92, 114, -119, 64, -65, 77, 20, -17, 64, -83, -90, -27, -7, 22, -103, 13, 81, -29, 105, 9, 8, 7, -53, -28, -60, 49, 112, -101, -34, -108, 100, -35, -110, 57, 14, 38, 57, 67, -93, 119, 120, 61, -39, 107, -21, -79, -125, -98, -83, 63, -56, 37, -76, 73, -118, 113, -15, 50, 81, -70, -91, -83, 15, -70, -47, -20, -34, 71, -73, 51, -84, -11, -108, 54, -104, -41, 56, -65, -35, -25, -30, -116, -101, -119, 8, -30, -52, -68, -96, -6, -44, -124, -128, 50, 55, 15, -10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.296460326317);
    msg.setSource(57951U);
    msg.setSourceEntity(189U);
    msg.setDestination(6038U);
    msg.setDestinationEntity(178U);
    msg.sys_src.assign("GKAZGWYXQJTQNLUCVJBYKRVQNHCZEOBOIBHYZCBNAETDOIUKPMZVQDIVYTPRWNWNLHESIYLUKUCIEIVGAWYPLXHQOKCPDMUXOYRWIQLKJRHNCDZTLUKTQWRAHHAFASRIGFSZVTOVHJPEMCWJFCAMELJBOXEXDKNJSRNOJXPIMRGKVEYUZASTW");
    msg.sys_dst.assign("TFCMPRWQBYBIEFCHDKAOROBNUDLHHSJAOKRDIMHMXECLVQSAZMJXGUVPFCNUCYOTDLWDAOZFREEBHJOQYKYKIDHCBDPPJJQVNUQHWKCWVYKYFTXPVUKXGQLAKETJLZOTXVODECDCPQBSVUMI");
    msg.flags = 229U;
    const char tmp_msg_0[] = {-27, 93, -74, 119, -41, 45, -114, -83, -36, 21, 60, 123, -85, 111, 55, 121, 61, -127, 85, 45, -80, -124, -117, -107, -7, -7, -64, -108, -104, 56, -97, 20, -107, 101, -125, 88, 27, 78, -7, -6, -110, 22, -85, -55, -110, 91, -56, 97, -77, -98, 73, 16, 34, -81, -106, 32, -107, -47, -8, 7, -38, 52, -71, -107, -4, 72, 111, -112, 26, 54, 66, 5, -92, 28, -59, -52, 95, -121, -14, -78, -91, -112, 71, -73, 38, -58, -105, 70, -40, 117, 70, -85, -67, -101, -42, -73, -123, 57, -40, 28, -97, 10, 53, 109, 87, 68, 76, -71, -11, 11, 57, -36, 54, 92, 41, -120, -92, 34, -11, 6, 9, -103, -20, -32, -34, -10, 43, 21, 120, -11, 4, 70, 110, 39, -76, 22, 120, 75, 113, 44, 69, -88, -28, 44, -83, 18, 28, -80, -113, -19, -83, -29, 109, -121, 100, -120, 113, -92, -74, 28, 35, -76, -18, 50, -107, 85, 8, 20, 23, 58, 28, -99, 116, -45, -34, -37, 14, 97, 16, 120, 16, -45, -125, 96, 119, 116, -126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.855617167655);
    msg.setSource(46215U);
    msg.setSourceEntity(15U);
    msg.setDestination(33688U);
    msg.setDestinationEntity(215U);
    msg.sys_src.assign("RXFUMLIFEOKRLZVFOWGBDECPIFWUPSXABLCOSOQCYCODHXPWYBXGHDVFZMBNVUVUBNBQLYWEWUMQTDPMXJSXQPDRVAYXTCLFQJLYAIRIBIQBRMKBKVERAUDLVSVYURFHPTNUZTHYOIZTPNIOICPWIZJYGQDHFCLAE");
    msg.sys_dst.assign("VSWBRIXBOGRCSBGNJGRLHGMGRUJEWZQKLEKJGRXMSLHOHWRPDWFIILNEHOICFZZP");
    msg.flags = 100U;
    const char tmp_msg_0[] = {6, -77, 11, -22, -1, 105, -104, -11, 22, 112, 116, 56, -80, 51, -28, 42, 24, -115, 54, -43, 122, -53, 16, 70, -39, 46, 92, 36, -45, 40, 52, -22, 24, -7, 114, -108, -67, 123, 102, -51, -109, -50, 104, -10, -91, 72, -1, 100, -56, -110, -107, 108, 25, 28, 27, 26, 18, 87, -121, -46, 106, 113, 54, -62, 105, -58, 6, -12, 7, -64, 66, 37, 17, 102, 116, -112, 10, -71, -50, 54, 28, -66, -29, 12, 47, -79, 100, 17, -37, 117, 48, 80, -42, 25, -20, 28, -87, 62, -40, -70, -126, -73, -128, 41, 90, -38, 85, -5, 51, -11, 67, 51, -25, -43, 50, -76, -72, 55, 72, 109, 124, -92, -79, -75, 79, -57, 62, -50, -42, 113, 30, 43, -102, -117, -88, -8, 96, 36, -39, -70, -50, 80, -88, 14, 60, -91, -102, -64, -17, 0, -46, 12, -73, 2, -68, 13, -13, 112, 11, -101, -36, -99, -106, -50, 113, -28, 113, 126, 28, -18, -9, 22, -60, 64, 57, 1, -56, -16, -73, 76, 79, -104, 62, 121, -1, -80, 35, 23, 95, -73, 100, -70, -59, -71, 51, -45, 55, -54, -66, -15, -87};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.670984695515);
    msg.setSource(44103U);
    msg.setSourceEntity(36U);
    msg.setDestination(34738U);
    msg.setDestinationEntity(4U);
    msg.seq = 17534U;
    msg.value = 141U;
    msg.error.assign("PGBSADUMPGYEXPPXQVSRHBLFOMSEULYXGEXAWEFQCJCJHENBHLBUEFJRMXODFCQDSIIKBROPUDUAITWZTSCQWEPGRTARRPRH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.405390146581);
    msg.setSource(3892U);
    msg.setSourceEntity(69U);
    msg.setDestination(9644U);
    msg.setDestinationEntity(59U);
    msg.seq = 21746U;
    msg.value = 168U;
    msg.error.assign("QIWZIKEZFUQOPCTPFIJDOQDJQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.780857786438);
    msg.setSource(41201U);
    msg.setSourceEntity(230U);
    msg.setDestination(49845U);
    msg.setDestinationEntity(80U);
    msg.seq = 25148U;
    msg.value = 225U;
    msg.error.assign("EDGBEMMVTRGAHDYKNOYARNJVWIRUHKXMLWZWPHMOWYBWFSTAWXPTUXEAFHDXKFQJONIQJCVKYRLPYPJAICEWNVQMRGZXGZEXUSLZJLVQTFUDLBLNUNBEDLRXQROJSMNAPZMWSQIBDCPJKGYBIQXHNQEGWNBOWARTZILPSHGTMFUFAMFICKEYVCVZRUTMKEKSPCDJQXBGHAIJOHPJRKLIUQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.416964647727);
    msg.setSource(36351U);
    msg.setSourceEntity(31U);
    msg.setDestination(37204U);
    msg.setDestinationEntity(147U);
    msg.seq = 3793U;
    msg.sys.assign("XTKXELBPAIUTZJBWXOCFT");
    msg.value = 0.542454600666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.504824016388);
    msg.setSource(35307U);
    msg.setSourceEntity(203U);
    msg.setDestination(34873U);
    msg.setDestinationEntity(189U);
    msg.seq = 63238U;
    msg.sys.assign("ZUQITSGJRFQGNGQGEBWUMJXPTVHNCJWWCOKPAMLPMRIYQTBDQCHKFYVNUJQJEANBTZOEGLMFPVQUINZRWSNFOGHDWLSRBKVHOAWLUVRVOSN");
    msg.value = 0.892163018666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.927197746198);
    msg.setSource(56725U);
    msg.setSourceEntity(247U);
    msg.setDestination(50255U);
    msg.setDestinationEntity(114U);
    msg.seq = 8164U;
    msg.sys.assign("JOTXRSBJFTYQVKPRSSVTHKBIBKRYZIUYCDQCLADFNMGQUPORFVGTVEWXREGBSOCILUMYXXZEFLMDFMCDWKFJIGZLNGGRQEEMJMUTCGMIYHKLSVQDHIUPNAZXRYAWAPEBUAJUQFHAZNUTSFCHSDYSIQDAJWJDZVPXJIVOCPXKEQWCYNEWAXANOEVHOVJSMDGYBWHLLVOZMRHNTBWFPWHQKHFNNBEICRPT");
    msg.value = 0.827866891325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.383413599917);
    msg.setSource(28657U);
    msg.setSourceEntity(8U);
    msg.setDestination(38436U);
    msg.setDestinationEntity(37U);
    msg.action = 216U;
    msg.longain = 0.0784481575151;
    msg.latgain = 0.199431666461;
    msg.bondthick = 1714537025U;
    msg.leadgain = 0.112208240535;
    msg.deconflgain = 0.680286705299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.237764334197);
    msg.setSource(13113U);
    msg.setSourceEntity(36U);
    msg.setDestination(9333U);
    msg.setDestinationEntity(186U);
    msg.action = 148U;
    msg.longain = 0.464580219365;
    msg.latgain = 0.644865106702;
    msg.bondthick = 1954494931U;
    msg.leadgain = 0.576866201286;
    msg.deconflgain = 0.885679757221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.918630640226);
    msg.setSource(63172U);
    msg.setSourceEntity(4U);
    msg.setDestination(2210U);
    msg.setDestinationEntity(185U);
    msg.action = 178U;
    msg.longain = 0.11394658817;
    msg.latgain = 0.189614586171;
    msg.bondthick = 3606714825U;
    msg.leadgain = 0.94446273942;
    msg.deconflgain = 0.831025415137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.835417908639);
    msg.setSource(30750U);
    msg.setSourceEntity(101U);
    msg.setDestination(25197U);
    msg.setDestinationEntity(150U);
    msg.err_mean = 0.854817637125;
    msg.dist_min_abs = 0.130737209881;
    msg.dist_min_mean = 0.0628574105782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.567706856557);
    msg.setSource(49544U);
    msg.setSourceEntity(25U);
    msg.setDestination(1117U);
    msg.setDestinationEntity(230U);
    msg.err_mean = 0.636735475788;
    msg.dist_min_abs = 0.109401029318;
    msg.dist_min_mean = 0.228004501154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.614430030491);
    msg.setSource(58949U);
    msg.setSourceEntity(194U);
    msg.setDestination(56488U);
    msg.setDestinationEntity(122U);
    msg.err_mean = 0.114155330757;
    msg.dist_min_abs = 0.59764398085;
    msg.dist_min_mean = 0.938558139145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.393667366586);
    msg.setSource(9604U);
    msg.setSourceEntity(79U);
    msg.setDestination(45970U);
    msg.setDestinationEntity(166U);
    msg.action = 245U;
    msg.lon_gain = 0.480014414947;
    msg.lat_gain = 0.709418578388;
    msg.bond_thick = 0.222725099183;
    msg.lead_gain = 0.971763868784;
    msg.deconfl_gain = 0.847265845421;
    msg.accel_switch_gain = 0.409742399753;
    msg.safe_dist = 0.446653075434;
    msg.deconflict_offset = 0.691308928953;
    msg.accel_safe_margin = 0.0928283667107;
    msg.accel_lim_x = 0.247102144173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.627743513367);
    msg.setSource(54379U);
    msg.setSourceEntity(29U);
    msg.setDestination(53586U);
    msg.setDestinationEntity(5U);
    msg.action = 254U;
    msg.lon_gain = 0.253331138733;
    msg.lat_gain = 0.601912544353;
    msg.bond_thick = 0.360756287825;
    msg.lead_gain = 0.530467687796;
    msg.deconfl_gain = 0.135624794683;
    msg.accel_switch_gain = 0.674127204693;
    msg.safe_dist = 0.832329143499;
    msg.deconflict_offset = 0.673019416926;
    msg.accel_safe_margin = 0.00360648042535;
    msg.accel_lim_x = 0.671362470119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.484450600069);
    msg.setSource(57502U);
    msg.setSourceEntity(85U);
    msg.setDestination(48619U);
    msg.setDestinationEntity(23U);
    msg.action = 71U;
    msg.lon_gain = 0.726544556904;
    msg.lat_gain = 0.7649138699;
    msg.bond_thick = 0.063724137717;
    msg.lead_gain = 0.0701492772598;
    msg.deconfl_gain = 0.25728223835;
    msg.accel_switch_gain = 0.570580115728;
    msg.safe_dist = 0.0722375710781;
    msg.deconflict_offset = 0.72125360707;
    msg.accel_safe_margin = 0.299635786726;
    msg.accel_lim_x = 0.560645280619;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.538787539594);
    msg.setSource(23781U);
    msg.setSourceEntity(6U);
    msg.setDestination(45403U);
    msg.setDestinationEntity(93U);
    msg.type = 104U;
    msg.op = 130U;
    msg.err_mean = 0.0453749597518;
    msg.dist_min_abs = 0.965862955485;
    msg.dist_min_mean = 0.216166187934;
    msg.roll_rate_mean = 0.614859595947;
    msg.time = 0.806120592783;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 101U;
    tmp_msg_0.lon_gain = 0.35015502526;
    tmp_msg_0.lat_gain = 0.33496684541;
    tmp_msg_0.bond_thick = 0.324456565809;
    tmp_msg_0.lead_gain = 0.466644811895;
    tmp_msg_0.deconfl_gain = 0.0178277842147;
    tmp_msg_0.accel_switch_gain = 0.677492966934;
    tmp_msg_0.safe_dist = 0.995675518934;
    tmp_msg_0.deconflict_offset = 0.865024442919;
    tmp_msg_0.accel_safe_margin = 0.354242276535;
    tmp_msg_0.accel_lim_x = 0.415129843386;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.432695338854);
    msg.setSource(56249U);
    msg.setSourceEntity(136U);
    msg.setDestination(37908U);
    msg.setDestinationEntity(24U);
    msg.type = 150U;
    msg.op = 193U;
    msg.err_mean = 0.61953674865;
    msg.dist_min_abs = 0.560214335559;
    msg.dist_min_mean = 0.975972963992;
    msg.roll_rate_mean = 0.0687071642338;
    msg.time = 0.399614683338;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 72U;
    tmp_msg_0.lon_gain = 0.419553642119;
    tmp_msg_0.lat_gain = 0.741515774192;
    tmp_msg_0.bond_thick = 0.148359320671;
    tmp_msg_0.lead_gain = 0.476085345833;
    tmp_msg_0.deconfl_gain = 0.229886313354;
    tmp_msg_0.accel_switch_gain = 0.582703286844;
    tmp_msg_0.safe_dist = 0.469102638541;
    tmp_msg_0.deconflict_offset = 0.745568369204;
    tmp_msg_0.accel_safe_margin = 0.143396557939;
    tmp_msg_0.accel_lim_x = 0.243649475672;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.477948448141);
    msg.setSource(21322U);
    msg.setSourceEntity(247U);
    msg.setDestination(3684U);
    msg.setDestinationEntity(27U);
    msg.type = 104U;
    msg.op = 223U;
    msg.err_mean = 0.558149993549;
    msg.dist_min_abs = 0.733132531716;
    msg.dist_min_mean = 0.447114570305;
    msg.roll_rate_mean = 0.666630404753;
    msg.time = 0.761232397151;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 146U;
    tmp_msg_0.lon_gain = 0.580604444668;
    tmp_msg_0.lat_gain = 0.0182955755635;
    tmp_msg_0.bond_thick = 0.454615711353;
    tmp_msg_0.lead_gain = 0.637091909629;
    tmp_msg_0.deconfl_gain = 0.082893417372;
    tmp_msg_0.accel_switch_gain = 0.874691223009;
    tmp_msg_0.safe_dist = 0.802214198077;
    tmp_msg_0.deconflict_offset = 0.122371005249;
    tmp_msg_0.accel_safe_margin = 0.209594851181;
    tmp_msg_0.accel_lim_x = 0.834741929433;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.950369170184);
    msg.setSource(6121U);
    msg.setSourceEntity(174U);
    msg.setDestination(4774U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.0873712326829;
    msg.lon = 0.580945450944;
    msg.eta = 396627671U;
    msg.duration = 7926U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.0609112537256);
    msg.setSource(2126U);
    msg.setSourceEntity(208U);
    msg.setDestination(60110U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.545557155143;
    msg.lon = 0.539818737849;
    msg.eta = 644851152U;
    msg.duration = 57700U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.674198538341);
    msg.setSource(36245U);
    msg.setSourceEntity(96U);
    msg.setDestination(57575U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.27957749495;
    msg.lon = 0.237441856007;
    msg.eta = 3523937272U;
    msg.duration = 14899U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.340206137653);
    msg.setSource(40139U);
    msg.setSourceEntity(211U);
    msg.setDestination(21254U);
    msg.setDestinationEntity(32U);
    msg.plan_id = 60581U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.276801095721);
    msg.setSource(2155U);
    msg.setSourceEntity(30U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(69U);
    msg.plan_id = 6793U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.7178560995;
    tmp_msg_0.lon = 0.373478995726;
    tmp_msg_0.eta = 3439977970U;
    tmp_msg_0.duration = 47999U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.288510448206);
    msg.setSource(49123U);
    msg.setSourceEntity(168U);
    msg.setDestination(55822U);
    msg.setDestinationEntity(18U);
    msg.plan_id = 47810U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0776169811695;
    tmp_msg_0.lon = 0.148300878324;
    tmp_msg_0.eta = 1222979570U;
    tmp_msg_0.duration = 39751U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.126935089769);
    msg.setSource(55908U);
    msg.setSourceEntity(118U);
    msg.setDestination(40763U);
    msg.setDestinationEntity(162U);
    msg.type = 179U;
    msg.command = 248U;
    msg.settings.assign("HWVXRVJGRLMRWLJRSCSRZJACBKNXHWOXPHKDBXXDKWSNVSOLCTDMBLHHNTJSU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25408U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0930152978392;
    tmp_tmp_msg_0_0.lon = 0.75836870129;
    tmp_tmp_msg_0_0.eta = 2010916318U;
    tmp_tmp_msg_0_0.duration = 7788U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WYSBMFCDECLUQVYNSJLOMPAENLGTALKCFGQXJVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.300014176606);
    msg.setSource(57255U);
    msg.setSourceEntity(44U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(75U);
    msg.type = 27U;
    msg.command = 175U;
    msg.settings.assign("ESCVOHFDKPGOAQIUDXIKMTOWFYMLJLZEWCYCNJKEVMFPSRVKYDKNBZEHTNWAAFQPMVSWJHAWVBLVBAOGZTTVCIABPWZXBWNPNDUYGPCJCJRUORKMNCTIGNOLSHXYUGLQULQSNQSKBHRUHROBRJTKXIFYRLSBX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16386U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AUCMUUKVPYGFAHCRMKRXFVKEIUBJIQYQNFDJWKJAUWOWWIDYLGHLFCCFZRHGZQBOEXBAGTNYRDWZJOVRITIAQCLYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.639412738043);
    msg.setSource(1431U);
    msg.setSourceEntity(74U);
    msg.setDestination(21570U);
    msg.setDestinationEntity(220U);
    msg.type = 128U;
    msg.command = 90U;
    msg.settings.assign("YVTRGSPJQCNTJPLDMIRYVXKKOGLBNEDOGHJLRNVIQWGVCAZPGBNFXAPUSMM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59307U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SILOMYKEIONYZNBZHZFXLHVAWCTMSAVBVPHJRXWUZKZWFLPIZKXRDCLHMCOUWGJNYDBHFRNQBYUQSKKJXUCTMXWODDXVICQHRUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.011114277281);
    msg.setSource(8195U);
    msg.setSourceEntity(30U);
    msg.setDestination(1796U);
    msg.setDestinationEntity(9U);
    msg.state = 162U;
    msg.plan_id = 36891U;
    msg.wpt_id = 87U;
    msg.settings_chk = 13641U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.493936736338);
    msg.setSource(9524U);
    msg.setSourceEntity(121U);
    msg.setDestination(57648U);
    msg.setDestinationEntity(30U);
    msg.state = 32U;
    msg.plan_id = 22456U;
    msg.wpt_id = 24U;
    msg.settings_chk = 45078U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.806681319891);
    msg.setSource(30404U);
    msg.setSourceEntity(107U);
    msg.setDestination(44458U);
    msg.setDestinationEntity(217U);
    msg.state = 135U;
    msg.plan_id = 41507U;
    msg.wpt_id = 192U;
    msg.settings_chk = 13343U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.649078931502);
    msg.setSource(26652U);
    msg.setSourceEntity(207U);
    msg.setDestination(15117U);
    msg.setDestinationEntity(106U);
    msg.uid = 78U;
    msg.frag_number = 84U;
    msg.num_frags = 189U;
    const char tmp_msg_0[] = {-68, 59, 45, -75, 10, 26, -97, 6, 0, -83, -4, 44, 79, -104, -86, 23, 22, 26, -37, -116, 84, 79, 31, 66, 106, 20, 4, -65, -27, 39, -32, 9, 98, -112, 92, -23, -125, 77, 87, 101, -36, -54, 89, -77, 83, 57, -11, 23, -85, -85, -43, -101, 121, -20, 76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.347403206809);
    msg.setSource(36922U);
    msg.setSourceEntity(59U);
    msg.setDestination(53549U);
    msg.setDestinationEntity(218U);
    msg.uid = 178U;
    msg.frag_number = 239U;
    msg.num_frags = 15U;
    const char tmp_msg_0[] = {-42, -105, 114, -119, -106, -36, -119, 23, -102, 68, -117, 90, -14, -83, 89, -123, 72, 100, -41, 105, 24, -54, 100, -91, -8, -7, -27, -24, -123, 124, 47, -122, -125, 62, 113, -45, -67, 39, 35, -107, -117, -71, 30, -67, -47, -63, 1, -68, 55, 27, -53, 34, 57, -43, 15, 83, -123, 14, 51, 18, -49, 109, -33, -27, 95, -57, -63, 96, -84, -69, 49, 102, -108, -110, -4, -58, 115, -38, -99, 36, -93, 37, 73, -68, -79, -26, 6, -117, -43, 33, -10, 48, -25, -101, 12, -86, -13, 17, -106, -77, 12, -107, -11, 111, 35, -30, -64, 43, -50, 56, 52, -118, 23, 35, 89, -94, -85, -63, -64, -42, -45, 124, 105, 19, -7, -107, 36, -37, -53, -17, -39, 96, -113, -100, 65, -86, 86, 57, 101, 40, 125, -85, -11, -96, 102, 1, -95, 22, -117, -46, 2, -73, 59, -59, -26, -51, 48, 40, 121, -59, 6, 4, -94, -78, -109, -67, -80, -42, 92, -32, -101, -12, -112, 89, -90, -16, 40, 50, -51, 64, -50, -80, -57, 20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.875718209721);
    msg.setSource(39396U);
    msg.setSourceEntity(68U);
    msg.setDestination(52722U);
    msg.setDestinationEntity(30U);
    msg.uid = 78U;
    msg.frag_number = 6U;
    msg.num_frags = 115U;
    const char tmp_msg_0[] = {-106, 114, 118, -58, -26, 28, 5, 71, -26, -77, -3, 72, 20, 122, 84, 102, 24, 72, -4, 118, 58, -117, -60, 14, -23, 49, 74, -25, 103, 77, 30, -76, 17, -7, -82, -74, -6, 29, 19, -70, -79, -92, -47, 126, 5, -101, -23, -7, 42, -120, 13, -128, -30, 14, 96, 44, -73, -69, -106, 41, 87, -35, -92, -120, -94, -50, 108, -36, 41, -41, -39, -38, -116, 111, -113, -43, -106, 36, -28, -1, 94, 87, 16, 34, -73, 95, 61, -87, -78, -123, -1, 103, 7, 47, 1, 14, 103, 59, -79, 8, 53, 120, 114, -82, -55, 64, -125, 23, -11, 101, -29, 123, -19, 24, -26, -67, -12, 109, -113, 44, -114, 126, -111, 49, 120, 74, 109, 63, 106, -26, 86, 111, -20, -63, 40, -90, -16, 115, -47, -47, 103, 116, -63, 58, -82, 52, 66, 50, 69, 13, -122, -105, -51, 86, -13, -24, -7, 35, 28, 82, 5, 88, -86, -70, 122, 90, 36, -41, -2, 109, -30, 111, -55, 79, 43, -18, -3, -15, 32, 49, -13, -28, -92, 48, -32, -92, 119, -31, 24, 88, 52, 75, -119, 45, 15, -98, -14};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.648030712319);
    msg.setSource(34996U);
    msg.setSourceEntity(20U);
    msg.setDestination(9444U);
    msg.setDestinationEntity(215U);
    msg.content_type.assign("GTCERPAUXCMCFBNVSGKRTYIFVOBJXLHJMY");
    const char tmp_msg_0[] = {-124, -71, -79, 94, -11, -12, 83, -20, 28, -19, -91, -62, 88, -87, 7, 55, -50, -12, -121, 43, -52, 59, -97, -17, -122, 123, -52, -7, 53, 46, 54, 76, 64, -49, -108, 63, 75, 6, -83, -15, 60, -126, 42, 21, 61, -9, -45, 20, -37, 89, 123, 82, -65, 49, 1, -42, -119, 120, 35, -38, -112, -49, -108, 25, 64, -35, -80, -3, -23, 19, -73, -58, -79, 94, -108, -80, -10, -100, -73, -2, 122, -21, -29, 18, 31, -107, 119, 48, -60, 34, 23, 34, -75, 78, 52, 23, -81, 64, -103, 87, 86, 57, -115, 5, 102, 39, 124, -80, 22, 54, 39, -82, 81, -2, 87, 96, -47, 96, 95};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.965380080642);
    msg.setSource(16978U);
    msg.setSourceEntity(68U);
    msg.setDestination(53314U);
    msg.setDestinationEntity(112U);
    msg.content_type.assign("BAXEKKAYJNQIKQXATLDJVOJGLUXMDIWQBPRONUSNWZXUBQMZUZHSEZCB");
    const char tmp_msg_0[] = {-76, -14, 70, 85, 33, 126, 99, -59, -77, -42, 15, 111, -105, -102, 26, 58, -23, -4, -1, -104, -21, -122, 40, -125, -126, -65, -42, 88, 45, -62, -53, 47, 113, -43, 43, -44, 50, 20, 95, 106, -6, -118, 37, -8, 61, 60, 87, -14, 107, 37, 89, -64, 30, -126, -60, -127, 82, -14, 63, -30, 59, -78, 29, -48, 26, 52, 37, -18, -4, -34, 21, 115, 7, 4, -117, -13, -48, 32, 10, 80, -5, -42, 72, 43, -79, 81, 26, 97, 16, -53, 40, -67, 17, -99, 27, 87, -60, -13, -26, 31, -11, -115, 49, 59, -27, -57, 42, 99, -46, -80, 98, -114, 67, 111, -90, 103, -4, -123, 92, 116, 46, 24, -90, -109, -32, -63, 40, 31};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.735020550723);
    msg.setSource(15885U);
    msg.setSourceEntity(244U);
    msg.setDestination(50799U);
    msg.setDestinationEntity(47U);
    msg.content_type.assign("XGSCSIRLKUKJYFWDBILWGGXEJHMSPQWWBVLULKOUMOEQKVFAULXEEUASISDFZENOCDVEGEKEBPJQRYAGARMNCROVKXHWONDINQCDTJHML");
    const char tmp_msg_0[] = {48, -121, -42, 56, -45, -48, -38, 67, -84, -54, -69, 4, 91, 45, -82, -75, 113, 88, -45, -58, 73, 3, 23, -95, -122, 115, 75, -54, -21, -20, 16, -47, 92, 37, -23, 64, 118, 48, -50, -99, 69, 37, -35, 113, -97, 63, 123, -121, -39, 107, 9, 49, 24, -109, -41, -29, 7, -11, 38, -77, 78, -63, 7, -73, 73, -68, -121, -100, 49, -9, 89, -89, -64, -8, 12, 122, -9, -71, -27, -93, -80, 25, -76, -97, 18, 119, 2, 86, -75, -52, 94, 28, 2, -106, -93, -36, 110, -98, -115, -27, 115, -66, 95, -56, 45, 90, -103, -63, -102, -80, 74, -62, 49, -103, 110, 69, -116, 75, 58, 2, 23, -31, -114, -21, 81, -99, -112, 123, 114, 113, -84, 85, 93, -61, -127, -3, 81, 13, 40};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.87939753882);
    msg.setSource(32735U);
    msg.setSourceEntity(203U);
    msg.setDestination(49062U);
    msg.setDestinationEntity(252U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.175493636784);
    msg.setSource(20569U);
    msg.setSourceEntity(189U);
    msg.setDestination(39872U);
    msg.setDestinationEntity(120U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.886809560526);
    msg.setSource(35204U);
    msg.setSourceEntity(109U);
    msg.setDestination(29014U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.375462209096);
    msg.setSource(8070U);
    msg.setSourceEntity(10U);
    msg.setDestination(57406U);
    msg.setDestinationEntity(61U);
    msg.target = 28793U;
    msg.bearing = 0.00070310826258;
    msg.elevation = 0.954455981974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.775389057398);
    msg.setSource(24343U);
    msg.setSourceEntity(42U);
    msg.setDestination(30300U);
    msg.setDestinationEntity(197U);
    msg.target = 12794U;
    msg.bearing = 0.828457798075;
    msg.elevation = 0.511799383523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.606011213604);
    msg.setSource(19796U);
    msg.setSourceEntity(49U);
    msg.setDestination(59755U);
    msg.setDestinationEntity(123U);
    msg.target = 1929U;
    msg.bearing = 0.146077178645;
    msg.elevation = 0.723946739863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.875453618037);
    msg.setSource(57557U);
    msg.setSourceEntity(143U);
    msg.setDestination(41214U);
    msg.setDestinationEntity(34U);
    msg.target = 5258U;
    msg.x = 0.135122060851;
    msg.y = 0.784499924225;
    msg.z = 0.749741958255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.0422781346575);
    msg.setSource(30329U);
    msg.setSourceEntity(81U);
    msg.setDestination(13411U);
    msg.setDestinationEntity(151U);
    msg.target = 20968U;
    msg.x = 0.454545431124;
    msg.y = 0.270662197856;
    msg.z = 0.954210064118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.401915908648);
    msg.setSource(26061U);
    msg.setSourceEntity(149U);
    msg.setDestination(38284U);
    msg.setDestinationEntity(110U);
    msg.target = 28163U;
    msg.x = 0.728963717354;
    msg.y = 0.445089233563;
    msg.z = 0.311277597864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.940764860968);
    msg.setSource(39955U);
    msg.setSourceEntity(138U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(14U);
    msg.target = 30329U;
    msg.lat = 0.510899817377;
    msg.lon = 0.501610867521;
    msg.z_units = 123U;
    msg.z = 0.508959931307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.932035149147);
    msg.setSource(29793U);
    msg.setSourceEntity(177U);
    msg.setDestination(8328U);
    msg.setDestinationEntity(71U);
    msg.target = 15006U;
    msg.lat = 0.805108130796;
    msg.lon = 0.505583636295;
    msg.z_units = 165U;
    msg.z = 0.0639283361095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.585617316376);
    msg.setSource(15382U);
    msg.setSourceEntity(101U);
    msg.setDestination(29575U);
    msg.setDestinationEntity(254U);
    msg.target = 37300U;
    msg.lat = 0.442132045758;
    msg.lon = 0.376155859145;
    msg.z_units = 53U;
    msg.z = 0.45490446472;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.57397334053);
    msg.setSource(31856U);
    msg.setSourceEntity(55U);
    msg.setDestination(63100U);
    msg.setDestinationEntity(46U);
    msg.locale.assign("VDMSWFTHIJVWQDZXZFDCYVHZOTPVDFXHLHZUERMXQZUXXYMKBSHLBAYBPRHISEQXNDCRGQBITRJSOCYWTCVNNBRHAMXYCIDJEJBKHICRLZIOEGDPAVUWFDJMTTE");
    const char tmp_msg_0[] = {8, -49, -4, -80, 18, 66, -50, 99, -38, -45, 115, 70, -43, -69, -100, -17, 35, -117, -16, 4, 99, -18, 84, -43, 6, 33, -75, 119, -87, -57, -93, -91, 66, -104, 86, 83, -2, -17, -103, -113, 10, -5, -91, -7, -12, -44, 126, 55, 120, -73, -120, 31, 46, -112, -102, -101, -86, -78, -50, 1, 85, 90, -53, 91, -122, 28, 25, -48, 101, 65, -91, -68, -30, -114, -50, -89, 75, -8, -57, -64, 103, -7, 56, -98, 33, -53, 23, -8, 117, 97, 48, -22, -121, 92, 111, 75, 15, 107, 20, 39, 91, -114, 18, -32, 124, 26, -73, -38, -11, 83, 74, -35, -79, -101, -74, -7, -38, 52, -128, 59, 12, 24, -3, 61, 119, 9, -42, -33, 30, -65, -125, -16, 54, -96, 84, 52, -19, 50, 76, 45, 16, -58, -17, -93, 89, -10, 29, -68, -92, 123, 112, 87, 23, 53, 104, -26, -73, 96, 64, -73, -113};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.503207221677);
    msg.setSource(28592U);
    msg.setSourceEntity(22U);
    msg.setDestination(31439U);
    msg.setDestinationEntity(45U);
    msg.locale.assign("YFJSBSLDSIAVFEZQAEDIWPQLJHUXENCMXSZMURWWQDYUHPHAFOKUBTCUJOGDRDLAKPRKAATGWHNYYXPBZMHZRMBSITTKVQVLTKISFQNRI");
    const char tmp_msg_0[] = {-63, 0, -84, -119, -119, 30, 53, 32, 60, 43, 99, -68, 43, -60, 108, 74, -115, 75, 60, 123, -113, -88, 80, 93, -90, -79, -61, -29, -28, -44, -34, -17, 110, 67, -7, -33, -7, -9, 110, 53, -43, -41, 44, 57, 16, 22, 67, 33, 37, -117, 81, -36, 17, -74, -23, -39, 22, -57, 28, -72, 78, -91, 105, -68, 105, 23, 66, -118, -12, 25, 56, 66, -15, -79, 17, -16, 115, -62, -94, -30, 41, -110, 1, -34, -48};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.859699667864);
    msg.setSource(336U);
    msg.setSourceEntity(248U);
    msg.setDestination(40990U);
    msg.setDestinationEntity(11U);
    msg.locale.assign("IETZRRTXBRHAKFNOVIQLGW");
    const char tmp_msg_0[] = {-65, -68, -36, -116, 88, -110, -123, 125, 113, -128, 40, 126, 58, 86, -55, 54, -101, 124, -49, 104, -109, 44, 68, 58, -61, -24, 76, 58, 34, -112, 107, -47, -37, 37, 10, -58, -30, 35, -110, -118, -94, -25, -109, -119, 64, -37, 55, -72, 23, 76, 72, 50, 15, 13, 48, 78, -102, -109, -14, 9, -68, -89, 5, 64, -123, 63, -48, -50, -70, 92, 6, -89, -80, -45, 45, -119, -123, -67, 18, -24, -89, 80, -45, -72, -66, 46, -46, -37, -94, -125, -83, -66, -83, 110, -91, -118, -52, -33, 34, -89, 106, 63, 12, 28, -128, -101, -48, -112, -64, -49, -84, 13, 125, 125, -121, 18, 116, 30, -16, 42, 43, 52, -62, 50, 53, 57, -39, 105, 51, 0, 8, 87, 61, -48, 11, -112, -70, -13, 81, 40, -126, 71, -73, 61, 71, -89, 26, 86, -31, 41, -99, -29, -58, 5, -28, 85, -109, 19, 40, -34, 54, 76, -67, 5, 114, 97, -102, -47, 69, 100};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.643243494157);
    msg.setSource(42563U);
    msg.setSourceEntity(128U);
    msg.setDestination(29658U);
    msg.setDestinationEntity(127U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.224002512449);
    msg.setSource(31639U);
    msg.setSourceEntity(34U);
    msg.setDestination(23876U);
    msg.setDestinationEntity(221U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.90797516673);
    msg.setSource(6942U);
    msg.setSourceEntity(0U);
    msg.setDestination(23114U);
    msg.setDestinationEntity(56U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.206261076633);
    msg.setSource(44964U);
    msg.setSourceEntity(231U);
    msg.setDestination(5772U);
    msg.setDestinationEntity(109U);
    msg.camid = 53U;
    msg.x = 7771U;
    msg.y = 54243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.819544616519);
    msg.setSource(62655U);
    msg.setSourceEntity(160U);
    msg.setDestination(64957U);
    msg.setDestinationEntity(151U);
    msg.camid = 90U;
    msg.x = 63770U;
    msg.y = 33563U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.155266543215);
    msg.setSource(12654U);
    msg.setSourceEntity(155U);
    msg.setDestination(13900U);
    msg.setDestinationEntity(108U);
    msg.camid = 248U;
    msg.x = 20572U;
    msg.y = 15144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.0790346329844);
    msg.setSource(42169U);
    msg.setSourceEntity(145U);
    msg.setDestination(55211U);
    msg.setDestinationEntity(181U);
    msg.camid = 100U;
    msg.x = 31499U;
    msg.y = 10344U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.765062591746);
    msg.setSource(59570U);
    msg.setSourceEntity(41U);
    msg.setDestination(6781U);
    msg.setDestinationEntity(54U);
    msg.camid = 120U;
    msg.x = 18917U;
    msg.y = 61624U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.0667518190173);
    msg.setSource(13513U);
    msg.setSourceEntity(253U);
    msg.setDestination(43178U);
    msg.setDestinationEntity(199U);
    msg.camid = 34U;
    msg.x = 49207U;
    msg.y = 55587U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.904241934064);
    msg.setSource(63034U);
    msg.setSourceEntity(9U);
    msg.setDestination(29081U);
    msg.setDestinationEntity(39U);
    msg.tracking = 149U;
    msg.lat = 0.0116102377527;
    msg.lon = 0.502782094301;
    msg.x = 0.0710586028235;
    msg.y = 0.159905915905;
    msg.z = 0.749198969967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.404353432569);
    msg.setSource(15291U);
    msg.setSourceEntity(157U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(186U);
    msg.tracking = 202U;
    msg.lat = 0.188761850225;
    msg.lon = 0.542394793539;
    msg.x = 0.877984643056;
    msg.y = 0.676706537694;
    msg.z = 0.425005415144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.142463349468);
    msg.setSource(32656U);
    msg.setSourceEntity(94U);
    msg.setDestination(5785U);
    msg.setDestinationEntity(50U);
    msg.tracking = 149U;
    msg.lat = 0.425798605089;
    msg.lon = 0.0799772639003;
    msg.x = 0.856035677846;
    msg.y = 0.150135020535;
    msg.z = 0.730636299544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.0269812245444);
    msg.setSource(53938U);
    msg.setSourceEntity(244U);
    msg.setDestination(36910U);
    msg.setDestinationEntity(242U);
    msg.target.assign("JTIGRTBEUCCPQMENYKGFXFDIHBKEPHTQOAJFICNIESRYBQUOOBQZXZFDPDSKIFYVPALLETWMAWHNRTBGWTXFVIWQOUGMIZYYDCAJZPZHYUJNCAAZMSXIOCKVTDKHLVESKXFREQLOEMWCZGHMBHPBSXGKRTLUWQLPQELJAELNOWUMMGTUSVWTXYRDAZVNSNFZLHVBPBVRWXIQSYKRMJJODHRDIOBG");
    msg.lbearing = 0.789950670805;
    msg.lelevation = 0.939535904904;
    msg.bearing = 0.449627287979;
    msg.elevation = 0.249327815195;
    msg.phi = 0.765010991067;
    msg.theta = 0.49242844981;
    msg.psi = 0.32191999021;
    msg.accuracy = 0.430876625639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.570805816037);
    msg.setSource(52670U);
    msg.setSourceEntity(8U);
    msg.setDestination(18998U);
    msg.setDestinationEntity(106U);
    msg.target.assign("EHVSXEISLNYCOAICFIDZDIXMLXPQRB");
    msg.lbearing = 0.258309280104;
    msg.lelevation = 0.604031783106;
    msg.bearing = 0.220807535933;
    msg.elevation = 0.463138049911;
    msg.phi = 0.455351708211;
    msg.theta = 0.581206689611;
    msg.psi = 0.434650989039;
    msg.accuracy = 0.345257416869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.836967489543);
    msg.setSource(4543U);
    msg.setSourceEntity(173U);
    msg.setDestination(21379U);
    msg.setDestinationEntity(238U);
    msg.target.assign("HEPTMEULWVBKLYZQAMCHSAZEKEOLIRHNWCFFISILDJTYTBTSAJWFJVJBVRZDKUCIKMQHHDVGQAEERXRSUJNYPSZDSYWNAANFXXNIFOOGYMMWQGPGYDSMSEQJKOFKQDIJVUIJXAVFXFJWPZYMZICRTCVDQUZPUUWCONLBPDNTOTBBCDONSRKBVAPEOSWWKXLNEYPXTQPHLVORILUIOKEBUGCMGWTBFXCPHKYQXHGFGHLJBCRYUZZMM");
    msg.lbearing = 0.768848934149;
    msg.lelevation = 0.179978908998;
    msg.bearing = 0.865074407906;
    msg.elevation = 0.653327862653;
    msg.phi = 0.773435675678;
    msg.theta = 0.942789081855;
    msg.psi = 0.833592475423;
    msg.accuracy = 0.199844415363;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.229753674673);
    msg.setSource(16916U);
    msg.setSourceEntity(50U);
    msg.setDestination(20586U);
    msg.setDestinationEntity(199U);
    msg.target.assign("ECXNHLJUEIJXZORMHTFOUETZNHNBWPQOADJHYSURLBSDYRLWQMCGVLBMYPOQUOEOUFPDKYJMCQANISBZDCWTAZKJCDTIWNYVHQCMFRPJILDGQSSGFRHWPOMFYZZVEVDEKKXAMWIMANVLNTXRGHAZICFTASQROTHQFCAPO");
    msg.x = 0.584145461734;
    msg.y = 0.63667441476;
    msg.z = 0.441933794915;
    msg.n = 0.724987879661;
    msg.e = 0.33429171852;
    msg.d = 0.133602279696;
    msg.phi = 0.720866526066;
    msg.theta = 0.634326101845;
    msg.psi = 0.818641387847;
    msg.accuracy = 0.568047206037;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.547847899277);
    msg.setSource(6241U);
    msg.setSourceEntity(197U);
    msg.setDestination(21291U);
    msg.setDestinationEntity(46U);
    msg.target.assign("FQHQTOWAKLFJNGTJPHDYOCVCLEHNKDZCSXGSSVAIICPXIYDMFWUSYNRQYXLXMNBJSPZVILFJVPWH");
    msg.x = 0.951423023171;
    msg.y = 0.42290783275;
    msg.z = 0.322189650162;
    msg.n = 0.0295301808603;
    msg.e = 0.411746689583;
    msg.d = 0.667551318915;
    msg.phi = 0.291179658539;
    msg.theta = 0.848575602359;
    msg.psi = 0.866499509372;
    msg.accuracy = 0.314845409612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.319471051064);
    msg.setSource(951U);
    msg.setSourceEntity(66U);
    msg.setDestination(28293U);
    msg.setDestinationEntity(195U);
    msg.target.assign("ANKIPHEABKKNKFVCIJJQGZOOCYIFKSDAKVLZKISQYDUCMQGZLQFLAOKSHJOJRXMMUWWUMHEBXSMQSQPXTPJZTPMLTPBOHWYCVXRZYJWNJVTRYYZTXEWHXTXGKMTRIWCDMOHDJUXLUFZAPGBFCCPMVQSXZGVOAIGYAYAQHZCSNIXDPTGZYUFONLERWPUBFSDRREDFOAJDVSIVEQBLULNBKDDTIHBQURNNJHLSEVGUABCWGMBVWPRINEGL");
    msg.x = 0.0500086164891;
    msg.y = 0.193133564237;
    msg.z = 0.0463958966811;
    msg.n = 0.274901662625;
    msg.e = 0.762467508775;
    msg.d = 0.0804562610819;
    msg.phi = 0.358506660347;
    msg.theta = 0.296709404077;
    msg.psi = 0.67983942404;
    msg.accuracy = 0.245066905878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.758668844678);
    msg.setSource(15575U);
    msg.setSourceEntity(211U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(173U);
    msg.target.assign("XDMNPTWZDLRCBVXALWMJOROKBURVBVVJVTMEJDXYTUNWSZLONZIXGZGBQMAOSZDCRWOPCELVQHKCSSPHRFBRWUXVNFUEGCTGPEKLSOMMNYDGIIFAHIZCIOAFXQTXBRZNBFEXIUXLCDTKTLEETSSSAKJRYJUKNWGKV");
    msg.lat = 0.678131185499;
    msg.lon = 0.276848839597;
    msg.z_units = 35U;
    msg.z = 0.983047716804;
    msg.accuracy = 0.129785079286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.00303744140535);
    msg.setSource(19527U);
    msg.setSourceEntity(36U);
    msg.setDestination(57550U);
    msg.setDestinationEntity(234U);
    msg.target.assign("LBPWMIDOJVYFQTTWNKVPRGZJFAFRSXFDDXKUKCPWNENRXHIHEQYPYXNWJPXHSTTZWCFBRBZONBLWRKHTHXRADCOFIALYNSPGYMNOPURIWCIVSUOZEMJXTTVJMGSBWCFYWHIHVGVOJTYVMFFIXMKLLKRDSUQQQGVHMZVMKATQOGCLPNFONBUSEIECBDIGXBQYXEOUSGSGJUAPLQQADQCZZ");
    msg.lat = 0.0827675108711;
    msg.lon = 0.884058494223;
    msg.z_units = 39U;
    msg.z = 0.863320291566;
    msg.accuracy = 0.187489684364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.25685065909);
    msg.setSource(62254U);
    msg.setSourceEntity(224U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(158U);
    msg.target.assign("TEYQYPGLFLBYUCOUDELFCWHMEYDILYXRYITAIAZFIXCDETNNYKSVZGPSJSDZGNXVFQSJHMLMPCCBXQAVGCRBSLKSIECYRADONTFBPAERJWWWGWHUQLUHHMSGBPQKGPRWWFRXNFKOLCIBIVNVIQTIDDOYSZUDMTEKBCJVTRJUABOWGDVIZROVHLRMJAKAOFXZPXNPMJSPCKNHZUQTMVSTYBDXZHOGGWHUQVQRJHXMKWBTXL");
    msg.lat = 0.865431055624;
    msg.lon = 0.590243620446;
    msg.z_units = 77U;
    msg.z = 0.938210793187;
    msg.accuracy = 0.852310517088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.698219623658);
    msg.setSource(3625U);
    msg.setSourceEntity(99U);
    msg.setDestination(3446U);
    msg.setDestinationEntity(98U);
    msg.name.assign("NCZCOOUMMAPWBOOVNEUREOBPMEILCIPEUTVFKVRHFDOGHFPQCSFQJLZTPZVBRRTTHZSBSVFZXAWNLUTDEMSOIKGTMFWIRNVZHSPAAAFW");
    msg.lat = 0.14326857105;
    msg.lon = 0.635078324154;
    msg.z = 0.182662697233;
    msg.z_units = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.888016557254);
    msg.setSource(54507U);
    msg.setSourceEntity(17U);
    msg.setDestination(25387U);
    msg.setDestinationEntity(205U);
    msg.name.assign("GRVNBGPROXWMTXOCIYQSWVXCYCKFOMWCCFSUDZTVWUCVAOGEKDCMDBRFGKZPLKKHOGTASACZISTFHAPTZQUKGYDVBXOCHYJOYPPJKBHMJIEUDSFQLBWEZPDSNMXJUXFLVHJADKENXUSIZLKEWDEBJQPSEGVZNYBZQDYREUNCBAYLSNOREHAUALNXUWRILTZHFATURWMRJILMNSTFGIEFWQIJBQBMHTJNVRKIAODQJYRZOXYXNHMQHGVGPLQWL");
    msg.lat = 0.335792228042;
    msg.lon = 0.517173526793;
    msg.z = 0.55717832753;
    msg.z_units = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.0147194280885);
    msg.setSource(34502U);
    msg.setSourceEntity(131U);
    msg.setDestination(29644U);
    msg.setDestinationEntity(57U);
    msg.name.assign("ZBAPBBHIAPGOOVXGTAXJKJLLTXZGQCYSNPCYIORRLICVJYMTLFGYAQIUUSUVBLGFAKBJMPCPADPKEVZQCGGUHROXRSEHPXIWNGDBNDFMLTNQGQTXDWVUMIIWKRJHUDKFYJCOBFAWAWTSZFUHIWEKXDYNBOZNOQJUMBPZSUYDXVVRAMYTQMTJHZCMHYPZJPCXCNYJFOHBRKLECNENFITOMOZWLSEWRSELK");
    msg.lat = 0.54838983444;
    msg.lon = 0.664746513501;
    msg.z = 0.591341639286;
    msg.z_units = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.122299166276);
    msg.setSource(23194U);
    msg.setSourceEntity(13U);
    msg.setDestination(29539U);
    msg.setDestinationEntity(19U);
    msg.op = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.679164076857);
    msg.setSource(48538U);
    msg.setSourceEntity(82U);
    msg.setDestination(37172U);
    msg.setDestinationEntity(154U);
    msg.op = 235U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OJSRGYLDHMTWYCIOWJHLRFPKKCHDOEPROVTTVEABZVVPBDILSYCHRPTZUOJXIKGQSMFITFKEXNSDSEAHTIUQSIZQKRYVUKENPKAKOQLGZTGJLXZZTSGWPYVVWQBVRSMNWNHNRXCTISCLAYLOGZDAMQOEWGELXIDBJZUANUARCJOFHCGRXBJMXVKLFTPBIUXFLBHFZVXUMYUPNQYEQFMUHKCEZOGABDNJNMYUBRDJNCW");
    tmp_msg_0.lat = 0.163239866762;
    tmp_msg_0.lon = 0.753507386985;
    tmp_msg_0.z = 0.438644930772;
    tmp_msg_0.z_units = 153U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.707738469775);
    msg.setSource(14756U);
    msg.setSourceEntity(212U);
    msg.setDestination(53344U);
    msg.setDestinationEntity(142U);
    msg.op = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.665148310288);
    msg.setSource(48922U);
    msg.setSourceEntity(251U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(52U);
    msg.value = 0.657511407591;
    msg.type = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.292819442406);
    msg.setSource(38909U);
    msg.setSourceEntity(227U);
    msg.setDestination(40533U);
    msg.setDestinationEntity(3U);
    msg.value = 0.691501647765;
    msg.type = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.00890760351021);
    msg.setSource(31421U);
    msg.setSourceEntity(181U);
    msg.setDestination(21311U);
    msg.setDestinationEntity(21U);
    msg.value = 0.493458449922;
    msg.type = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.42230056614);
    msg.setSource(49213U);
    msg.setSourceEntity(191U);
    msg.setDestination(51796U);
    msg.setDestinationEntity(122U);
    msg.value = 0.547913292889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.167276536457);
    msg.setSource(14241U);
    msg.setSourceEntity(240U);
    msg.setDestination(40299U);
    msg.setDestinationEntity(36U);
    msg.value = 0.984202924445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.643194618746);
    msg.setSource(47728U);
    msg.setSourceEntity(248U);
    msg.setDestination(4987U);
    msg.setDestinationEntity(59U);
    msg.value = 0.750113172859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.0289025664555);
    msg.setSource(60591U);
    msg.setSourceEntity(17U);
    msg.setDestination(3584U);
    msg.setDestinationEntity(104U);
    msg.timestamp_last_service = 0.552435367142;
    msg.time_next_service = 0.383059058117;
    msg.time_motor_next_service = 0.793313790775;
    msg.time_idle_ground = 0.118449320764;
    msg.time_idle_air = 0.230758161543;
    msg.time_idle_water = 0.981737683407;
    msg.time_idle_underwater = 0.81077119526;
    msg.time_idle_unknown = 0.847841920722;
    msg.time_motor_ground = 0.450363271293;
    msg.time_motor_air = 0.224434128013;
    msg.time_motor_water = 0.486641485617;
    msg.time_motor_underwater = 0.302412570536;
    msg.time_motor_unknown = 0.416570135145;
    msg.rpm_min = -14847;
    msg.rpm_max = -17151;
    msg.depth_max = 0.553972408409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.355407815779);
    msg.setSource(59746U);
    msg.setSourceEntity(49U);
    msg.setDestination(43862U);
    msg.setDestinationEntity(155U);
    msg.timestamp_last_service = 0.0474414214716;
    msg.time_next_service = 0.675993384143;
    msg.time_motor_next_service = 0.614094421271;
    msg.time_idle_ground = 0.660756700168;
    msg.time_idle_air = 0.960423258199;
    msg.time_idle_water = 0.221371654888;
    msg.time_idle_underwater = 0.404487483809;
    msg.time_idle_unknown = 0.800107462919;
    msg.time_motor_ground = 0.593969061221;
    msg.time_motor_air = 0.206811608812;
    msg.time_motor_water = 0.83229276815;
    msg.time_motor_underwater = 0.616083867876;
    msg.time_motor_unknown = 0.135691955258;
    msg.rpm_min = 17265;
    msg.rpm_max = 19047;
    msg.depth_max = 0.669657913845;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.492930829996);
    msg.setSource(39526U);
    msg.setSourceEntity(206U);
    msg.setDestination(62159U);
    msg.setDestinationEntity(179U);
    msg.timestamp_last_service = 0.755477302729;
    msg.time_next_service = 0.789310375581;
    msg.time_motor_next_service = 0.155945954012;
    msg.time_idle_ground = 0.399923663963;
    msg.time_idle_air = 0.789118711273;
    msg.time_idle_water = 0.560450398144;
    msg.time_idle_underwater = 0.403102417054;
    msg.time_idle_unknown = 0.946919568006;
    msg.time_motor_ground = 0.45503589003;
    msg.time_motor_air = 0.400402182619;
    msg.time_motor_water = 0.0500247148659;
    msg.time_motor_underwater = 0.965730906986;
    msg.time_motor_unknown = 0.540289950841;
    msg.rpm_min = 10404;
    msg.rpm_max = 3987;
    msg.depth_max = 0.57093899147;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.267201490197);
    msg.setSource(56420U);
    msg.setSourceEntity(111U);
    msg.setDestination(39731U);
    msg.setDestinationEntity(29U);
    msg.severity = 62U;
    msg.text.assign("QOJSFQUGKGIBRVTXAVANUURGQVWAOBCRIUFLPWCUAHLKMWHOQTRJFDVYCZLQKYOIQIFDUUGQGJHPSHZMABEDXZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.357147593331);
    msg.setSource(28018U);
    msg.setSourceEntity(41U);
    msg.setDestination(29498U);
    msg.setDestinationEntity(186U);
    msg.severity = 177U;
    msg.text.assign("WJPDLWUWNPOYPISZYUTJAJHXGLXPUFHMZDANFGWXRSVVXRNASYHHVDJTWHITXTGQFUIWFICVVXEKSPIGKXZYAODWTNKQLBDHJGSCTKKTLYMJHZUPVUDJDZOMISGMZEVEKKUOEZBBFKJDRQLTVSORLCNYMWSTBMIDOYQMQKYPGOCNFFGEFQIXLNASGBEOALIJVBPMOKGNLRBCHZHCRFQCEZBMISBXAOYWACQUFQENRCRPVEARNUJEHLTRQXY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.282933830375);
    msg.setSource(16103U);
    msg.setSourceEntity(43U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(56U);
    msg.severity = 98U;
    msg.text.assign("TZMHTSSOLSVGUCQUIDETKXKQAEQSRERQLOWSPCJBBGJBMIINDUZZLVTNTRYEBGSIPQREUFAYAOLHCBWQSFYMCZNAMGNNDBKZIPXOXJLFUKZJKVVUDHAYBVCLKDFRJUDMVCEHXJJBPWHPTPGYDOEXGOYQMGZFREWSCILACIJHRAPBHIPUNYJWFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.20038897271);
    msg.setSource(33949U);
    msg.setSourceEntity(205U);
    msg.setDestination(14138U);
    msg.setDestinationEntity(112U);
    msg.channel = 99;
    msg.value = -321961127;
    msg.gain = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.84397846753);
    msg.setSource(48992U);
    msg.setSourceEntity(167U);
    msg.setDestination(14897U);
    msg.setDestinationEntity(198U);
    msg.channel = -50;
    msg.value = 1999917992;
    msg.gain = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.871031822498);
    msg.setSource(49785U);
    msg.setSourceEntity(166U);
    msg.setDestination(21820U);
    msg.setDestinationEntity(236U);
    msg.channel = 25;
    msg.value = -1902847287;
    msg.gain = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.207068572431);
    msg.setSource(64334U);
    msg.setSourceEntity(7U);
    msg.setDestination(15450U);
    msg.setDestinationEntity(9U);
    msg.ch01 = 0.363094186549;
    msg.ch02 = 0.84771637706;
    msg.ch03 = 0.813434828566;
    msg.ch04 = 0.534985969666;
    msg.ch05 = 0.0845536190548;
    msg.ch06 = 0.384053168502;
    msg.ch07 = 0.204281447434;
    msg.ch08 = 0.224921554004;
    msg.ch09 = 0.657283361269;
    msg.ch10 = 0.273148987521;
    msg.ch11 = 0.00339481347281;
    msg.ch12 = 0.178525740385;
    msg.ch13 = 0.530913420513;
    msg.ch14 = 0.788097831074;
    msg.ch15 = 0.462237543476;
    msg.ch16 = 0.026752881127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.799387830962);
    msg.setSource(53840U);
    msg.setSourceEntity(123U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(132U);
    msg.ch01 = 0.67277364176;
    msg.ch02 = 0.758131780985;
    msg.ch03 = 0.607306253449;
    msg.ch04 = 0.759728105615;
    msg.ch05 = 0.246303245308;
    msg.ch06 = 0.579221678617;
    msg.ch07 = 0.577422737541;
    msg.ch08 = 0.131021941994;
    msg.ch09 = 0.286317673553;
    msg.ch10 = 0.944771421114;
    msg.ch11 = 0.10382901495;
    msg.ch12 = 0.317281868627;
    msg.ch13 = 0.637382922962;
    msg.ch14 = 0.225342141014;
    msg.ch15 = 0.60467887179;
    msg.ch16 = 0.501868706446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.702278536405);
    msg.setSource(29545U);
    msg.setSourceEntity(135U);
    msg.setDestination(35004U);
    msg.setDestinationEntity(138U);
    msg.ch01 = 0.0955679073549;
    msg.ch02 = 0.584282795648;
    msg.ch03 = 0.949966084839;
    msg.ch04 = 0.537869502378;
    msg.ch05 = 0.971092482623;
    msg.ch06 = 0.365550729192;
    msg.ch07 = 0.790914908603;
    msg.ch08 = 0.438665407049;
    msg.ch09 = 0.811570350808;
    msg.ch10 = 0.647473471253;
    msg.ch11 = 0.23035687972;
    msg.ch12 = 0.361540600819;
    msg.ch13 = 0.265108388584;
    msg.ch14 = 0.941594537767;
    msg.ch15 = 0.367270565401;
    msg.ch16 = 0.384758941126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.361887929206);
    msg.setSource(43166U);
    msg.setSourceEntity(74U);
    msg.setDestination(9290U);
    msg.setDestinationEntity(250U);
    msg.value = 0.974533911101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.26866360854);
    msg.setSource(51692U);
    msg.setSourceEntity(143U);
    msg.setDestination(52082U);
    msg.setDestinationEntity(87U);
    msg.value = 0.511417895312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.300893359161);
    msg.setSource(45251U);
    msg.setSourceEntity(163U);
    msg.setDestination(44198U);
    msg.setDestinationEntity(233U);
    msg.value = 0.76127191507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.462614046661);
    msg.setSource(25345U);
    msg.setSourceEntity(206U);
    msg.setDestination(35509U);
    msg.setDestinationEntity(46U);
    msg.op = 187U;
    msg.lat = 0.945537623087;
    msg.lon = 0.251380549784;
    msg.height = 0.547194479448;
    msg.depth = 0.317396230756;
    msg.alt = 0.188150752971;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.194384981248);
    msg.setSource(19623U);
    msg.setSourceEntity(210U);
    msg.setDestination(6417U);
    msg.setDestinationEntity(95U);
    msg.op = 200U;
    msg.lat = 0.509306273282;
    msg.lon = 0.202482703258;
    msg.height = 0.248092539159;
    msg.depth = 0.017713652372;
    msg.alt = 0.0978818004919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.610938447398);
    msg.setSource(51717U);
    msg.setSourceEntity(239U);
    msg.setDestination(8086U);
    msg.setDestinationEntity(190U);
    msg.op = 143U;
    msg.lat = 0.709902719524;
    msg.lon = 0.746113080776;
    msg.height = 0.94299569915;
    msg.depth = 0.766904799185;
    msg.alt = 0.727128892767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedMugState msg;
    msg.setTimeStamp(0.299363596961);
    msg.setSource(23111U);
    msg.setSourceEntity(100U);
    msg.setDestination(46800U);
    msg.setDestinationEntity(240U);
    msg.id = 1570325643;
    msg.x = 0.0326376331206;
    msg.y = 0.586493812403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedMugState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedMugState msg;
    msg.setTimeStamp(0.768532280194);
    msg.setSource(1027U);
    msg.setSourceEntity(117U);
    msg.setDestination(51258U);
    msg.setDestinationEntity(244U);
    msg.id = 1144027710;
    msg.x = 0.083372501068;
    msg.y = 0.129251306286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedMugState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedMugState msg;
    msg.setTimeStamp(0.730440913266);
    msg.setSource(27441U);
    msg.setSourceEntity(78U);
    msg.setDestination(40612U);
    msg.setDestinationEntity(153U);
    msg.id = -93402707;
    msg.x = 0.832008767765;
    msg.y = 0.400332401787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedMugState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
