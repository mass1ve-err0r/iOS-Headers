/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {
    NSString * _fileProviderIdentifier;
    NSString * _itemIdentifier;
}

@property (readonly, copy) NSString *fileProviderIdentifier;
@property (readonly, copy) NSString *itemIdentifier;

+ (id)knownFileProviderIdentifiersSoFar;
+ (bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileProviderIdentifier:(id)arg1 itemIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifier;

@end