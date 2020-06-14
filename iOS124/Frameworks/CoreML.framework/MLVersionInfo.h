//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MLVersionInfo : NSObject
{
    long long _majorVersion;
    long long _minorVersion;
    long long _patchVersion;
    NSString *_variantString;
}

+ (id)versionInfoWithString:(id)arg1;
+ (id)versionInfoWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4;
@property(readonly) NSString *variantString; // @synthesize variantString=_variantString;
@property(readonly) long long patchVersion; // @synthesize patchVersion=_patchVersion;
@property(readonly) long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly) long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (void).cxx_destruct;
- (_Bool)olderThan:(id)arg1;
@property(readonly, nonatomic) NSString *versionString;
@property(readonly, nonatomic) NSString *versionNumberString;
- (id)initWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 variant:(id)arg4;

@end

