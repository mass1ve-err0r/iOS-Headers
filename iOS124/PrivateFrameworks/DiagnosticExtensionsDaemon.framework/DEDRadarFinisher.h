//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDFinisher-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSURLSessionDataDelegate-Protocol.h>

@class DEDBugSession, NSArray, NSMutableSet, NSString;
@protocol OS_os_log;

@interface DEDRadarFinisher : NSObject <NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving>
{
    float _percentComplete;
    DEDBugSession *_session;
    NSObject<OS_os_log> *_log;
    NSArray *_attachments;
    NSMutableSet *_uploadItems;
}

+ (id)archivedClasses;
+ (_Bool)supportsSecureCoding;
@property(retain) NSMutableSet *uploadItems; // @synthesize uploadItems=_uploadItems;
@property(retain) NSArray *attachments; // @synthesize attachments=_attachments;
@property float percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property __weak DEDBugSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)isWatch;
- (_Bool)allUploadsComplete;
- (id)getUploadItemForTask:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

