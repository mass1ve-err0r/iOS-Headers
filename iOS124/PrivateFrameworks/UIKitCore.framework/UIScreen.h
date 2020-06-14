//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICoordinateSpace-Protocol.h>
#import <UIKitCore/UIFocusItemContainer-Protocol.h>
#import <UIKitCore/UITraitEnvironment-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentInternal-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>
#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>
#import <UIKitCore/_UITraitEnvironmentInternal-Protocol.h>

@class CARSessionStatus, FBSDisplayConfiguration, NSArray, NSDictionary, NSString, UIFocusSystem, UIScreenMode, UISoftwareDimmingWindow, UITraitCollection, UIView, UIWindow, _UIDisplayEdgeInfoProvider, _UIDragManager, _UIFocusMovementPerformer, _UIFocusScrollManager, _UIInteractiveHighlightEnvironment, _UIScreenBoundingPathUtilities, _UIScreenFixedCoordinateSpace, _UIScreenFocusSystemManager;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItem, UIFocusItemContainer, _UIFocusRegionContainer;

@interface UIScreen : NSObject <UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment>
{
    struct CGRect _unjailedReferenceBounds;
    struct CGRect _referenceBounds;
    long long _interfaceOrientation;
    double _scale;
    long long _gamut;
    long long _userInterfaceIdiom;
    unsigned long long _artworkSubtype;
    NSDictionary *_capabilities;
    NSArray *_availableDisplayModes;
    double _pointsPerInch;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    UITraitCollection *_contentSizeCategoryTraits;
    _UIDisplayEdgeInfoProvider *_displayEdgeInfoProvider;
    FBSDisplayConfiguration *__displayConfiguration;
    CARSessionStatus *_currentCarSessionStatus;
    struct {
        unsigned int bitsPerComponent:4;
        unsigned int initialized:1;
        unsigned int connected:1;
        unsigned int hasSetOverscanCompensation:1;
        unsigned int overscanCompensation:2;
        unsigned int wantsWideContentMargins:1;
        unsigned int queriedDeviceContentMargins:1;
        unsigned int hasCalculatedPointsPerInch:1;
        unsigned int rightHandDrive:1;
        unsigned int carPlayNightModeSupported:1;
        unsigned int carPlayNightModeEnabled:1;
    } _screenFlags;
    struct {
        unsigned int isKnown:1;
        unsigned int isSupported:1;
        unsigned int isInRange:1;
    } _carPlayHumanPresenceStatus;
    _Bool _performingSystemSnapshot;
    _Bool _wantsSoftwareDimming;
    _Bool _captured;
    _Bool __UIIBAlwaysProvidePeripheryInsets;
    _Bool _mainScreen;
    float _lastNotifiedBacklightLevel;
    UITraitCollection *_defaultTraitCollection;
    UITraitCollection *_overrideTraitCollection;
    UITraitCollection *_lastNotifiedTraitCollection;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    _UIFocusScrollManager *_focusScrollManager;
    _UIFocusMovementPerformer *_focusMovementPerformer;
    _UIScreenFocusSystemManager *_focusSystemManager;
    UIFocusSystem *_focusSystem;
    _UIDragManager *_dragManager;
    _UIInteractiveHighlightEnvironment *_interactiveHighlightEnvironment;
    _UIScreenBoundingPathUtilities *_boundingPathUtilities;
    UIWindow<UIFocusEnvironment> *__focusedWindow;
}

