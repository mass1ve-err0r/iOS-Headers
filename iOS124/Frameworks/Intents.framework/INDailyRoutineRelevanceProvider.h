//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INRelevanceProvider.h>

@interface INDailyRoutineRelevanceProvider : INRelevanceProvider
{
    long long _situation;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long situation; // @synthesize situation=_situation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSituation:(long long)arg1;

@end

