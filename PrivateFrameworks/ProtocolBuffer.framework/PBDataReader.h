/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBDataReader : NSObject {
    const char *_bytes;
    NSData *_data;
    BOOL _error;
    unsigned int _length;
    unsigned int _pos;
}

@property unsigned int length;
@property unsigned int position;

- (id)data;
- (void)dealloc;
- (BOOL)hasError;
- (BOOL)hasMoreData;
- (id)initWithData:(id)arg1;
- (BOOL)isAtEnd;
- (unsigned int)length;
- (BOOL)mark:(struct { unsigned int x1; unsigned int x2; }*)arg1;
- (unsigned int)offset;
- (unsigned int)position;
- (BOOL)readBOOL;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (unsigned long long)readBigEndianFixed64;
- (id)readBigEndianShortThenString;
- (id)readBytes:(unsigned int)arg1;
- (id)readData;
- (double)readDouble;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (float)readFloat;
- (int)readInt32;
- (long long)readInt64;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (int)readSfixed32;
- (long long)readSfixed64;
- (int)readSint32;
- (long long)readSint64;
- (id)readString;
- (void)readTag:(unsigned short*)arg1 andType:(char *)arg2;
- (unsigned int)readUint32;
- (unsigned long long)readUint64;
- (long long)readVarInt;
- (void)recall:(const struct { unsigned int x1; unsigned int x2; }*)arg1;
- (BOOL)seekToOffset:(unsigned int)arg1;
- (void)setLength:(unsigned int)arg1;
- (void)setPosition:(unsigned int)arg1;
- (BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (void)updateData:(id)arg1;

@end