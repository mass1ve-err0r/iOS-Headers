//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface XBLaunchInterface : NSObject <BSXPCCoding, NSSecureCoding>
{
    _Bool _default;
    unsigned long long _type;
    NSString *_name;
    NSString *_identifier;
    NSArray *_urlSchemes;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *urlSchemes; // @synthesize urlSchemes=_urlSchemes;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic, getter=_isDefault) _Bool _default; // @synthesize _default;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isXIB;
@property(readonly, nonatomic) _Bool isStoryboard;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 identifier:(id)arg3 urlSchemes:(id)arg4 isDefault:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

