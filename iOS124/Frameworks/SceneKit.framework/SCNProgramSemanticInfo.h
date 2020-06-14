//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding>
{
    NSString *_semantic;
    NSDictionary *_options;
}

+ (_Bool)supportsSecureCoding;
+ (id)infoWithSemantic:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *semantic; // @synthesize semantic=_semantic;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

