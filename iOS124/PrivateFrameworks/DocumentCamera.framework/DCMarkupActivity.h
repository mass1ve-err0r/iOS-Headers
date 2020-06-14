//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class ICDocCamDocumentInfo, ICDocCamImageCache, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface DCMarkupActivity : UIActivity
{
    unsigned long long _inkStyle;
    UIView *_fromView;
    UIViewController *_presentingViewController;
    ICDocCamDocumentInfo *_documentInfo;
    ICDocCamImageCache *_imageCache;
    CDUnknownBlockType _frameBlock;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType frameBlock; // @synthesize frameBlock=_frameBlock;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) ICDocCamDocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) unsigned long long inkStyle; // @synthesize inkStyle=_inkStyle;
- (void).cxx_destruct;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

