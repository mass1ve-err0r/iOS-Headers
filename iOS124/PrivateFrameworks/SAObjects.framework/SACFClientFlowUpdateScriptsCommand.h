//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFClientFlowUpdateScriptsCommand : SABaseClientBoundCommand
{
}

+ (id)clientFlowUpdateScriptsCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientFlowUpdateScriptsCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *scripts;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

