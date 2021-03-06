#ifndef SCROLLWHEELTOSCROLLWHEEL_HPP
#define SCROLLWHEELTOSCROLLWHEEL_HPP

#include "RemapFuncClasses.hpp"

namespace org_pqrs_KeyRemap4MacBook {
  namespace RemapFunc {
    class ScrollWheelToScrollWheel {
    public:
      ScrollWheelToScrollWheel(void);
      ~ScrollWheelToScrollWheel(void);

      bool remap(RemapParams& remapParams);

      void add(AddDataType datatype, AddValue newval);

    private:
      size_t index_;
      Vector_ModifierFlag fromModifierFlags_;
      Vector_ModifierFlag toModifierFlags_;
    };
  }
}

#endif
