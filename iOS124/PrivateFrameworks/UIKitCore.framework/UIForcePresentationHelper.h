//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIForcePresentationHelper : NSObject
{
}

+ (void)applyPhase:(unsigned long long)arg1 toSnapshotView:(id)arg2;
+ (id)snapshotViewForSourceView:(id)arg1 sourceRect:(struct CGRect)arg2;
+ (struct CGRect)sourceRectForView:(id)arg1 proposedSourceRect:(struct CGRect)arg2;
+ (id)visualEffectForPresentationPhase:(unsigned long long)arg1 traitCollection:(id)arg2 variant:(long long)arg3;

@end