+ (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
+ (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
+ (id)__displayConfigurationsIncludingMain:(_Bool)arg1;
+ (_Bool)_shouldDisableJail;
+ (_Bool)_isProbablyBeingRecorded;
+ (void)_FBSDisplayIdentityDisconnected:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(_Bool)arg2;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(_Bool)arg2 forceMain:(_Bool)arg3;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(_Bool)arg3 forceMain:(_Bool)arg4;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(_Bool)arg3;
+ (id)_screenForScene:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_prepareCarScreensForResume;
+ (void)_prepareScreensForAppResume;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithFBSDisplayIdentity:(id)arg1;
+ (id)_carScreen;
+ (id)screens;
+ (void)_enumerateScreensWithBlock:(CDUnknownBlockType)arg1;
+ (struct CGAffineTransform)transformToRotateScreen:(double)arg1;
+ (struct CGAffineTransform)transformForScreenOriginRotation:(double)arg1;
+ (id)mainScreen;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (void)initialize;
@property(nonatomic, setter=_setFocusedWindow:) UIWindow<UIFocusEnvironment> *_focusedWindow; // @synthesize _focusedWindow=__focusedWindow;
@property(nonatomic, getter=_isMainScreen, setter=_setMainScreen:) _Bool mainScreen; // @synthesize mainScreen=_mainScreen;
@property(retain, nonatomic, getter=_boundingPathUtilities, setter=_setBoundingPathUtilities:) _UIScreenBoundingPathUtilities *boundingPathUtilities; // @synthesize boundingPathUtilities=_boundingPathUtilities;
@property(nonatomic, setter=_setUIIBAlwaysProvidePeripheryInsets:) _Bool _UIIBAlwaysProvidePeripheryInsets; // @synthesize _UIIBAlwaysProvidePeripheryInsets=__UIIBAlwaysProvidePeripheryInsets;
@property(nonatomic, getter=isCaptured, setter=_setCaptured:) _Bool captured; // @synthesize captured=_captured;
@property(nonatomic, setter=_setLastNotifiedBacklightLevel:) float _lastNotifiedBacklightLevel; // @synthesize _lastNotifiedBacklightLevel;
@property(retain, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow; // @synthesize _softwareDimmingWindow;
@property(nonatomic) _Bool wantsSoftwareDimming; // @synthesize wantsSoftwareDimming=_wantsSoftwareDimming;
@property(nonatomic, getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:) _Bool _performingSystemSnapshot; // @synthesize _performingSystemSnapshot;
@property(readonly, nonatomic) struct CGRect _referenceBounds; // @synthesize _referenceBounds;
@property(retain, nonatomic, getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:) UITraitCollection *lastNotifiedTraitCollection; // @synthesize lastNotifiedTraitCollection=_lastNotifiedTraitCollection;
@property(retain, nonatomic, getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:) UITraitCollection *overrideTraitCollection; // @synthesize overrideTraitCollection=_overrideTraitCollection;
@property(retain, nonatomic, getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:) UITraitCollection *defaultTraitCollection; // @synthesize defaultTraitCollection=_defaultTraitCollection;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_interactiveHighlightEnvironment) _UIInteractiveHighlightEnvironment *interactiveHighlightEnvironment; // @synthesize interactiveHighlightEnvironment=_interactiveHighlightEnvironment;
- (_Bool)_supportsDragging;
@property(readonly, nonatomic, getter=_dragManager) _UIDragManager *dragManager; // @synthesize dragManager=_dragManager;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic, getter=_focusMapContainer) __weak id <_UIFocusRegionContainer> focusMapContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly, nonatomic) UIWindow *_preferredFocusedWindow;
- (_Bool)_supportsDeferredFocus;
@property(readonly, nonatomic) _Bool supportsFocus;
@property(readonly, nonatomic) __weak UIView *focusedView;
@property(readonly, nonatomic) __weak id <UIFocusItem> focusedItem;
- (void)setFocusEnabled:(_Bool)arg1;
- (void)_ensureFocusSystemIsLoaded;
@property(readonly, nonatomic, getter=_focusSystem) UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property(readonly, nonatomic, getter=_focusSystemManager) _UIScreenFocusSystemManager *focusSystemManager; // @synthesize focusSystemManager=_focusSystemManager;
@property(readonly, nonatomic, getter=_focusMovementPerformer) _UIFocusMovementPerformer *focusMovementPerformer; // @synthesize focusMovementPerformer=_focusMovementPerformer;
@property(readonly, nonatomic, getter=_focusScrollManager) _UIFocusScrollManager *focusScrollManager; // @synthesize focusScrollManager=_focusScrollManager;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
@property(readonly, nonatomic) double nativeScale;
- (double)_nativeScale;
- (double)_nativeScaleWithLevel:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGRect nativeBounds;
- (struct CGRect)_nativeDisplayBounds;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect)arg2;
@property(readonly, copy) NSString *description;
@property(nonatomic) double brightness;
- (_Bool)_supportsBrightness;
- (void)_endObservingBacklightLevelNotifications;
- (void)_beginObservingBacklightLevelNotifications;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (id)_lazySoftwareDimmingWindow;
- (struct CGPoint)_mainSceneOrigin;
- (struct CGRect)_mainSceneFrame;
- (id)_display;
- (_Bool)_isRightHandDrive;
- (_Bool)_isCarPlayNightModeSupported;
- (_Bool)_isCarPlayNightModeEnabled;
- (_Bool)_areListsLimited;
- (_Bool)_areMusicListsLimited;
- (_Bool)_isSoftKeyboardLimited;
- (_Bool)_isUserInterfaceLimited:(unsigned long long)arg1;
- (long long)_workspaceCapableScreenType;
- (_Bool)_isWorkspaceCapable;
- (id)_displayID;
- (id)fbsDisplay;
- (void)_setExternalDeviceShouldInputText:(_Bool)arg1;
- (double)_displayCornerRadius;
- (double)_traitCollectionDisplayCornerRadius;
- (long long)_forceTouchCapability;
- (_Bool)_isForceTouchCapable;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (id)_capabilityForKey:(id)arg1;
- (id)_capabilities;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (void)_setDefaultTraitCollection:(id)arg1 notify:(_Bool)arg2;
- (void)_updateTraits;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;
- (long long)_effectiveUserInterfaceStyle;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect)arg2;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
@property(readonly) id <UICoordinateSpace> fixedCoordinateSpace;
@property(readonly) id <UICoordinateSpace> coordinateSpace;
- (void)_updateCapabilities;
- (void)_setArtworkSubtype:(unsigned long long)arg1;
- (unsigned long long)_artworkSubtype;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (long long)_userInterfaceIdiom;
- (void)_updateUserInterfaceIdiom;
- (void)_disconnectScreen;
- (void)_connectScreen;
- (_Bool)_isValidInterfaceOrientation:(long long)arg1;
- (double)_pointsPerInch;
- (long long)gamut;
- (double)_maximumSupportedScale;
- (void)_setScale:(double)arg1;
- (double)_scale;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)_prepareForWindow;
- (_Bool)_expectsSecureRendering;
- (_Bool)_hasStatusBar;
- (void)_setCarPlayHumanPresenceInRange:(_Bool)arg1;
- (_Bool)_isCarPlayHumanPresenceInRange;
- (_Bool)_supportsCarPlayHumanPresence;
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
- (void)_clearCarPlayHumanPresenceState;
- (void)_externalDeviceNightModeDidChange:(id)arg1;
- (void)_limitedUIDidChange:(id)arg1;
- (_Bool)_isCarScreen;
- (_Bool)_isMainScreenPointer;
- (_Bool)_isExternal;
- (id)_name;
- (unsigned int)_seed;
- (unsigned int)_integerDisplayID;
@property(readonly, nonatomic) struct UIEdgeInsets overscanCompensationInsets;
@property(nonatomic) long long overscanCompensation;
@property(readonly, copy, nonatomic) NSArray *availableModes;
- (int)screenType;
@property(retain, nonatomic) UIScreenMode *currentMode;
- (void)setBitsPerComponent:(int)arg1;
- (int)bitsPerComponent;
@property(readonly, nonatomic) UIScreenMode *preferredMode;
@property(readonly, nonatomic) UIScreen *mirroredScreen;
@property(readonly) long long maximumFramesPerSecond;
- (double)_refreshRate;
- (long long)_imageOrientation;
- (double)_rotation;
- (double)_touchRadiusScaleFactor;
- (struct CGRect)_applicationFrame;
@property(readonly, nonatomic) struct CGRect applicationFrame;
- (struct CGRect)_interfaceOrientedMainSceneBounds;
- (struct UIEdgeInsets)_peripheryInsets;
- (struct UIEdgeInsets)_displayPeripheryInsets;
- (id)_displayEdgeInfoProvider;
- (struct CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_boundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_unjailedReferenceBoundsInPixels;
- (struct CGRect)_unjailedReferenceBounds;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)_computeMetrics;
- (void)_computeMetrics:(_Bool)arg1;
- (struct CGRect)_overrideReferenceBounds;
- (_Bool)_isRotatable;
- (struct CGRect)_mainSceneReferenceBounds;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(_Bool)arg3;
- (struct CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(_Bool)arg3;
- (void)_setInterfaceOrientation:(long long)arg1;
- (long long)_interfaceOrientation;
- (_Bool)_isOverscanned;
- (_Bool)_hasWindows;
- (void)_updateDisplayConfiguration:(id)arg1;
- (id)displayIdentity;
@property(retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
- (void)_updateAvailableDisplayModes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(_Bool)arg2;
- (id)initWithDisplayConfiguration:(id)arg1;
- (_Bool)_wantsWideContentMargins;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly) Class superclass;

@end

