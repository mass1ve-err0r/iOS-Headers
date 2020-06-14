//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/NSCopying-Protocol.h>

@interface PHAJobConstraints : NSObject <NSCopying>
{
    _Bool _canRunAutomaticBackgroundAnalysis;
    _Bool _canRunAutomaticForegroundAnalysis;
    _Bool _canRunUserInitiatedForegroundAnalysis;
    _Bool _canUseNetwork;
    _Bool _turboMode;
}

+ (id)constraintsWithAllAllowances;
+ (id)constraintsWithNoAllowances;
@property(nonatomic, getter=isTurboMode) _Bool turboMode; // @synthesize turboMode=_turboMode;
@property(readonly, nonatomic) _Bool canUseNetwork; // @synthesize canUseNetwork=_canUseNetwork;
@property(readonly, nonatomic) _Bool canRunUserInitiatedForegroundAnalysis; // @synthesize canRunUserInitiatedForegroundAnalysis=_canRunUserInitiatedForegroundAnalysis;
@property(readonly, nonatomic) _Bool canRunAutomaticForegroundAnalysis; // @synthesize canRunAutomaticForegroundAnalysis=_canRunAutomaticForegroundAnalysis;
@property(readonly, nonatomic) _Bool canRunAutomaticBackgroundAnalysis; // @synthesize canRunAutomaticBackgroundAnalysis=_canRunAutomaticBackgroundAnalysis;
- (id)statusAsDictionary;
- (_Bool)isEqualToConstraints:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)applyConstraints:(id)arg1 usingMask:(id)arg2;
- (id)asBitString;
- (id)initFromBitString:(id)arg1;
- (id)initWithCanRunAutomaticBackgroundAnalysis:(_Bool)arg1 canRunAutomaticForegroundAnalysis:(_Bool)arg2 canRunUserInitiatedForegroundAnalysis:(_Bool)arg3 canUseNetwork:(_Bool)arg4;

@end

