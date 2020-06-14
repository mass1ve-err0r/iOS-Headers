//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoSystemSettings/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NSSUsageBundle : NSObject <NSSecureCoding>
{
    _Bool _purgeable;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
    unsigned long long _totalSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic, getter=isPurgeable) _Bool purgeable; // @synthesize purgeable=_purgeable;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

