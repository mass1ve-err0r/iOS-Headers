//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemAggregatedViewController.h>

@class QLImageItemViewController, QLMarkupImageItemViewController;

__attribute__((visibility("hidden")))
@interface QLImageItemAggregatedViewController : QLItemAggregatedViewController
{
    QLMarkupImageItemViewController *_imageMarkupPreviewController;
    QLImageItemViewController *_imagePreviewController;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (id)_imagePreviewController;
- (id)_imageMarkupPreviewController;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

