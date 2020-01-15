#include <EGL/egl.h>
#include "eglstate.h"
//#include <bcm_host.h>
#include <stdlib.h>
#include <assert.h>

#include <stdio.h>
#include <math.h>

#include <unistd.h>

#include <GLES2/gl2.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//#include "VG/openvg.h"
#include <simgear/canvas/ShivaVG/openvg.h>
//#include "VG/vgu.h"
#include <simgear/canvas/ShivaVG/vgu.h>

#include "shapes.h"
#include <X11/Xlib.h>

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glx.h>

#include <unistd.h>

#define VERTEX_ARRAY 0

// setWindowParams sets the window's position, adjusting if need be to
// prevent it from going fully off screen. Also sets the dispman rects
// for displaying.
/*static void setWindowParams(STATE_T * state, int x, int y, VC_RECT_T * src_rect, VC_RECT_T * dst_rect) {
	uint32_t dx, dy, w, h, sx, sy;

	// Set source & destination rectangles so that the image is
	// clipped if it goes off screen (else dispman won't show it properly)
	if (x < (1 - (int)state->window_width)) {	   // Too far off left
		x = 1 - (int)state->window_width;
		dx = 0;
		sx = state->window_width - 1;
		w = 1;
	} else if (x < 0) {				   // Part of left is off
		dx = 0;
		sx = -x;
		w = state->window_width - sx;
	} else if (x < (state->screen_width - state->window_width)) {	// On
		dx = x;
		sx = 0;
		w = state->window_width;
	} else if (x < state->screen_width) {		   // Part of right is off
		dx = x;
		sx = 0;
		w = state->screen_width - x;
	} else {					   // Too far off right
		x = state->screen_width - 1;
		dx = state->screen_width - 1;
		sx = 0;
		w = 1;
	}

	if (y < (1 - (int)state->window_height)) {	   // Too far off top
		y = 1 - (int)state->window_height;
		dy = 0;
		sy = state->window_height - 1;
		h = 1;
	} else if (y < 0) {				   // Part of top is off
		dy = 0;
		sy = -y;
		h = state->window_height - sy;
	} else if (y < (state->screen_height - state->window_height)) {	// On
		dy = y;
		sy = 0;
		h = state->window_height;
	} else if (y < state->screen_height) {		   // Part of bottom is off
		dy = y;
		sy = 0;
		h = state->screen_height - y;
	} else {					   // Wholly off bottom
		y = state->screen_height - 1;
		dy = state->screen_height - 1;
		sy = 0;
		h = 1;
	}

	state->window_x = x;
	state->window_y = y;

	//vc_dispmanx_rect_set(dst_rect, dx, dy, w, h);
	//vc_dispmanx_rect_set(src_rect, sx << 16, sy << 16, w << 16, h << 16);
}*/

