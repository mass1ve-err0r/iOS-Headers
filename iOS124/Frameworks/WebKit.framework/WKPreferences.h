//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKPreferences : NSObject <WKObject, NSCopying, NSSecureCoding>
{
    struct ObjectStorage<WebKit::WebPreferences> _preferences;
}

+ (_Bool)supportsSecureCoding;
+ (id)_experimentalFeatures;
+ (id)_internalDebugFeatures;
@property(readonly) struct Object *_apiObject;
@property(nonatomic, setter=_setStorageAccessPromptsEnabled:) _Bool _storageAccessPromptsEnabled;
@property(nonatomic) _Bool javaScriptCanOpenWindowsAutomatically;
@property(nonatomic) _Bool javaScriptEnabled;
@property(nonatomic) double minimumFontSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic, setter=_setDeviceOrientationEventEnabled:) _Bool _deviceOrientationEventEnabled;
@property(nonatomic, setter=_setWebAnimationsCSSIntegrationEnabled:) _Bool _webAnimationsCSSIntegrationEnabled;
@property(nonatomic, setter=_setVideoQualityIncludesDisplayCompositingEnabled:) _Bool _videoQualityIncludesDisplayCompositingEnabled;
@property(nonatomic, getter=_isSafeBrowsingEnabled, setter=_setSafeBrowsingEnabled:) _Bool _safeBrowsingEnabled;
@property(nonatomic, setter=_setShouldEnableTextAutosizingBoost:) _Bool _shouldEnableTextAutosizingBoost;
@property(nonatomic, setter=_setDOMPasteAllowed:) _Bool _domPasteAllowed;
@property(nonatomic, setter=_setJavaScriptCanAccessClipboard:) _Bool _javaScriptCanAccessClipboard;
@property(nonatomic, setter=_setShouldIgnoreMetaViewport:) _Bool _shouldIgnoreMetaViewport;
@property(nonatomic, setter=_setLowPowerVideoAudioBufferSizeEnabled:) _Bool _lowPowerVideoAudioBufferSizeEnabled;
@property(nonatomic, setter=_setPunchOutWhiteBackgroundsInDarkMode:) _Bool _punchOutWhiteBackgroundsInDarkMode;
@property(nonatomic, setter=_setColorFilterEnabled:) _Bool _colorFilterEnabled;
@property(nonatomic, setter=_setAVFoundationEnabled:) _Bool _avFoundationEnabled;
@property(nonatomic, setter=_setEditableLinkBehavior:) long long _editableLinkBehavior;
@property(nonatomic, setter=_setShouldAllowUserInstalledFonts:) _Bool _shouldAllowUserInstalledFonts;
@property(nonatomic, setter=_setWebRTCLegacyAPIEnabled:) _Bool _webRTCLegacyAPIEnabled;
@property(nonatomic, setter=_setICECandidateFilteringEnabled:) _Bool _iceCandidateFilteringEnabled;
@property(nonatomic, setter=_setEnumeratingAllNetworkInterfacesEnabled:) _Bool _enumeratingAllNetworkInterfacesEnabled;
@property(nonatomic, setter=_setInactiveMediaCaptureSteamRepromptIntervalInMinutes:) double _inactiveMediaCaptureSteamRepromptIntervalInMinutes;
@property(nonatomic, setter=_setMediaCaptureRequiresSecureConnection:) _Bool _mediaCaptureRequiresSecureConnection;
@property(nonatomic, setter=_setMockCaptureDevicesPromptEnabled:) _Bool _mockCaptureDevicesPromptEnabled;
@property(nonatomic, setter=_setMockCaptureDevicesEnabled:) _Bool _mockCaptureDevicesEnabled;
@property(nonatomic, setter=_setScreenCaptureEnabled:) _Bool _screenCaptureEnabled;
@property(nonatomic, setter=_setMediaDevicesEnabled:) _Bool _mediaDevicesEnabled;
@property(nonatomic, setter=_setPeerConnectionEnabled:) _Bool _peerConnectionEnabled;
@property(nonatomic, setter=_setLoadsImagesAutomatically:) _Bool _loadsImagesAutomatically;
@property(nonatomic, setter=_setShouldSuppressKeyboardInputDuringProvisionalNavigation:) _Bool _shouldSuppressKeyboardInputDuringProvisionalNavigation;
@property(nonatomic, setter=_setApplePayCapabilityDisclosureAllowed:) _Bool _applePayCapabilityDisclosureAllowed;
- (void)_setEnabled:(_Bool)arg1 forExperimentalFeature:(id)arg2;
- (_Bool)_isEnabledForExperimentalFeature:(id)arg1;
- (void)_setEnabled:(_Bool)arg1 forFeature:(id)arg2;
- (_Bool)_isEnabledForFeature:(id)arg1;
- (void)_setEnabled:(_Bool)arg1 forInternalDebugFeature:(id)arg2;
- (_Bool)_isEnabledForInternalDebugFeature:(id)arg1;
@property(copy, nonatomic, setter=_setFixedPitchFontFamily:) NSString *_fixedPitchFontFamily;
@property(nonatomic, setter=_setDefaultFixedPitchFontSize:) unsigned long long _defaultFixedPitchFontSize;
@property(nonatomic, setter=_setDefaultFontSize:) unsigned long long _defaultFontSize;
@property(nonatomic, setter=_setDiagnosticLoggingEnabled:) _Bool _diagnosticLoggingEnabled;
@property(nonatomic, getter=_isStandalone, setter=_setStandalone:) _Bool _standalone;
@property(nonatomic, setter=_setJavaScriptRuntimeFlags:) unsigned long long _javaScriptRuntimeFlags;
@property(nonatomic, setter=_setAllowFileAccessFromFileURLs:) _Bool _allowFileAccessFromFileURLs;
@property(nonatomic, setter=_setPageVisibilityBasedProcessSuppressionEnabled:) _Bool _pageVisibilityBasedProcessSuppressionEnabled;
@property(nonatomic, setter=_setHiddenPageDOMTimerThrottlingAutoIncreases:) _Bool _hiddenPageDOMTimerThrottlingAutoIncreases;
@property(nonatomic, setter=_setHiddenPageDOMTimerThrottlingEnabled:) _Bool _hiddenPageDOMTimerThrottlingEnabled;
@property(nonatomic, setter=_setLogsPageMessagesToSystemConsoleEnabled:) _Bool _logsPageMessagesToSystemConsoleEnabled;
@property(nonatomic, setter=_setDeveloperExtrasEnabled:) _Bool _developerExtrasEnabled;
@property(nonatomic, setter=_setSubpixelAntialiasedLayerTextEnabled:) _Bool _subpixelAntialiasedLayerTextEnabled;
@property(nonatomic, setter=_setTextAutosizingEnabled:) _Bool _textAutosizingEnabled;
@property(nonatomic, setter=_setAnimatedImageAsyncDecodingEnabled:) _Bool _animatedImageAsyncDecodingEnabled;
@property(nonatomic, setter=_setLargeImageAsyncDecodingEnabled:) _Bool _largeImageAsyncDecodingEnabled;
@property(nonatomic, setter=_setVisualViewportEnabled:) _Bool _visualViewportEnabled;
@property(nonatomic, setter=_setDisplayListDrawingEnabled:) _Bool _displayListDrawingEnabled;
@property(nonatomic, setter=_setAcceleratedDrawingEnabled:) _Bool _acceleratedDrawingEnabled;
@property(nonatomic, setter=_setSimpleLineLayoutDebugBordersEnabled:) _Bool _simpleLineLayoutDebugBordersEnabled;
@property(nonatomic, setter=_setSimpleLineLayoutEnabled:) _Bool _simpleLineLayoutEnabled;
@property(nonatomic, setter=_setVisibleDebugOverlayRegions:) unsigned long long _visibleDebugOverlayRegions;
@property(nonatomic, setter=_setResourceUsageOverlayVisible:) _Bool _resourceUsageOverlayVisible;
@property(nonatomic, setter=_setTiledScrollingIndicatorVisible:) _Bool _tiledScrollingIndicatorVisible;
@property(nonatomic, setter=_setCompositingRepaintCountersVisible:) _Bool _compositingRepaintCountersVisible;
@property(nonatomic, setter=_setCompositingBordersVisible:) _Bool _compositingBordersVisible;
@property(nonatomic, setter=_setAllowsPictureInPictureMediaPlayback:) _Bool _allowsPictureInPictureMediaPlayback;
@property(nonatomic, setter=_setFullScreenEnabled:) _Bool _fullScreenEnabled;
@property(nonatomic, setter=_setOfflineApplicationCacheIsEnabled:) _Bool _offlineApplicationCacheIsEnabled;
@property(nonatomic, setter=_setStorageBlockingPolicy:) long long _storageBlockingPolicy;
@property(nonatomic, setter=_setTelephoneNumberDetectionIsEnabled:) _Bool _telephoneNumberDetectionIsEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

