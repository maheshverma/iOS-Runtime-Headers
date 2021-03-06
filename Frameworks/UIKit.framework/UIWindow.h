/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWindow : UIView <NSISEngineDelegate> {
    BOOL  ___hostViewUnderlapsStatusBar;
    _UIWindowAnimationController * __animationController;
    BOOL  __containedGestureRecognizersShouldRespectGestureServerInstructions;
    int  __deferredLaunchOrientation;
    BOOL  __representsSelfHostedContent;
    BOOL  __shouldHitTestEntireScreen;
    id /* block */  __shouldPreventRotationHook;
    BOOL  __usesLegacySupportedOrientationChecks;
    FBSScene * _associatingScene;
    FBSSceneLayer * _associatingSceneLayer;
    BOOL  _attachable;
    int  _containedGestureRecognizerMaximumState;
    id  _currentTintView;
    NSString * _debugName;
    id /* block */  _deferredLaunchBlock;
    id  _delegate;
    UITraitCollection * _destinationTraitCollection;
    UIView * _exclusiveTouchView;
    id  _fingerInfo;
    UIResponder * _firstResponder;
    _UIFocusEngine * _focusEngine;
    int  _fromWindowOrientation;
    int  _horizontalSizeClassStateRestorationOverride;
    UIView * _lastMouseDownView;
    UIView * _lastMouseEnteredView;
    double  _lastTouchTimestamp;
    id  _layerContext;
    BOOL  _notedOverlayInsetChange;
    <UIFocusItem> * _rememberedFocusedItem;
    CALayer * _rootLayer;
    NSArray * _rootViewConstraints;
    UIViewController * _rootViewController;
    NSMutableArray * _rotationViewControllers;
    FBSScene * _scene;
    int  _sceneOrientation;
    UIScreen * _screen;
    BOOL  _shouldDisableTransformLayerScalingForSnapshotting;
    NSMutableSet * _subtreeMonitoringViews;
    _UISystemGestureGateGestureRecognizer * _systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer * _systemGestureGateForTouches;
    unsigned int  _systemGesturesArePossible;
    NSMutableSet * _tintViews;
    int  _toWindowOrientation;
    id  _touchData;
    struct __CFDictionary { } * _touchMap;
    UITraitCollection * _traitCollection;
    _UIViewControllerNullAnimationTransitionCoordinator * _traitCollectionChangeTransitionCoordinator;
    CALayer * _transformLayer;
    NSUndoManager * _undoManager;
    int  _verticalSizeClassStateRestorationOverride;
    int  _viewOrientation;
    id  _windowController;
    struct { 
        unsigned int delegateWillRotate : 1; 
        unsigned int delegateDidRotate : 1; 
        unsigned int delegateWillAnimateFirstHalf : 1; 
        unsigned int delegateDidAnimationFirstHalf : 1; 
        unsigned int delegateWillAnimateSecondHalf : 1; 
        unsigned int autorotatesToPortrait : 1; 
        unsigned int autorotatesToPortraitUpsideDown : 1; 
        unsigned int autorotatesToLandscapeLeft : 1; 
        unsigned int autorotatesToLandscapeRight : 1; 
        unsigned int dontBecomeKeyOnOrderFront : 1; 
        unsigned int output : 1; 
        unsigned int inGesture : 1; 
        unsigned int bitsPerComponent : 4; 
        unsigned int autorotates : 1; 
        unsigned int isRotating : 1; 
        unsigned int isUsingOnePartRotationAnimation : 1; 
        unsigned int disableAutorotationCount : 4; 
        unsigned int needsAutorotationWhenReenabled : 1; 
        unsigned int forceTwoPartRotationAnimation : 1; 
        unsigned int orderKeyboardInAfterRotating : 1; 
        unsigned int roundedCorners : 4; 
        unsigned int resizesToFullScreen : 1; 
        unsigned int keepContextInBackground : 1; 
        unsigned int ignoreSetHidden : 1; 
        unsigned int forceVisibleOnInit : 1; 
        unsigned int settingFirstResponder : 1; 
        unsigned int legacyOrientationChecks : 1; 
        unsigned int windowResizedToFullScreen : 1; 
        unsigned int statusBarFollowsOrientation : 1; 
        unsigned int secure : 1; 
        unsigned int isMainSceneSized : 1; 
        unsigned int didSetRestorationIdentifier : 1; 
        unsigned int resigningFirstResponderFromHost : 1; 
    }  _windowFlags;
    NSArray * _windowInternalConstraints;
    float  _windowLevel;
    float  _windowSublevel;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } MPU_rootViewSize;
