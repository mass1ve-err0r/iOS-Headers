//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCGenerationID, NSData, NSString;

@interface BRCPackageItem : NSObject
{
    _Bool _isDirty;
    NSString *_symlinkContent;
    NSData *_contentSignature;
    BOOL _mode;
    int _type;
    long long _assetRank;
    unsigned long long _packageID;
    unsigned long long _fileID;
    BRCGenerationID *_generationID;
    NSString *_pathInPackage;
    long long _mtime;
    long long _size;
    NSData *_quarantineInfo;
    NSData *_xattrs;
}

+ (_Bool)dumpSession:(id)arg1 toContext:(id)arg2 db:(id)arg3 error:(id *)arg4;
+ (_Bool)packageChangedAtRelativePath:(id)arg1;
+ (_Bool)updateSnapshotAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)_rescanDirectoryInPackage:(id)arg1 error:(id *)arg2;
+ (_Bool)_deleteSnapshotAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)updateSignaturesForFilesInItem:(id)arg1 fromCKPackage:(id)arg2 error:(id *)arg3;
+ (long long)aggregatePackageSizeForPackageID:(unsigned int)arg1 session:(id)arg2;
+ (struct PQLResultSet *)packageItemsForItem:(id)arg1 order:(unsigned long long)arg2;
+ (struct PQLResultSet *)packageItemsForDocumentID:(unsigned int)arg1 order:(unsigned long long)arg2 session:(id)arg3;
+ (long long)largestPackageItemSizeInDocumentID:(unsigned int)arg1 session:(id)arg2;
+ (id)packageItemForRelpath:(id)arg1;
+ (id)packageItemWithDocumentID:(unsigned int)arg1 relativePath:(id)arg2 session:(id)arg3;
@property(readonly, nonatomic) NSData *xattrs; // @synthesize xattrs=_xattrs;
@property(readonly, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) BOOL mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long mtime; // @synthesize mtime=_mtime;
@property(readonly, nonatomic) NSString *pathInPackage; // @synthesize pathInPackage=_pathInPackage;
@property(readonly, nonatomic) BRCGenerationID *generationID; // @synthesize generationID=_generationID;
@property(readonly, nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) unsigned long long packageDocumentID; // @synthesize packageDocumentID=_packageID;
@property(readonly, nonatomic) long long assetRank; // @synthesize assetRank=_assetRank;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)setDirty:(_Bool)arg1 session:(id)arg2;
- (_Bool)saveToDBWithSession:(id)arg1;
- (id)initFromPQLResultSet:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)initWithPBItem:(id)arg1 forLocalItem:(id)arg2;
- (id)initWithRelativePath:(id)arg1 markDirty:(_Bool)arg2;
- (id)description;
@property(readonly, nonatomic) NSData *contentSignature;
@property(readonly, nonatomic) NSString *symlinkContent;
- (_Bool)changedAtRelpath:(id)arg1;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, nonatomic) _Bool isSymLink;
@property(readonly, nonatomic) _Bool isFile;

@end

