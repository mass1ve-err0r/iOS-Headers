//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDFinisher-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface DEDTestingFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;
+ (id)log;
- (id)flattenDirectories:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

