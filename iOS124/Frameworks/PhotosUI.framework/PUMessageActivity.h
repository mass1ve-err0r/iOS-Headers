//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIMessageActivity.h>

#import <PhotosUI/PUMomentShareActivity-Protocol.h>

@class NSString, PUActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUMessageActivity : UIMessageActivity <PUMomentShareActivity>
{
    PUActivityItemSourceController *_itemSourceController;
}

+ (_Bool)wantsMomentShareLinkForAssetCount:(long long)arg1;
@property(nonatomic) __weak PUActivityItemSourceController *itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (void).cxx_destruct;
- (void)performActivity;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)_prepareWithMomentShareLink:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

