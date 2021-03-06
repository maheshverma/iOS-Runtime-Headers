/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArrayTypeInternal : MTLArrayType {
    unsigned int  _arrayLength;
    id  _details;
    unsigned int  _elementType;
    unsigned int  _stride;
}

- (unsigned int)arrayLength;
- (void)dealloc;
- (id)describe;
- (id)elementArrayType;
- (id)elementStructType;
- (unsigned int)elementType;
- (id)initWithArrayLength:(unsigned int)arg1 elementType:(unsigned int)arg2 stride:(unsigned int)arg3 details:(id)arg4;
- (unsigned int)stride;

@end
