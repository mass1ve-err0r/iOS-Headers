//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLPreviewController.h>

#import <ChatKit/QLPreviewControllerDataSource-Protocol.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource>
{
    _Bool _controllerWasDismissed;
    _Bool _suppressRefetchingCurrentHighQualityImage;
    NSArray *_previewItems;
}

@property(nonatomic) _Bool suppressRefetchingCurrentHighQualityImage; // @synthesize suppressRefetchingCurrentHighQualityImage=_suppressRefetchingCurrentHighQualityImage;
@property(nonatomic) _Bool controllerWasDismissed; // @synthesize controllerWasDismissed=_controllerWasDismissed;
@property(copy, nonatomic) NSArray *previewItems; // @synthesize previewItems=_previewItems;
- (void).cxx_destruct;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewActions;
- (id)currentPreviewItem;
- (void)setDataSource:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

@end

