//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

@interface DDPreviewAction : DDAction
{
}

+ (id)previewActionForURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)platterSubtitle;
- (id)platterTitle;
- (void)setPreviewMode:(_Bool)arg1;
- (_Bool)requiresEmbeddingNavigationController;
- (_Bool)wantsSeamlessCommit;
- (id)commitURL;
- (id)viewController;
- (id)createViewController;
- (void)dealloc;

@end

