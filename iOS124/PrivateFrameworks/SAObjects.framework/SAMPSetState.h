//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@interface SAMPSetState : SADomainCommand
{
}

+ (id)setStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setState;
- (_Bool)requiresResponse;
@property(nonatomic) int state;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

