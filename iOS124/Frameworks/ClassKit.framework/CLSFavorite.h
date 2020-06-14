//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

@class NSArray, NSString, NSURL;

@interface CLSFavorite : CLSObject
{
    NSString *_title;
    NSString *_storeIdentifier;
    int _type;
    NSArray *_contextIdentifierPath;
    NSURL *_URL;
    long long _contextType;
    NSString *_bundleIdentifier;
    NSString *_contentStoreIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *contentStoreIdentifier; // @synthesize contentStoreIdentifier=_contentStoreIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSArray *contextIdentifierPath; // @synthesize contextIdentifierPath=_contextIdentifierPath;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *storeIdentifier;
@property(copy, nonatomic) NSString *title;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithTitle:(id)arg1 URL:(id)arg2 andBundleIdentifier:(id)arg3;
- (id)initWithTitle:(id)arg1 context:(id)arg2;
- (id)initWithTitle:(id)arg1 contextIdentifierPath:(id)arg2 URL:(id)arg3 type:(int)arg4 contextType:(long long)arg5 andBundleIdentifier:(id)arg6 contentStoreIdentifier:(id)arg7;

@end

