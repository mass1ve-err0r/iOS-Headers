//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface QLICSItemViewController : QLItemViewController
{
    UIScrollView *_scrollView;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
- (void).cxx_destruct;
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (id)scrollView;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;

@end

