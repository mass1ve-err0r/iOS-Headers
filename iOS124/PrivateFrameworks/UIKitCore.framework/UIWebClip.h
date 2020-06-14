//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableData, NSString, NSURL, NSURLConnection, UIImage;
@protocol WebClipDelegate;

@interface UIWebClip : NSObject
{
    NSString *identifier;
    NSURL *pageURL;
    NSArray *icons;
    unsigned long long currentIconIndex;
    NSURL *startupImageURL;
    NSURL *startupLandscapeImageURL;
    NSString *title;
    _Bool fullScreen;
    _Bool classicMode;
    _Bool removalDisallowed;
    _Bool iconIsScreenShotBased;
    _Bool iconIsPrecomposed;
    _Bool iconIsPrerendered;
    unsigned long long supportedOrientations;
    long long statusBarStyle;
    UIImage *iconImage;
    UIImage *startupImage;
    UIImage *startupLandscapeImage;
    UIImage *initialLaunchImage;
    id <WebClipDelegate> delegate;
    NSMutableData *_customIconData;
    NSURLConnection *_iconConnection;
    NSMutableData *_customStartupImageData;
    NSURLConnection *_startupImageConnection;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_startupLandscapeImageConnection;
    unsigned long long _webClipStatusBarStyle;
}

+ (id)urlForWebClipWithIdentifier:(id)arg1;
+ (id)pathForWebClipCacheWithIdentifier:(id)arg1;
+ (id)pathForWebClipStorageWithIdentifier:(id)arg1;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (id)webClipsDirectoryPath;
+ (id)_webClipLinkTagsFromWebDocumentView:(id)arg1;
+ (id)webClipIconsForWebDocumentView:(id)arg1;
+ (id)webClipIconsForWebClipLinkTags:(id)arg1 pageURL:(id)arg2;
+ (unsigned long long)webClipOrientationsForWebDocumentView:(id)arg1;
+ (unsigned long long)_webClipOrientationsForMetaTagContent:(id)arg1;
+ (_Bool)webClipClassicModeValueForWebDocumentView:(id)arg1;
+ (id)webClipTitleForWebDocumentView:(id)arg1;
+ (_Bool)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (_Bool)_webClipFullScreenValueForMetaTagContent:(id)arg1;
+ (long long)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (long long)_webClipStatusBarStyleForMetaTagContent:(id)arg1;
+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (id)webClipIdentifierFromBundleIdentifier:(id)arg1;
+ (_Bool)bundleIdentifierContainsWebClipIdentifier:(id)arg1;
+ (id)webClips;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClipWithIdentifier:(id)arg1;
@property(nonatomic) unsigned long long webClipStatusBarStyle; // @synthesize webClipStatusBarStyle=_webClipStatusBarStyle;
@property(nonatomic) __weak id <WebClipDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIImage *initialLaunchImage; // @synthesize initialLaunchImage;
@property(retain, nonatomic) UIImage *startupLandscapeImage; // @synthesize startupLandscapeImage;
@property(retain, nonatomic) UIImage *startupImage; // @synthesize startupImage;
@property long long statusBarStyle; // @synthesize statusBarStyle;
@property unsigned long long supportedOrientations; // @synthesize supportedOrientations;
@property(readonly) _Bool iconIsPrerendered; // @synthesize iconIsPrerendered;
@property(readonly) _Bool iconIsPrecomposed; // @synthesize iconIsPrecomposed;
@property(readonly) _Bool iconIsScreenShotBased; // @synthesize iconIsScreenShotBased;
@property _Bool removalDisallowed; // @synthesize removalDisallowed;
@property _Bool classicMode; // @synthesize classicMode;
@property _Bool fullScreen; // @synthesize fullScreen;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(retain) NSURL *startupLandscapeImageURL; // @synthesize startupLandscapeImageURL;
@property(retain) NSURL *startupImageURL; // @synthesize startupImageURL;
@property(retain) NSArray *icons; // @synthesize icons;
@property(retain, nonatomic) NSURL *pageURL; // @synthesize pageURL;
@property(copy) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
- (id)getStartupImage:(long long)arg1;
- (void)requestCustomLandscapeStartupImageUpdate;
- (void)requestCustomPortraitStartupImageUpdate;
- (void)requestCustomIconUpdate;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (_Bool)tryLoadingNextCustomIcon;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1;
- (void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg1 baseURL:(id)arg2;
- (void)requestIconUpdateInSpringBoard;
- (id)bundleIdentifier;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)stopLoadingStartupLandscapeImage;
- (void)stopLoadingStartupImage;
- (void)stopLoadingCustomIcon;
- (void)cancelMediaUpdate;
- (void)dealloc;
- (void)setIconImageFromScreenshot:(id)arg1;
- (void)setIconImage:(id)arg1 isPrecomposed:(_Bool)arg2;
- (void)_setIconImage:(id)arg1 isPrecomposed:(_Bool)arg2 isScreenShotBased:(_Bool)arg3;
@property(readonly, retain, nonatomic) UIImage *iconImage;
- (id)generateIconImageForFormat:(int)arg1 scale:(double)arg2;
@property(readonly) NSString *iconImagePath;
- (id)_bundleImageWithName:(id)arg1;
- (id)_bundleResourceWithName:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (_Bool)removeFromDisk;
- (_Bool)createOnDisk;
- (_Bool)updateOnDisk;
- (_Bool)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2;
- (id)_info;
- (void)_reloadProperties;
- (void)_readPropertiesFromBundle:(id)arg1;
- (void)configureWithMetaTags:(id)arg1 linkTags:(id)arg2;

@end

