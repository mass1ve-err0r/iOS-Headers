//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAGLShowGlance : SABaseClientBoundCommand
{
}

+ (id)showGlanceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showGlance;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

