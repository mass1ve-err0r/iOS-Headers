//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding>
{
    _Bool _readonly;
    _Bool _backedByFileProvider;
    NSData *_scope;
    NSURL *_url;
    NSString *_providerIdentifier;
    NSString *_domainIdentifier;
    NSString *_itemIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic, getter=isBackedByFileProvider) _Bool backedByFileProvider; // @synthesize backedByFileProvider=_backedByFileProvider;
@property(readonly, nonatomic, getter=isReadonly) _Bool readonly; // @synthesize readonly=_readonly;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSData *_scope; // @synthesize _scope;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2 scope:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2 extensionClass:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(_Bool)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;

@end

