//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSCopying-Protocol.h>
#import <XCTest/NSSecureCoding-Protocol.h>

@class NSString;

@interface XCTTestIdentifier : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleName;
    NSString *_className;
    NSString *_methodName;
    NSString *_stringRepresentation;
    NSString *_bundleAgnosticStringRepresentation;
}

+ (id)identifiersGroupedByClass:(id)arg1;
+ (id)minimumEquivalentIdentifiers:(id)arg1;
+ (id)testIdentifiersForStringIdentifiers:(id)arg1 inBundleWithName:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)identifierForClass:(Class)arg1;
@property(readonly) NSString *bundleAgnosticStringRepresentation; // @synthesize bundleAgnosticStringRepresentation=_bundleAgnosticStringRepresentation;
@property(readonly) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
@property(readonly) NSString *methodName; // @synthesize methodName=_methodName;
@property(readonly) NSString *className; // @synthesize className=_className;
@property(readonly) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void).cxx_destruct;
@property(readonly) XCTTestIdentifier *classIdentifier;
@property(readonly) XCTTestIdentifier *bundleIdentifier;
@property(readonly) unsigned long long type;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleName:(id)arg1 bundleAgnosticStringRepresentation:(id)arg2;
- (id)initWithStringRepresentation:(id)arg1;
- (id)initWithBundleName:(id)arg1;
- (id)initWithBundleName:(id)arg1 className:(id)arg2;
- (id)initWithBundleName:(id)arg1 className:(id)arg2 methodName:(id)arg3;

@end

