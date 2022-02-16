#ifndef RUNTIME_ERROR_STUB_H
#define RUNTIME_ERROR_STUB_H

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

void RuntimeErrorStub_Reset(void);
const char *RuntimeErrorStub_GetLastError(void);
int RuntimeErrorStub_GetLastParameter(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* RUNTIME_ERROR_STUB_H */
