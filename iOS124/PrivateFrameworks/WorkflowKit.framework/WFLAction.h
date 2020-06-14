//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface WFLAction : NSObject <NSCopying>
{
    NSString *_identifier;
    NSDictionary *_parameters;
}

@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) Class implementationClass;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;

@end