@property (setter=__setHostViewUnderlapsStatusBar:, nonatomic) BOOL __hostViewUnderlapsStatusBar;
@property (nonatomic, readonly) struct { int x1; int x2; } __sizeClassPair;
@property (getter=_animationController, setter=_setAnimationController:, nonatomic, retain) _UIWindowAnimationController *_animationController;
@property (setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:, nonatomic) BOOL _containedGestureRecognizersShouldRespectGestureServerInstructions;
@property (setter=_setDeferredLaunchBlock:, nonatomic, copy) id /* block */ _deferredLaunchBlock;
@property (setter=_setDeferredLaunchOrientation:, nonatomic) int _deferredLaunchOrientation;
@property (setter=_setFocusEngine:, nonatomic, retain) _UIFocusEngine *_focusEngine;
@property (setter=_setLegacyOrientationChecks:, nonatomic) BOOL _legacyOrientationChecks;
@property (getter=_representsSelfHostedContent, setter=_setRepresentsSelfHostedContent:, nonatomic) BOOL _representsSelfHostedContent;
@property (setter=_setRootViewConstraints:, nonatomic, copy) NSArray *_rootViewConstraints;
@property (setter=_setShouldDisableTransformLayerScalingForSnapshotting:, nonatomic) BOOL _shouldDisableTransformLayerScalingForSnapshotting;
@property (setter=_setShouldHitTestEntireScreen:, nonatomic) BOOL _shouldHitTestEntireScreen;
@property (setter=_setShouldPreventRotationHook:, nonatomic, copy) id /* block */ _shouldPreventRotationHook;
@property (setter=_setTraitCollectionChangeTransitionCoordinator:, nonatomic, retain) _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
@property (nonatomic, readonly) BOOL _usesLegacySupportedOrientationChecks;
@property (setter=_setWindowInternalConstraints:, nonatomic, copy) NSArray *_windowInternalConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_fromWindowOrientation, setter=_setFromWindowOrientation:, nonatomic) int fromWindowOrientation;
@property (readonly) unsigned int hash;
@property (getter=isKeyWindow, nonatomic, readonly) BOOL keyWindow;
@property (getter=_rememberedFocusedItem, setter=_setRememberedFocusedItem:, nonatomic) <UIFocusItem> *rememberedFocusedItem;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic, retain) UIScreen *screen;
@property (readonly) Class superclass;
@property (getter=_toWindowOrientation, setter=_setToWindowOrientation:, nonatomic) int toWindowOrientation;
@property (nonatomic) float windowLevel;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(BOOL)arg2;
+ (void)_adjustMediaTimingForLayerHost:(id)arg1;
+ (void)_adjustMediaTimingForLayerHostView:(id)arg1;
+ (void)_clearKeyWindowStack;
+ (void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 allowMutation:(BOOL)arg3 withBlock:(id /* block */)arg4;
+ (void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 withBlock:(id /* block */)arg3;
+ (void)_executeDeferredLaunchBlocks;
+ (id)_externalKeyWindow;
+ (id)_findWithDisplayPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)_hitTestToPoint:(struct CGPoint { float x1; float x2; })arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4;
+ (BOOL)_isSecure;
+ (BOOL)_isSystemWindow;
+ (id)_keyWindowIgnoringAlertViewWindow;
+ (unsigned int)_keyWindowStackSize;
+ (void)_noteStatusBarHeightChanged:(float)arg1 oldHeight:(float)arg2;
+ (void)_noteStatusBarHeightChanged:(float)arg1 oldHeight:(float)arg2 forAutolayoutRootViewsOnly:(BOOL)arg3;
+ (void)_popKeyWindow;
+ (void)_popKeyWindow:(id)arg1;
+ (void)_prepareWindowsForAppResume;
+ (void)_prepareWindowsForAppSuspend;
+ (void)_prepareWindowsPassingTestForAppResume:(id /* block */)arg1;
+ (void)_pushKeyWindow:(id)arg1;
+ (void)_removeWindowFromStack:(id)arg1;
+ (void)_setAllWindowsKeepContextInBackground:(BOOL)arg1;
+ (void)_setKeyWindowStackEnabled:(BOOL)arg1;
+ (void)_setTransformLayerRotationsAreEnabled:(BOOL)arg1;
+ (id)_statusBarControllingWindow;
+ (void)_synchronizeDrawing;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(id /* block */)arg2;
+ (void)_synchronizeDrawingWithFence:(id)arg1;
+ (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(id /* block */)arg2;
+ (void)_synchronizeDrawingWithPreCommitHandler:(id /* block */)arg1;
+ (id)_synchronizedDrawingFence;
+ (id)_topVisibleWindowPassingTest:(id /* block */)arg1;
+ (BOOL)_transformLayerRotationsAreEnabled;
+ (void)_unregisterChargedView:(id)arg1;
+ (id)_whitePointAdaptivityStyleControllingWindow;
+ (id)_windowWithContextId:(unsigned int)arg1;
+ (void)adjustForAccessibilityIfNeeded:(id)arg1;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
+ (id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 forScreen:(id)arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })constrainFrameToScreen:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void*)createIOSurfaceFromScreen:(id)arg1;
+ (void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int*)arg2 count:(unsigned int)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 baseTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5;
+ (void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned int*)arg2 count:(unsigned int)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 usePurpleGfx:(BOOL)arg5 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg6;
+ (void*)createIOSurfaceWithContextId:(unsigned int)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg4;
+ (void*)createIOSurfaceWithContextIds:(const unsigned int*)arg1 count:(unsigned int)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 usePurpleGfx:(BOOL)arg4 outTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg5;
+ (void*)createScreenIOSurface;
+ (void)initialize;
+ (id)keyWindow;
+ (Class)layerClass;

