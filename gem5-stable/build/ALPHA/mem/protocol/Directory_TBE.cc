/** \file Directory_TBE.cc
 *
 * Auto generated C++ code started by /home/zl/桌面/gem5/gem5-stable/src/mem/slicc/symbols/Type.py:421
 */

#include <iostream>

#include "mem/protocol/Directory_TBE.hh"
#include "mem/ruby/common/Global.hh"
#include "mem/ruby/system/System.hh"

using namespace std;
/** \brief Print the state of this object */
void
Directory_TBE::print(ostream& out) const
{
    out << "[Directory_TBE: ";
    out << "PhysicalAddress = " << m_PhysicalAddress << " ";
    out << "TBEState = " << m_TBEState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Len = " << m_Len << " ";
    out << "DmaRequestor = " << m_DmaRequestor << " ";
    out << "]";
}
