//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FrontBoard/FBSceneHostSnapshotView-Protocol.h>

@class FBSceneSnapshot, NSString;

@interface FBSceneHostSnapshotView : UIView <FBSceneHostSnapshotView>
{
    FBSceneSnapshot *_snapshot;
}

@property(readonly, retain, nonatomic) FBSceneSnapshot *sceneSnapshot; // @synthesize sceneSnapshot=_snapshot;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) id IOSurface;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithSnapshot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
