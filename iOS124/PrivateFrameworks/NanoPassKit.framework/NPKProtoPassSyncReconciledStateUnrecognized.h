//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoPassSyncState, NSData;

@interface NPKProtoPassSyncReconciledStateUnrecognized : PBCodable <NSCopying>
{
    NPKProtoPassSyncState *_libraryPassSyncState;
    NSData *_unrecognizedReconciledStateHash;
}

@property(retain, nonatomic) NPKProtoPassSyncState *libraryPassSyncState; // @synthesize libraryPassSyncState=_libraryPassSyncState;
@property(retain, nonatomic) NSData *unrecognizedReconciledStateHash; // @synthesize unrecognizedReconciledStateHash=_unrecognizedReconciledStateHash;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLibraryPassSyncState;
@property(readonly, nonatomic) _Bool hasUnrecognizedReconciledStateHash;

@end

