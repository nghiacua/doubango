#ifndef _H_SM_DIALOG_PUBLISH_SM
#define _H_SM_DIALOG_PUBLISH_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : sm_dialog_publish.sm
 */


#define SMC_USES_IOSTREAMS

#define SMC_NO_EXCEPTIONS

#include <statemap.h>

namespace dgo
{
    // Forward declarations.
    class map_dialog_publish;
    class map_dialog_publish_Initialized;
    class map_dialog_publish_Default;
    class sip_dialog_publishState;
    class sip_dialog_publishContext;
    class sip_dialog_publish;

    class sip_dialog_publishState :
        public statemap::State
    {
    public:

        sip_dialog_publishState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(sip_dialog_publishContext&) {};
        virtual void Exit(sip_dialog_publishContext&) {};


    protected:

        virtual void Default(sip_dialog_publishContext& context);
    };

    class map_dialog_publish
    {
    public:

        static map_dialog_publish_Initialized Initialized;
    };

    class map_dialog_publish_Default :
        public sip_dialog_publishState
    {
    public:

        map_dialog_publish_Default(const char *name, int stateId)
        : sip_dialog_publishState(name, stateId)
        {};

    };

    class map_dialog_publish_Initialized :
        public map_dialog_publish_Default
    {
    public:
        map_dialog_publish_Initialized(const char *name, int stateId)
        : map_dialog_publish_Default(name, stateId)
        {};

    };

    class sip_dialog_publishContext :
        public statemap::FSMContext
    {
    public:

        sip_dialog_publishContext(sip_dialog_publish& owner)
        : FSMContext(map_dialog_publish::Initialized),
          _owner(owner)
        {};

        sip_dialog_publishContext(sip_dialog_publish& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        sip_dialog_publish& getOwner() const
        {
            return (_owner);
        };

        sip_dialog_publishState& getState() const
        {
            if (_state == NULL)
            {
                assert(1 == 0);
            }

            return (dynamic_cast<sip_dialog_publishState&>(*_state));
        };

    private:

        sip_dialog_publish& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_SM_DIALOG_PUBLISH_SM