//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoHandleValueAddedServiceTransactionsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_transactionPassIDs;
    NSMutableArray *_transactionsBytes;
}

+ (Class)transactionPassIDsType;
+ (Class)transactionsBytesType;
@property(retain, nonatomic) NSMutableArray *transactionPassIDs; // @synthesize transactionPassIDs=_transactionPassIDs;
@property(retain, nonatomic) NSMutableArray *transactionsBytes; // @synthesize transactionsBytes=_transactionsBytes;
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
- (id)transactionPassIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionPassIDsCount;
- (void)addTransactionPassIDs:(id)arg1;
- (void)clearTransactionPassIDs;
- (id)transactionsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionsBytesCount;
- (void)addTransactionsBytes:(id)arg1;
- (void)clearTransactionsBytes;

@end

