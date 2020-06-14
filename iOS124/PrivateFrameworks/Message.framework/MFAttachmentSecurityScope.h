//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSFileCoordinator, NSURL;

@interface MFAttachmentSecurityScope : NSObject
{
    NSFileCoordinator *_fileCoordinator;
    NSURL *_securityScopedURL;
    NSData *_securityScopeToken;
    NSURL *_secureReadURL;
    _Bool _securedRead;
    NSURL *_secureWriteURL;
    _Bool _securedWrite;
}

+ (id)securityScopedURL:(id)arg1 withToken:(id)arg2;
+ (id)securityScopedURL:(id)arg1;
- (_Bool)isBundle;
- (_Bool)isReadable;
- (id)data;
- (void)_attachSecurityScope;
- (id)securityScopeToken;
- (void)stopAccess;
- (void)_removeTemporaryReadURL;
- (id)_temporaryReadURL:(id)arg1 error:(id *)arg2;
- (id)startReadAccess;
- (id)startWriteAccess;
- (void)dealloc;
- (id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2;

@end

