//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REElementAction.h>

@interface REElementBlockAction : REElementAction
{
    CDUnknownBlockType _action;
}

@property(readonly, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_performWithContext:(id)arg1;
- (id)initWithAction:(CDUnknownBlockType)arg1;

@end

