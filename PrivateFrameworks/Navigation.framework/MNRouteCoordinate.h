/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRouteCoordinate : PBCodable <NSCopying> {
    struct { 
        unsigned int index : 1; 
        unsigned int offset : 1; 
    }  _has;
    unsigned int  _index;
    float  _offset;
}

@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int index;
@property (nonatomic) float offset;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIndex;
- (BOOL)hasOffset;
- (unsigned int)hash;
- (unsigned int)index;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)offset;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIndex:(BOOL)arg1;
- (void)setHasOffset:(BOOL)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setOffset:(float)arg1;
- (void)writeTo:(id)arg1;

@end
