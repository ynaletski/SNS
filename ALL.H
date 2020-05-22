
#define Test 0  // 1 - тестовый режим без MVD

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <dos.h>
#include <io.h>
#include <time.h>
#include <sys\types.h>
#include <sys\timeb.h>

#include "device.h"

//22.05.2020 YN --\\//--
#if defined(MMI_ICP)
#include "mmi.h"
#endif
#if defined(MMI_NEW)
#include "mmi_new.h"
#endif
//22.05.2020 YN --//\\--

#include "PROC.h"

#include "queue.h"
#include "icp.h"
#include "host.h"
#include "i7060.h"
#include "eee.h"
#include "mvd.h"
#include "rtu.h"
#include "arch.h"
#include "slave.h"
#include "slave2.h"
//#include "ref_t.h"
#include "digimag.h"
#include "sens.h"
#include "vol.h"
#include "avt_ctrl.h"

#if defined(PMP201)
#define s_DGM s_PMP
#endif

#include "md5.h"
