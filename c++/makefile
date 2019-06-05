all: singleton

singleton:
	@$(MAKE) --no-print-directory -C Singleton
	@echo "\n==== $@ ====\n"
	@cd bin && ./Singleton

.PHONY: clean
clean:
	@rm -rf bin build