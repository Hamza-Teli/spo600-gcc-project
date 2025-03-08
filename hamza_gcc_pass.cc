/* This pass was creatd by Hamza Teli with the help of
Professor Chris Tyler's SPO600 wiki and lecture. 

This pass accomplishes the following:


*/

#include "gcc-plugin.h"
#include "plugin-version.h"
#include "cgraph.h" // As stated in SPO600 wiki
#include "basic-block.h" // As stated in SPO600 wiki
#include "gimple-iterator.h" // As stated in SPO600 wiki

// Namespace <--- This section I learned from SPO600 Week 7 - Class 1 Lecture from Professor Chris Tyler
namespace{
    const pass_data pass_data_hteli1 = {
            GIMPLE_PASS, /* type */
            "hteli1_pass", /* name of my pass */
            OPTGROUP_NONE, /* optinfo_ flags */
            TV_NONE, /* tv_id */
            PROP_cfg, /* specify that we need properties */
            0, /* the properties provided */
            0, /* the properties destroyed */
            0, /* todo_flags_start */
            0, /* todo_flags_finish */
    };

    /*
        Please refer to the instructions below from Professor CHris Tyler that helped me build the class:
        Pass Code
            Each pass provides a C++ source file which provides:
            -   A pass_data structure which defines the pass details (defined in tree-pass.h);
            -   A class which defines a gimple_opt_pass and includes the public methods gate and execute.
            -   The gate method controls whether the pass is active. It can consider multiple factors, including command-line arguments, source language, and target. This method returns a boolean.
            -   The execute method executes the pass. It accepts a pointer to a function object and will be called once for each function in the unit being compiled (which is not always what you want!).
            -   A method in the anon namespace named make_pass_name which returns a pointer to the gimple_opt_pass described above.
    */


    // This is where you identify the class
    class hteli1_pass : public gimple_opt_pass {
        public:
            // Constructor
            hteli1_pass(gcc::context *ctx) : gimple_opt_pass(pass_data_hteli1, ctx) {

            }

            // The gate function 
            bool gate(function *fun) override {
                // return 
                return true;

            }

            // The execute function
            unsigned int execute (function *) override {
                
            }



    }
}