// oglinit sets the display, OpenVGL context and screen information
// state holds the display information
void oglinit(STATE_T * state) {

/*       static const EGLint attribs[] = {
	EGL_SURFACE_TYPE, EGL_PBUFFER_BIT,
	EGL_RENDERABLE_TYPE, EGL_OPENVG_BIT,
	EGL_NONE
       };*/

/*  static const EGLint config16bpp[] = {
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
        EGL_RED_SIZE, 8,
        EGL_GREEN_SIZE, 8,
        EGL_BLUE_SIZE, 8,
        EGL_ALPHA_SIZE, 8,
        EGL_BUFFER_SIZE, 32,
        EGL_DEPTH_SIZE, 16,
        EGL_STENCIL_SIZE, 8,
	EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_NONE
    };

	static const EGLint attribute_list[] = {
		EGL_RED_SIZE, 8,
		EGL_GREEN_SIZE, 8,
		EGL_BLUE_SIZE, 8,
		EGL_ALPHA_SIZE, 8,
		EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
		EGL_NONE
	};*/

//EGLDisplay eglDisplay = 0;
//EGLConfig eglConfig = 0;
//EGLConfig eglConfig;
//EGLSurface eglSurface = 0;
//EGLContext eglContext = 0;

/*        Display    *x_display;
        Window          root_window;

        x_display = XOpenDisplay ( NULL );   // open the standard display (the primary screen)
        if ( x_display == NULL ) {
            printf ("cannot connect to X server");
            return;
         }

    root_window = DefaultRootWindow(x_display);

    int Hnd = XCreateSimpleWindow(x_display, root_window,0,0,800,600,0,0,0);
    EGLNativeWindowType eglWindow = (EGLNativeWindowType)Hnd;


if (!eglWindow)
    {
        printf("Failed to create X window.\n");
        return;
    }

    XUndefineCursor(x_display, eglWindow);
            XMapRaised(x_display, eglWindow);
    XFlush(x_display);*/


/*    const EGLint pi32ConfigAttribs[] =
    {
        EGL_LEVEL, 0,
        EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
        EGL_NATIVE_RENDERABLE, EGL_FALSE,
        EGL_DEPTH_SIZE, EGL_DONT_CARE,
        EGL_NONE
    };*/

/*    int iConfigs;
    if (!eglChooseConfig(eglDisplay,config16bpp, &eglConfig, 1, &iConfigs) || (iConfigs != 1))
    {
        assert(0 == 1);
    }


    eglSurface = eglCreateWindowSurface(eglDisplay, eglConfig, eglWindow, NULL);

    if(eglSurface == EGL_NO_SURFACE)
    {
        eglGetError(); // Clear error
        eglSurface = eglCreateWindowSurface(eglDisplay, eglConfig, NULL, NULL);
    }
    assert(eglGetError() == EGL_SUCCESS);*/

/*	EGLBoolean result;

	EGLint egl_major, egl_minor;*/
//       Display *x_display;
//	const char *s;
//	const char name[] = "Test window";
	int x = 0;
	int y = 0;
	int w = 0;
	int h = 0;

//       int scrnum;
//       XSetWindowAttributes attr;
//       unsigned long mask;
//       Window root;
       //Window win;
GLXContext glc;
//       XVisualInfo *visInfo, visTemplate;
//       int num_visuals;
/*       EGLConfig config;
       EGLint num_configs;
       EGLint vid;(/


       x_dpy = XOpenDisplay(NULL);
       if (!x_dpy) {
          printf("Error: couldn't open display %s\n",
    	     getenv("DISPLAY"));
          return;
       }

       state->display = eglGetDisplay(x_dpy);
       if (!state->display) {
          printf("Error: eglGetDisplay() failed\n");
          return;
       }

       if (!eglInitialize(state->display, &egl_major, &egl_minor)) {
          printf("Error: eglInitialize() failed\n");
          return;
       }

       s = eglQueryString(state->display, EGL_VERSION);
       printf("EGL_VERSION = %s\n", s);

       s = eglQueryString(state->display, EGL_VENDOR);
       printf("EGL_VENDOR = %s\n", s);

       s = eglQueryString(state->display, EGL_EXTENSIONS);
       printf("EGL_EXTENSIONS = %s\n", s);

       s = eglQueryString(state->display, EGL_CLIENT_APIS);
       printf("EGL_CLIENT_APIS = %s\n", s);

       scrnum = DefaultScreen( x_dpy );
       root = RootWindow( x_dpy, scrnum );

       if (!eglChooseConfig( state->display, attribs, &config, 1, &num_configs)) {
          printf("Error: couldn't get an EGL visual config\n");
          exit(1);
       }
       printf("eglChooseConfig num configs %d\n", num_configs);

       assert(config);
       assert(num_configs > 0);

       if (!eglGetConfigAttrib(state->display, config, EGL_NATIVE_VISUAL_ID, &vid)) {
          printf("Error: eglGetConfigAttrib() failed\n");
          exit(1);
       }

       // The X window visual must match the EGL config
       visTemplate.visualid = vid;
       visInfo = XGetVisualInfo(x_dpy, VisualIDMask, &visTemplate, &num_visuals);
       if (!visInfo) {
          printf("Error: couldn't get X visual\n");
          exit(1);
       }

       // window attributes
       attr.background_pixel = 0;
       attr.border_pixel = 0;
       attr.colormap = XCreateColormap( x_dpy, root, visInfo->visual, AllocNone);
       attr.event_mask = StructureNotifyMask | ExposureMask | KeyPressMask;
       mask = CWBackPixel | CWBorderPixel | CWColormap | CWEventMask;

       win = XCreateWindow( x_dpy, root, 0, 0, width, height,
    		        0, visInfo->depth, InputOutput,
    		        visInfo->visual, mask, &attr );

       // set hints and properties
       {
          XSizeHints sizehints;
          sizehints.x = x;
          sizehints.y = y;
          sizehints.width  = width;
          sizehints.height = height;
          sizehints.flags = USSize | USPosition;
          XSetNormalHints(x_dpy, win, &sizehints);
          XSetStandardProperties(x_dpy, win, name, name,
                                  None, (char **)NULL, 0, &sizehints);
       }



	//static EGL_DISPMANX_WINDOW_T nativewindow;

	//DISPMANX_ELEMENT_HANDLE_T dispman_element;
	//DISPMANX_DISPLAY_HANDLE_T dispman_display;
	//DISPMANX_UPDATE_HANDLE_T dispman_update;
	//VC_RECT_T dst_rect;
	//VC_RECT_T src_rect;
	//static VC_DISPMANX_ALPHA_T alpha = {
	//	DISPMANX_FLAGS_ALPHA_FIXED_ALL_PIXELS,
	//	255, 0
	//};
*/

/*    const EGLint pi32ConfigAttribs[] =
    {
        EGL_LEVEL, 0,
        EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
        EGL_NATIVE_RENDERABLE, EGL_FALSE,
        EGL_DEPTH_SIZE, EGL_DONT_CARE,
        EGL_NONE
    };*/

	//EGLSurface eglSurface = 0;

/*	// get an EGL display connection
	printf ("Get display\n");
	state->display = eglGetDisplay((EGLNativeDisplayType) EGL_DEFAULT_DISPLAY);
	assert(state->display != EGL_NO_DISPLAY);

	// initialize the EGL display connection
	printf ("Initialize\n");
	result = eglInitialize(state->display, NULL, NULL);
	assert(EGL_FALSE != result);*/

	// bind OpenVG API
	//eglBindAPI(EGL_OPENVG_API);
	//eglBindAPI(EGL_OPENGL_ES_API);

	// get an appropriate EGL frame buffer configuration
/*	printf ("Choose config\n");
	//result = eglChooseConfig(state->display, attribute_list, &config, 1, &num_config);
	result = eglChooseConfig(state->display, config16bpp, &config, 1, &num_config);
	assert(EGL_FALSE != result);
	assert(num_config == 1);

	printf ("Get config attr\n");
       if (!eglGetConfigAttrib(state->display, config, EGL_NATIVE_VISUAL_ID, &vid)) {
          printf("Error: eglGetConfigAttrib() failed\n");
          exit(1);
       }

	printf ("Get vis info\n");
       // The X window visual must match the EGL config 
       visTemplate.visualid = vid;
       visInfo = XGetVisualInfo(state->display, VisualIDMask, &visTemplate, &num_visuals);
	printf ("Post get vis info\n");
       if (!visInfo) {
          printf("Error: couldn't get X visual\n");
          exit(1);
       }
*/
	// create an EGL window surface
	//success = graphics_get_display_size(0 /* LCD */ , &state->screen_width,
	//				    &state->screen_height);
	//assert(success >= 0);

//	if ((state->window_width == 0) || (state->window_width > state->screen_width))
//		state->window_width = state->screen_width;
//	if ((state->window_height == 0) || (state->window_height > state->screen_height))
//		state->window_height = state->screen_height;

	// adjust position so that at least one pixel is on screen and
	// set up the dispman rects
	//setWindowParams(state, state->window_x, state->window_y, &src_rect, &dst_rect);

	//dispman_display = vc_dispmanx_display_open(0 /* LCD */ );
	//dispman_update = vc_dispmanx_update_start(0);

	//dispman_element = vc_dispmanx_element_add(dispman_update, dispman_display, 0 /*layer */ , &dst_rect, 0 /*src */ ,
	//					  &src_rect, DISPMANX_PROTECTION_NONE, &alpha, 0 /*clamp */ ,
	//					  0 /*transform */ );

	//state->element = dispman_element;
	//nativewindow.element = dispman_element;
	//nativewindow.width = state->window_width;
	//nativewindow.height = state->window_height;
	//vc_dispmanx_update_submit_sync(dispman_update);

/*	// create an EGL rendering context
	printf ("Create context\n");
	EGLint ai32ContextAttribs[] = { EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE };
	//state->context = eglCreateContext(state->display, config, NULL, ai32ContextAttribs);
	//state->context = eglCreateContext(state->display, config, EGL_NO_CONTEXT, ai32ContextAttribs);
	state->context = eglCreateContext(state->display, config, EGL_NO_CONTEXT, NULL);
	assert(state->context);
	assert(state->context != EGL_NO_CONTEXT);
	assert(eglGetError() == EGL_SUCCESS);
vgCreateContextSH(800, 600);

       {
          EGLint val;
          if(!eglQueryContext(state->display, state->context, EGL_CONTEXT_CLIENT_VERSION, &val)) {
              printf("Error: eglQueryContext failed\n");
              exit(1);
          }
	printf("Got context val %d\n", val);
       }


	printf ("Create window surface\n");
//	state->surface = eglCreateWindowSurface(state->display, config, &nativewindow, NULL);
	state->surface = eglCreateWindowSurface(state->display, config, win, NULL);
	//state->surface = eglCreatePlatformWindowSurfaceEXT(state->display, config, eglWindow, NULL);

	if(state->surface == EGL_NO_SURFACE)
	{
		printf ("Create alt window surface\n");
		eglGetError(); // Clear error
		state->surface = eglCreateWindowSurface(state->display, config, NULL, NULL);
	}

	assert(eglGetError() == EGL_SUCCESS);
	assert(state->surface != EGL_NO_SURFACE);

//	assert(vgCreateContextSH(800, 600) == VG_TRUE);

       // sanity checks
	printf ("Sanity\n");
       {
          EGLint val;
          eglQuerySurface(state->display, state->surface, EGL_WIDTH, &val);
        printf("Width %d\n", val);
          eglQuerySurface(state->display, state->surface, EGL_HEIGHT, &val);
        printf("Height %d\n", val);
          assert(eglGetConfigAttrib(state->display, config, EGL_SURFACE_TYPE, &val));
          assert(val & EGL_WINDOW_BIT);
       }

	XFree(visInfo);

	printf ("Xmap\n");
	XMapWindow(x_dpy, win);

	// connect the context to the surface
	printf ("Make current\n");
	//result = eglMakeCurrent(state->display, state->surface, state->surface, state->context);
       if (!eglMakeCurrent(state->display, state->surface, state->surface, state->context)) {
          printf("Error: eglMakeCurrent() failed\n");
          return;
       }
        assert(eglGetError() == EGL_SUCCESS);

        VGErrorCode currErr = vgGetError();
        printf("VG err make current Got error %04x\n", currErr);
	assert(currErr == VG_NO_ERROR);

	// preserve the buffers on swap
	//printf ("Surface attributes\n");
	//assert(state->display != EGL_NO_DISPLAY);
	//assert(state->surface != EGL_NO_SURFACE);
	//result = eglSurfaceAttrib(state->display, state->surface, EGL_SWAP_BEHAVIOR, EGL_BUFFER_PRESERVED);
        //printf("Got error %04x\n", eglGetError());
	//assert(EGL_FALSE != result);
*/

	Window root;
	XSetWindowAttributes swa,xattr;
	XWindowAttributes gwa;
	XClassHint *classHint;
	XVisualInfo *vi;
	GLint att[] = {
		GLX_RGBA,
		GLX_DEPTH_SIZE, 24,
		GLX_DOUBLEBUFFER, None 
	};

	char instance[] = "libovg",
		 className[] = "libovg";

	if (state->display == NULL){
		//in the case of closing a previous window
		if ((state->display = XOpenDisplay(NULL)) == NULL){
			fprintf(stderr, "Error opening X Display\n");
			return;
		}
	}

	root = DefaultRootWindow(state->display);
	if ((vi = glXChooseVisual(state->display, 0, att)) == NULL){
		fprintf(stderr, "No visual found\n");
		return;
	}

	if (y == 0){
		//for some reason,
		//y=0 makes the window
		//default to center of displau, not 0,0
		y++;
	}

	w = XDisplayWidth(state->display, 0);
	h = XDisplayHeight(state->display, 0);

	swa.event_mask = ExposureMask | KeyPressMask;
	state->surface = XCreateWindow(state->display, root,
	                    x,y,w,h,0,
	                    CopyFromParent,InputOutput,
	                    CopyFromParent, CWEventMask,
	                    &swa);

	state->window_width = w;
	state->window_height = h;

	xattr.override_redirect=0;
	XChangeWindowAttributes(state->display, state->surface, CWOverrideRedirect, &xattr);

	XStoreName(state->display, state->surface, "LibOVG");

	classHint = XAllocClassHint();
	if (classHint){
		classHint->res_name = instance;
		classHint->res_class = className;
	}
	XSetClassHint(state->display, state->surface, classHint);
	XFree(classHint);

	XMapWindow(state->display, state->surface);

	glc = glXCreateContext(state->display, vi, NULL, GL_TRUE);
	glXMakeCurrent(state->display, state->surface, glc);

	// set up screen ratio
	XGetWindowAttributes(state->display, state->surface, &gwa);

 	if (vgCreateContextSH(w, h) != VG_TRUE){
    	fprintf(stderr, "Error creating context\n");
    	return;
    }


        VGfloat fill[4] = {255/255.0f, 0/255.0f, 0/255.0f, 255/255.0f};
        vgSetfv(VG_CLEAR_COLOR, 4, fill);
        vgResizeSurfaceSH(w,h); //why am i doing this again?

        vgClear(0,0,w,h);

        //glXSwapBuffers(state->display, state->surface);
	//getchar();
        //glXSwapBuffers(state->display, state->surface);

	printf ("Done init\n");

	//getchar();

/*        VGErrorCode err = vgGetError();
        printf("Got error %04x\n", err);
        err = vgGetError();
        printf("Got error %04x\n", err);
	printf ("Rect\n");
        Start(400, 400);
        Fill(128, 0, 0, 1);
        Rect(125, 125, 50, 50);
        End();
        err = vgGetError();
        printf("Got error %04x\n", err);
*/
}
