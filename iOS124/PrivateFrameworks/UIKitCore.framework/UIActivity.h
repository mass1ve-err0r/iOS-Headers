//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIActivityExtensionItemDataProviding-Protocol.h>
#import <UIKitCore/UIActivityExtensionItemDataReceiving-Protocol.h>

@class NSExtension, NSString, NSUUID, UIImage, UIViewController, _UIActivityResourceLoader;

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving>
{
    long long _defaultPriority;
    _UIActivityResourceLoader *_activityImageLoader;
    _UIActivityResourceLoader *_activitySettingsImageLoader;
    CDUnknownBlockType _activityCompletionWithItemsHandler;
    CDUnknownBlockType _didFinishPerformingActivityHandler;
    long long _maxPreviews;
    unsigned long long _indexInApplicationDefinedActivities;
    NSUUID *_activityUUID;
}

+ (Class)classForPreparingExtensionItemData;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (void)_performAfterActivityImageLoadingCompletes:(CDUnknownBlockType)arg1;
+ (id)_imageByApplyingDefaultEffectsToImage:(id)arg1 activityCategory:(long long)arg2;
+ (id)_defaultFallbackActivityType;
+ (_Bool)_isCapabilityBasedActivity;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (id)_activitySettingsImageForBundleImageConfiguration:(id)arg1;
+ (id)_activityImageForBundleImageConfiguration:(id)arg1;
+ (id)_activitySettingsImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activityImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activityImageForActionRepresentationImage:(id)arg1;
@property(readonly, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(nonatomic) unsigned long long indexInApplicationDefinedActivities; // @synthesize indexInApplicationDefinedActivities=_indexInApplicationDefinedActivities;
@property(nonatomic) long long maxPreviews; // @synthesize maxPreviews=_maxPreviews;
@property(copy, nonatomic) CDUnknownBlockType didFinishPerformingActivityHandler; // @synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler;
@property(copy, nonatomic) CDUnknownBlockType activityCompletionWithItemsHandler; // @synthesize activityCompletionWithItemsHandler=_activityCompletionWithItemsHandler;
- (void).cxx_destruct;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
@property(readonly, nonatomic) CDUnknownBlockType _backgroundPreheatBlock;
@property(readonly, nonatomic) _UIActivityResourceLoader *_activitySettingsImageLoader;
@property(readonly, nonatomic) _UIActivityResourceLoader *_activityImageLoader;
- (_Bool)_wantsAttachmentURLItemData;
- (_Bool)_wantsThumbnailItemData;
- (_Bool)_activitySupportsPromiseURLs;
- (void)_willPresentAsFormSheet;
- (_Bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_setActivityCompletionWithItemsHandler:(CDUnknownBlockType)arg1;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (_Bool)_supportsOpenInPlace;
- (_Bool)_appIsDocumentTypeOwner;
- (long long)_defaultSortGroup;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (void)activityDidFinish:(_Bool)arg1;
- (void)performActivity;
- (void)_willBePerformedOrPresented;
@property(readonly, nonatomic) UIViewController *activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
@property(readonly, nonatomic) UIImage *activityImage;
@property(readonly, nonatomic) NSString *activityTitle;
@property(readonly, nonatomic) NSString *activityType;
- (id)init;
- (_Bool)_isExecutedInProcess;
- (void)_injectedJavaScriptResult:(id)arg1;
- (struct CGSize)_thumbnailSize;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanup;
- (id)_embeddedActivityViewController;
- (id)_beforeActivity;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)_activitySettingsBundleImageConfiguration;
- (id)_activityBundleImageConfiguration;
- (id)_bundleIdentifierForActivityImageCreation;
@property(readonly, nonatomic) NSExtension *applicationExtension;
- (id)_encodableActivitySettingsImageConfiguration;
- (id)_encodableActivityImageConfiguration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

