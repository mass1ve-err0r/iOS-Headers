//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>
{
    unsigned long long _fileId;
}

+ (_Bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
@property(readonly) unsigned long long fileId; // @synthesize fileId=_fileId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileId:(unsigned long long)arg1;

@end