- (void).cxx_destruct;
- (id)__clientsForRotationCallbacks;
- (BOOL)__hostViewUnderlapsStatusBar;
- (void)__setHostViewUnderlapsStatusBar:(BOOL)arg1;
- (struct { int x1; int x2; })__sizeClassPair;
- (id)_aboveWindowScrollView;
- (void)_addRotationViewController:(id)arg1;
- (void)_addTintView:(id)arg1;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_adjustedWindowLevelFromLevel:(float)arg1;
- (BOOL)_allowsLinkPreviewInteractionInViewServices;
- (BOOL)_alwaysGetsContexts;
- (id)_animationController;
- (id)_appearanceContainer;
- (BOOL)_appearsInLoupe;
- (BOOL)_areOverlayInsetsValid:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)_associatingScene;
- (id)_associatingSceneLayer;
- (void)_attachSceneLayer;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_becomeFirstResponderWhenPossible;
- (void)_beginKeyWindowDeferral;
- (void)_beginModalSession;
- (BOOL)_cachedTraitCollectionIsValid;
- (BOOL)_canActAsKeyWindowForScreen:(id)arg1;
- (BOOL)_canAffectDisplayAdaptation;
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canBecomeLayoutEngineDelegate;
- (BOOL)_canPromoteFromKeyWindowStack;
- (id)_centerExpressionInContainer:(id)arg1 vertical:(BOOL)arg2 contentInsetScale:(float)arg3;
- (float)_chargeMultiplicationFactor;
- (struct CGPoint { float x1; float x2; })_clampPointToScreenJail:(struct CGPoint { float x1; float x2; })arg1;
- (float)_classicOffset;
- (BOOL)_clearMouseView;
- (void)_clearPendingKeyboardChanges;
- (void)_clearSizeClassesForStateRestoration;
- (id)_clientsForRotation;
- (void)_commonInit;
- (void)_commonInitAttachedWindow:(BOOL)arg1 debugName:(id)arg2 scene:(id)arg3;
- (void)_configureContextOptions:(id)arg1;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (void)_configureSceneAndLayerIfNecessary;
- (void)_constraints_subviewWillChangeSuperview:(id)arg1;
- (BOOL)_containedGestureRecognizersShouldRespectGestureServerInstructions;
- (BOOL)_containedInAbsoluteResponderChain;
- (unsigned int)_contextId;
- (struct CADoublePoint { double x1; double x2; })_convertDoublePointFromSceneReferenceSpace:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })_convertDoublePointToSceneReferenceSpace:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffsetFromSceneReferenceSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_convertOffsetToSceneReferenceSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_convertPointFromSceneReferenceSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_convertPointToSceneReferenceSpace:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertRectFromSceneReferenceSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertRectToSceneReferenceSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_convertVisualAltitude:(float)arg1 fromWindow:(id)arg2;
- (float)_convertVisualAltitude:(float)arg1 toWindow:(id)arg2;
- (void)_createContext;
- (void)_createContextAttached:(BOOL)arg1;
- (void)_createContextIfNecessaryForCurrentApplicationState;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (id)_currentTintView;
- (id)_debugName;
- (id)_deepestUnambiguousResponder;
- (id)_deferralPropertiesWithContextID:(unsigned int)arg1;
- (id /* block */)_deferredLaunchBlock;
- (int)_deferredLaunchOrientation;
- (id)_descendantWithAmbiguousLayout;
- (void)_destroyContext;
- (void)_detachSceneLayer;
- (void)_didSnapshot;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (BOOL)_disableAutomaticKeyboardUI;
- (BOOL)_disableGroupOpacity;
- (unsigned int)_edgeForTouch:(id)arg1;
- (unsigned int)_edgesForSystemGesturesTouchDelay;
- (void)_endKeyWindowDeferral;
- (void)_endModalSession;
- (id)_exclusiveTouchView;
- (unsigned int)_expectedWindowInternalConstraintsCount;
- (void)_fadeCalloutBarIfNeededForTouchInView:(id)arg1;
- (void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(BOOL)arg4;
- (id)_firstResponder;
- (id)_focusEngine;
- (id)_focusResponder;
- (id)_focusedView;
- (void)_forceTwoPartRotationAnimation:(BOOL)arg1;
- (int)_fromWindowOrientation;
- (BOOL)_guardSizeTransitionFromAnimations;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (void)_handleSBActiveInterfaceOrientationChange:(id)arg1;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (BOOL)_hasContext;
- (id)_hostingHandle;
- (id)_hostingWindow;
- (BOOL)_ignoresHitTest;
- (BOOL)_includeInDefaultImageSnapshot;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 attached:(BOOL)arg2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 debugName:(id)arg2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 debugName:(id)arg2 attached:(BOOL)arg3;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 debugName:(id)arg2 scene:(id)arg3 attached:(BOOL)arg4;
- (id)_initWithOrientation:(int)arg1;
- (void)_initializeLayoutEngine;
- (void)_installFocusEngine;
- (void)_invalidateWindowInternalConstraints;
- (BOOL)_isAnyWindowRotating;
- (BOOL)_isConstrainedByScreenJail;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_isInAWindow;
- (BOOL)_isKeyWindowForDeferral;
- (BOOL)_isLoweringAnchoringConstraints;
- (BOOL)_isScrollingEnabledForView:(id)arg1;
- (BOOL)_isSecure;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_isStatusBarWindow;
- (BOOL)_isTextEffectsWindow;
- (BOOL)_isTextEffectsWindowHosting;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (BOOL)_isWindowServerHostingManaged;
- (id)_layoutEngineCreateIfNecessary;
- (id)_layoutEngineIfAvailable;
- (BOOL)_legacyOrientationChecks;
- (BOOL)_legacyShouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_makeExternalKeyWindow;
- (void)_makeKeyWindowIgnoringOldKeyWindow:(BOOL)arg1;
- (void)_matchDeviceOrientation;
- (void)_moveWithEvent:(id)arg1;
- (BOOL)_needsShakesWhenInactive;
- (id)_newSceneLayer;
- (id)_normalInheritedTintColor;
- (void)_noteOverlayInsetsDidChange;
- (void)_orderFrontWithoutMakingKey;
- (int)_orientationForRootTransform;
- (int)_orientationForViewTransform;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_overlayInsets;
- (id)_overridingDestinationEnvironmentForFocusUpdateInContext:(id)arg1;
- (id)_parentFocusEnvironment;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(int)arg3;
- (void)_propagateTraitCollectionChangedForStateRestoration;
- (id)_redundantConstraints;
- (void)_registerChargedView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (void)_registerViewForSubtreeMonitoring:(id)arg1;
- (id)_registeredScrollToTopViews;
- (id)_rememberedFocusedItem;
- (void)_removeAllViewControllersFromWindowHierarchy;
- (void)_removeFocusEngine;
- (void)_removeRotationViewController:(id)arg1;
- (void)_removeTintView:(id)arg1;
- (BOOL)_representsSelfHostedContent;
- (void)_resignKeyWindowStatus;
- (BOOL)_resizeWindowFrameToSceneBoundsIfNecessary;
- (void)_resizeWindowToFullScreenIfNecessary;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderWindow;
- (id)_rootForKeyResponderCycle;
- (id)_rootViewConstraints;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1;
- (void)_rotateToBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withAnimator:(id)arg2 transitionContext:(id)arg3;
- (void)_rotateWindowToOrientation:(int)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 skipCallbacks:(BOOL)arg4;
- (id)_rotationViewControllers;
- (id)_scene;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sceneBounds;
- (void)_sceneBoundsDidChange;
- (int)_sceneOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sceneReferenceBounds;
- (id)_screen;
- (void)_screenWillTransitionToTraitCollection:(id)arg1;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id /* block */)arg2;
- (void)_sendButtonsForEvent:(id)arg1;
- (void)_sendTouchesForEvent:(id)arg1;
- (void)_setAnimationController:(id)arg1;
- (void)_setAssociatingScene:(id)arg1;
- (void)_setAttachedToScene:(BOOL)arg1;
- (void)_setContainedGestureRecognizersShouldRespectGestureServerInstructions:(BOOL)arg1;
- (void)_setDeferredLaunchBlock:(id /* block */)arg1;
- (void)_setDeferredLaunchOrientation:(int)arg1;
- (void)_setExclusiveTouchView:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setFocusEngine:(id)arg1;
- (void)_setFromWindowOrientation:(int)arg1;
- (void)_setHidden:(BOOL)arg1 forced:(BOOL)arg2;
- (void)_setIsLoweringAnchoringConstraints:(BOOL)arg1;
- (void)_setIsResigningFirstResponderFromHost:(BOOL)arg1;
- (void)_setIsSettingFirstResponder:(BOOL)arg1;
- (void)_setLegacyOrientationChecks:(BOOL)arg1;
- (void)_setMouseDownView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)_setMouseEnteredView:(id)arg1;
- (void)_setRememberedFocusedItem:(id)arg1;
- (void)_setRepresentsSelfHostedContent:(BOOL)arg1;
- (void)_setRootViewConstraints:(id)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(int)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2;
- (void)_setRotatableViewOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_setRotatableViewOrientation:(int)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3;
- (void)_setRotatableViewOrientation:(int)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_setScene:(id)arg1;
- (void)_setSecure:(BOOL)arg1;
- (void)_setShouldDisableTransformLayerScalingForSnapshotting:(BOOL)arg1;
- (void)_setShouldHitTestEntireScreen:(BOOL)arg1;
- (void)_setShouldPreventRotationHook:(id /* block */)arg1;
- (void)_setStateRestorationVerticalSizeClass:(int)arg1 horizontalSizeClass:(int)arg2;
- (void)_setSystemGestureRecognitionIsPossible:(BOOL)arg1 andTouchesAreCancelled:(BOOL)arg2;
- (void)_setToWindowOrientation:(int)arg1;
- (void)_setTouchMap:(struct __CFDictionary { }*)arg1;
- (void)_setTraitCollectionChangeTransitionCoordinator:(id)arg1;
- (void)_setWindowControlsStatusBarOrientation:(BOOL)arg1;
- (void)_setWindowInterfaceOrientation:(int)arg1;
- (void)_setWindowInternalConstraints:(id)arg1;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1 checkForDismissal:(BOOL)arg2 isRotationDisabled:(BOOL*)arg3;
- (BOOL)_shouldCreateContextAsSecure;
- (BOOL)_shouldDelayTouchForSystemGestures:(id)arg1;
- (BOOL)_shouldDisableTransformLayerScalingForSnapshotting;
- (BOOL)_shouldHitTestEntireScreen;
- (BOOL)_shouldParticipateInVirtualResizing;
- (BOOL)_shouldPrepareScreenForWindow;
- (id /* block */)_shouldPreventRotationHook;
- (BOOL)_shouldPropagateTraitCollectionChanges;
- (BOOL)_shouldResizeWithScene;
- (BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1;
- (BOOL)_shouldUseRemoteContext;
- (BOOL)_shouldZoom;
- (void)_slideFooterFromOrientation:(int)arg1 toOrientation:(int)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(int)arg4;
- (int)_subclassPreferredFocusedViewPrioritizationType;
- (id)_subtreeMonitorsForView:(id)arg1;
- (unsigned int)_supportedInterfaceOrientationsForRootViewController;
- (BOOL)_supportsBecomeFirstResponderWhenPossible;
- (void)_switchToLayoutEngine:(id)arg1;
- (BOOL)_systemGestureRecognitionIsPossible;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 excludingWindow:(id)arg3;
- (id)_targetWindowForPathIndex:(int)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5;
- (void)_tintViewDidChangeAppearance:(id)arg1;
- (int)_toWindowOrientation;
- (id)_touchData;
- (struct __CFDictionary { }*)_touchMap;
- (float)_touchSloppinessFactor;
- (BOOL)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)arg1;
- (id)_traitCollectionChangeTransitionCoordinator;
- (id)_traitCollectionForSize:(struct CGSize { float x1; float x2; })arg1 screen:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize { float x1; float x2; })arg1 screenCollection:(id)arg2;
- (id)_traitCollectionForSize:(struct CGSize { float x1; float x2; })arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(int)arg3 virtualVerticalSizeClass:(int)arg4;
- (id)_traitCollectionWhenRotated;
- (struct CGPoint { float x1; float x2; })_transformDisplayToWindowCoordinates:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_transformLayerIncludesScreenRotation;
- (void)_transformLayerShouldMaskToBounds:(BOOL)arg1;
- (id)_uiib_candidateRedundantConstraints;
- (void)_uiib_invalidateWindowInternalConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (void)_unregisterChargedView:(id)arg1;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_unregisterViewForSubtreeMonitoring:(id)arg1;
- (void)_updateAppTintView;
- (void)_updateConstraintsIfNeededPostponeVariableChangeNotifications:(BOOL)arg1;
- (void)_updateCurrentTintView;
- (void)_updateCurrentTintViewForPotentialTintView:(id)arg1;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientationIfRotationEnabled:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg1;
- (void)_updateIsSceneSizedFlag;
- (void)_updateLayerOrderingAndSetLayerHidden:(BOOL)arg1;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_updateStatusBarToInterfaceOrientation:(int)arg1 duration:(double)arg2 animation:(int)arg3;
- (void)_updateSystemConstraints;
- (void)_updateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateToInterfaceOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
- (void)_updateToNotificationProvidedInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_updateTransformLayer;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_updateTransformLayerSizeForClassicPresentation;
- (void)_updateWindowBackgroundColorForUserInterfaceStyle:(int)arg1 force:(BOOL)arg2;
- (void)_updateWindowTraits;
- (void)_updateWindowTraitsAndNotify:(BOOL)arg1;
- (BOOL)_usesLegacySupportedOrientationChecks;
- (BOOL)_usesWindowServerHitTesting;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_viewTransformForInterfaceOrientation:(int)arg1;
- (BOOL)_wantsFocusEngine;
- (BOOL)_wantsSceneAssociation;
- (void)_willChangeToSize:(struct CGSize { float x1; float x2; })arg1 orientation:(int)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)_willSnapshot;
- (void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_willTransitionToVirtualHorizontalSizeClass:(int)arg1 virtualVerticalSizeClass:(int)arg2;
- (id)_window;
- (BOOL)_windowControlsStatusBarOrientation;
- (int)_windowInterfaceOrientation;
- (id)_windowInternalConstraints;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (BOOL)_windowOwnsInterfaceOrientation;
- (void)_writeLayerTreeToPath:(id)arg1;
- (void)addRootViewControllerViewIfPossible;
- (BOOL)autorotates;
- (void)awakeFromNib;
- (BOOL)becomeFirstResponder;
- (void)becomeKeyWindow;
- (void)beginDisablingInterfaceAutorotation;
- (int)bitsPerComponent;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentView;
- (struct CGPoint { float x1; float x2; })convertDeviceToWindow:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertWindowToDevice:(struct CGPoint { float x1; float x2; })arg1;
- (void*)createIOSurface;
- (void*)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)endDisablingInterfaceAutorotation;
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg1;
- (void)exerciseAmbiguityInLayout;
- (id)firstResponder;
- (void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2;
- (BOOL)hasAmbiguousLayout;
- (BOOL)inhibitManualTransform;
- (BOOL)inhibitSetupOrientation;
- (BOOL)inhibitTextEffectsRotation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (BOOL)isAncestorOfItem:(id)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isInterfaceAutorotationDisabled;
- (BOOL)isInternalWindow;
- (BOOL)isKeyWindow;
- (BOOL)isRotating;
- (BOOL)isUsingOnePartRotationAnimation;
- (BOOL)keepContextInBackground;
- (void)keyboardDidHide;
- (float)level;
- (void)makeKey:(id)arg1;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)makeKeyAndVisible;
- (void)makeKeyWindow;
- (void)matchDeviceOrientation:(id)arg1;
- (id)nextResponder;
- (void)orderFront:(id)arg1;
- (void)orderOut:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedItem;
- (id)preferredFocusedView;
- (void)redo:(id)arg1;
- (void)removeFromSuperview;
- (id)representation;
- (void)resignKeyWindow;
- (BOOL)resizesToFullScreen;
- (id)restorationIdentifier;
- (id)rootViewController;
- (id)screen;
- (void)sendEvent:(id)arg1;
- (void)setAutorotates:(BOOL)arg1;
- (void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2;
- (void)setBecomeKeyOnOrderFront:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setKeepContextInBackground:(BOOL)arg1;
- (void)setLevel:(float)arg1;
- (void)setNeedsFocusUpdate;
- (void)setNeedsPreferredFocusedItemUpdate;
- (void)setResizesToFullScreen:(BOOL)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)setWindowLevel:(float)arg1;
- (void)setupForOrientation:(int)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)updateFocusIfNeeded;
- (void)updatePreferredFocusedItemIfNeeded;
- (struct CGPoint { float x1; float x2; })warpPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)windowLevel;
- (int)windowOutput;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (void)music_setWantsDefaultLayoutInsets;
+ (void)music_setWantsLayoutInsetsUsingBlock:(id /* block */)arg1;
+ (void)music_setWantsMusicLayoutInsets;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (struct CGSize { float x1; float x2; })MPU_rootViewSize;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

- (id)sbui_effectiveWindowForIsolation;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (BOOL)_accessibilityIsModalWithKeyboard;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_axConvertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toWindow:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)addTouchCaptureViewWithTag:(int)arg1;
- (id)removeTouchCaptureViewWithTag:(int)arg1;

@end
