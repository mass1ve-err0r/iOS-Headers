//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/NSCoding-Protocol.h>
#import <WebKitLegacy/NSCopying-Protocol.h>

@class NSArray, NSData, WebArchivePrivate, WebResource;

@interface WebArchive : NSObject <NSCoding, NSCopying>
{
    WebArchivePrivate *_private;
}

@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSArray *subframeArchives;
@property(readonly, copy, nonatomic) NSArray *subresources;
@property(readonly, nonatomic) WebResource *mainResource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)init;
- (struct LegacyWebArchive *)_coreLegacyWebArchive;
- (id)_initWithCoreLegacyWebArchive:(RefPtr_a4a1529f *)arg1;

@end

