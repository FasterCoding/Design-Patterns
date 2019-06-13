all: singleton \
	 builder

singleton:
	@$(MAKE) --no-print-directory -C Singleton
	@echo "\n==== $@ ====\n"
	@cd bin && ./Singleton

builder:
	@$(MAKE) --no-print-directory -C Builder
	@echo "\n==== $@ ====\n"
	@cd bin && ./BuilderPattern

.PHONY: clean
clean:
	@rm -rf bin build